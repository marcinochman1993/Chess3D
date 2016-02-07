/*
 * ConfigurationManager.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationManager.hpp"
#include <algorithm>

using namespace MOSoft::Configuration;
using namespace std;

namespace MOSoft
{
  
  const String::String& ConfigurationManager::operator[](const String::String& optionName) const
  {
    auto foundIt = find_if(m_mainEntries.begin(), m_mainEntries.end(),
			   [&optionName](const ConfigurationEntry& entry)
			   {
			     return entry.name() == optionName;
			   });


    if(foundIt != m_mainEntries.end())
      return foundIt->name();
    
    return ""; // TODO change it
  }

  void ConfigurationManager::addEntry(const ConfigurationEntry& entry)
  {
    m_mainEntries.push_back(entry);
  }
  
}
