/*
 * ConfigurationEntry.hpp
 *
 *  Created on: Dec 22, 2015
 *      Author: mochman
 */
#ifndef CONFIGURATION_ENTRY_HPP
#define CONFIGURATION_ENTRY_HPP


#include <map>
#include <set>
#include "String.hpp"


namespace MOSoft
{
  namespace Configuration
  {

    class ConfigurationEntry
    {
    public:
      ConfigurationEntry() = default;
      void addEntry(const ConfigurationEntry& entry);
      void addAttribute(const String::String& attrName, const String::String& attrValue);
      const String::String& name() const { return m_name; }
      void name(const String::String& newName);
      const std::set<ConfigurationEntry>& children() const { return m_children; }
      const std::map<String::String, String::String> attributes() const { return m_attributes; }
      bool operator==(const ConfigurationEntry& entry) const;
      bool operator!=(const ConfigurationEntry& entry) const { return !(*this==entry); }
      bool operator<(const ConfigurationEntry& entry) const;
      bool operator>=(const ConfigurationEntry& entry) const { return !(*this<entry); }
      bool operator>( const ConfigurationEntry& entry) const;
      bool operator<=(const ConfigurationEntry& entry) const { return !(*this>entry); }
    private:
      String::String m_name;
      std::map<String::String, String::String> m_attributes;
      std::set<ConfigurationEntry> m_children;
    };

  }
}
#endif // CONFIGURATION_ENTRY_HPP
