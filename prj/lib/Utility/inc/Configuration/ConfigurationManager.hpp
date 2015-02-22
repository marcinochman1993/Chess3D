/*
 * ConfigurationManager.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_
#define PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_

#include "String.hpp"
#include <map>

namespace MOSoft
{
	namespace Configuration
	{
		class ConfigurationManager
		{
			public:
				ConfigurationManager() = default;
				void addEntry(const MOSoft::String::String& name, const MOSoft::String::String& value);
				const MOSoft::String::String& operator[](const MOSoft::String::String& optionName) const;
			private:
				bool containsOption(const MOSoft::String::String& optionName) const;
				std::map<MOSoft::String::String,MOSoft::String::String> m_settings;

		};
	}
}

#endif /* PRJ_LIB_UTILITY_INC_CONFIGURATION_CONFIGURATIONMANAGER_HPP_ */
