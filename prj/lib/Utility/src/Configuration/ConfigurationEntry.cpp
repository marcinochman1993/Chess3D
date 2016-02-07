/*
 * ConfigurationEntry.cpp
 *
 *  Created on: Dec 22, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationEntry.hpp"
#include <utility>

using namespace MOSoft::Configuration;
using namespace std;


void ConfigurationEntry::addEntry(const ConfigurationEntry& entry)
{
  m_children.insert(entry);
}


void ConfigurationEntry::addAttribute(const String::String& attrName,
				      const String::String& attrValue)
{
  m_attributes.insert(make_pair(attrName, attrValue));
}

void ConfigurationEntry::name(const String::String& newName)
{
  m_name = newName;
}


bool ConfigurationEntry::operator==(const ConfigurationEntry& entry) const
{
  return name() == name() && attributes() == entry.attributes()
    && children() == entry.children();
}

bool ConfigurationEntry::operator<(const ConfigurationEntry& entry) const
{
  return name() < entry.name()
		  || (name() == entry.name() && attributes() < entry.attributes())
    || (name() == entry.name() && attributes() == entry.attributes()
	&& children() < entry.children());
}

bool ConfigurationEntry::operator>(const ConfigurationEntry& entry) const
{
  return name() > entry.name()
		  || (name() == entry.name() && attributes() > entry.attributes())
    || (name() == entry.name() && attributes() == entry.attributes()
	&& children() > entry.children());
}
