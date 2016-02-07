/*
 * ConfigurationReader.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_
#define PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_

#include "../String/String.hpp"
#include "ConfigurationManager.hpp"

namespace MOSoft
{
  namespace Configuration
  {
    class ConfigurationReader
    {
    public:
      explicit ConfigurationReader(const String::String& path):m_path(path) { }
      ConfigurationReader(const ConfigurationReader& confReader) = delete;
      virtual ConfigurationManager parse();
      virtual ~ConfigurationReader() { }
      const String::String& path() { return m_path; }
      virtual bool extensionSupported(const String::String& extension) { return true; }
    private:
      const String::String m_path;
    };
  }
}
#endif /* PRJ_LIB_GAMEENGINE_INC_CONFIGURATIONREADER_HPP_ */
