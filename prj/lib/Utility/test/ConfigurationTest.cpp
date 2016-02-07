#include "../inc/Configuration.hpp"


#define BOOST_TEST_MODULE Configuration
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(StringTests)


using namespace MOSoft::Configuration;
using namespace MOSoft::String;

BOOST_AUTO_TEST_CASE(XmlConfigReaderTest)
{

  const String xmlPath = "/rsrc/config.xml";
  
  XmlConfigReader xmlReader(xmlPath);
  xmlReader.parse();

  
}



BOOST_AUTO_TEST_SUITE_END()
