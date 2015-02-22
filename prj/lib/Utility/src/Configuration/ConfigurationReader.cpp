/*
 * ConfigurationReader.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#include "Configuration/ConfigurationReader.hpp"
#include <fstream>
#include <sstream>
#include <rapidxml.h>
#include <rapidxml_print.h>
#include <iostream>

using namespace rapidxml;

MOSoft::Configuration::ConfigurationManager MOSoft::Configuration::ConfigurationReader::parse()
{
	ConfigurationManager configurationManager;
	std::ifstream file(m_path.c_str());
	std::ostringstream ss;
	ss << file.rdbuf();
	xml_document<> doc;
	std::string fileText = ss.str();
	doc.parse<0>(&fileText[0]);
	std::cout << doc;
	return configurationManager;
}
