/*
 * ConfigurationEntry.cpp
 *
 *  Created on: Dec 22, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationEntry.hpp"

using namespace MOSoft::Configuration;

void ConfigurationEntry::addEntry(const ConfigurationEntry& entry)
{
  m_children.insert(entry);
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
