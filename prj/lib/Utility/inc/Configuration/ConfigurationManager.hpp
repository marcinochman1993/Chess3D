/*
 * ConfigurationManager.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_
#define PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_

#include <map>
#include <set>
#include "String.hpp"

namespace MOSoft
{
	namespace Configuration
	{
		class ConfigurationManager
		{
			public:
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

				ConfigurationManager() = default;
				const MOSoft::String::String& operator[](
						const MOSoft::String::String& optionName) const;

			private:
				ConfigurationEntry m_mainEntry;

		};
	}
}

#endif /* PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_ */
