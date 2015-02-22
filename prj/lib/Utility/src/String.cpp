/*
 * String.cpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#include "String.hpp"
#include <boost/algorithm/string.hpp>

std::vector<MOSoft::String::String> MOSoft::String::String::split(
		const String& delimiters) const
{
	std::vector<MOSoft::String::String> splitVector;
	String str = *this;
	boost::split(splitVector, str, boost::is_any_of(delimiters));
	return splitVector;
}

void MOSoft::String::String::replace(const String& oldString,
		const String& newString)
{
	boost::replace_all(*this, oldString, newString);
}

void MOSoft::String::String::to_lower()
{
	boost::to_lower(*this);
}

void MOSoft::String::String::to_upper()
{
	boost::to_upper(*this);
}
