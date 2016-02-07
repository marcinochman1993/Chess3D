/*
 * main.cpp
 *
 *  Created on: 3 Sep 2014
 *      Author: mochman
 */

#include <iostream>

#include "String.hpp"
#include "Configuration/ConfigurationManager.hpp"
#include "Configuration/ConfigurationReader.hpp"
#include "Configuration/XmlConfigReader.hpp"
#include <memory>


using namespace MOSoft::Configuration;

int main(int argc, char* argv[])
{
  std::cout << __FILE__ << std::endl;

  XmlConfigReader reader(("/home/mochman/Projects/Chess3D/prj/config/config.xml"));

  reader.parse();

}
