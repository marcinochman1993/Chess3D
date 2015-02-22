/*
 * ConfigurationManager.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationManager.hpp"

void MOSoft::Configuration::ConfigurationManager::addEntry(const MOSoft::String::String& name,
		const MOSoft::String::String& value)
{
	if (containsOption(value))
		throw ""; // TODO nowy wyjątek napisać
	m_settings.insert(std::make_pair(name, value));
}

bool MOSoft::Configuration::ConfigurationManager::containsOption(
		const MOSoft::String::String& optionName) const
{
	auto foundIt = m_settings.find(optionName);
	return foundIt != m_settings.cend();
}
