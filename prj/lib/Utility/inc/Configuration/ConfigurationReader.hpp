/*
 * ConfigurationReader.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_
#define PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_

#include "String.hpp"
#include "ConfigurationManager.hpp"

namespace MOSoft
{
	namespace Configuration
	{
		class ConfigurationReader
		{
			public:
				explicit ConfigurationReader(const MOSoft::String::String& path):m_path(path) { }
				ConfigurationReader(const ConfigurationReader& confReader) = delete;
				virtual ConfigurationManager parse();
				virtual ~ConfigurationReader() { }
			private:
				const MOSoft::String::String m_path;
		};
	}
}
#endif /* PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_ */
