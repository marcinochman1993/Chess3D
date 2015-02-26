/*
 * ConfigurationManager.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationManager.hpp"

void MOSoft::Configuration::ConfigurationManager::ConfigurationEntry::addEntry(
		const ConfigurationEntry& entry)
{
	m_children.insert(entry);
}

bool MOSoft::Configuration::ConfigurationManager::ConfigurationEntry::operator==(
		const ConfigurationEntry& entry) const
{
	return name() == name() && attributes() == entry.attributes()
			&& children() == entry.children();
}

bool MOSoft::Configuration::ConfigurationManager::ConfigurationEntry::operator<(
		const ConfigurationEntry& entry) const
{
	return name() < entry.name()
			|| (name() == entry.name() && attributes() < entry.attributes())
			|| (name() == entry.name() && attributes() == entry.attributes()
					&& children() < entry.children());
}

bool MOSoft::Configuration::ConfigurationManager::ConfigurationEntry::operator>(
		const ConfigurationEntry& entry) const
{
	return name() > entry.name()
				|| (name() == entry.name() && attributes() > entry.attributes())
				|| (name() == entry.name() && attributes() == entry.attributes()
						&& children() > entry.children());
}
