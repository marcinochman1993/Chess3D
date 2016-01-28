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
      const MOSoft::String::String& operator[](const MOSoft::String::String& optionName) const;
      
    private:
      ConfigurationEntry m_mainEntry;

    };
  }
}

#endif /* UTILITY_CONFIGURATION_CONFIGURATIONMANAGER_HPP__ */
