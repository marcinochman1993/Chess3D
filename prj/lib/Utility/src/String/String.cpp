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
	boost::split(splitVector, m_str, boost::is_any_of(delimiters));
	return splitVector;
}

void MOSoft::String::String::replace(const String& oldString,
		const String& newString)
{
	boost::replace_all(m_str, oldString, newString);
}

void MOSoft::String::String::toLower()
{
	boost::to_lower(m_str);
}

void MOSoft::String::String::toUpper()
{
	boost::to_upper(m_str);
}

void MOSoft::String::String::trim()
{
	boost::trim(m_str);
}

void MOSoft::String::String::trimBeginning()
{
	boost::trim_left(m_str);
}

void MOSoft::String::String::trimEnd()
{
	boost::trim_right(m_str);
}

std::ostream& MOSoft::String::operator<<(std::ostream& os, const MOSoft::String::String& str)
{
	os<<str.toStdString();
	return os;
}
