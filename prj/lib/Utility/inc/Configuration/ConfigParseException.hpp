#ifndef CONFIG_PARSE_EXCEPTION_HPP
#define CONFIG_PARSE_EXCEPTION_HPP

#include <stdexcept>
#include "String.hpp"

namespace MOSoft
{
  namespace Configuration
  {
    class ConfigParseException
      : public std::runtime_error
    {
    public:
      ConfigParseException(const String::String& msg = "")
	: std::runtime_error(msg.toStdString()) { }
      
    };

  }
}
#endif // CONFIG_PARSE_EXCEPTION_HPP
