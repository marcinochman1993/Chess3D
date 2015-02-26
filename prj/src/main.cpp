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
#include <memory>
int main(int argc, char* argv[])
{
	MOSoft::String::String s = u8"Ala ma kotka, kubek i pastę - do zębów";
	auto vec=s.split("- ,");
	for(auto i:vec)
		if(!i.isEmpty())
			std::cout<<i<<std::endl;

}
