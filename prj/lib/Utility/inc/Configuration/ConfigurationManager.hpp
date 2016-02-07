/*
 * ConfigurationManager.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef UTILITY_CONFIGURATION_CONFIGURATIONMANAGER_HPP_
#define UTILITY_CONFIGURATION_CONFIGURATIONMANAGER_HPP_

#include <map>
#include <set>
#include "String.hpp"
#include "ConfigurationEntry.hpp"

namespace MOSoft
{
  namespace Configuration
  {
    class ConfigurationManager
    {
    public:    
      ConfigurationManager() = default;
      const String::String& operator[](const String::String& optionName) const;
      void addEntry(const ConfigurationEntry& entry);
    private:
      std::vector<ConfigurationEntry> m_mainEntries;

    };
  }
}

#endif /* UTILITY_CONFIGURATION_CONFIGURATIONMANAGER_HPP__ */
