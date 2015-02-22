/*
 * String.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_UTILITY_INC_STRING_HPP_
#define PRJ_LIB_UTILITY_INC_STRING_HPP_

#include <string>
#include <vector>

namespace MOSoft
{
	namespace String
	{
		class String: public std::string
		{
			public:
				String() = default;
				String(const char* str): std::string(str){ }
				String(const std::string& str): std::string(str) { }

				template <class InputIterator>
				String(InputIterator first, InputIterator last):std::string(first,last) { }

				std::vector<String> split(const String& delimiters) const;
				void replace(const String& oldString, const String& newString);
				void to_lower();
				void to_upper();

		};
	}
}
#endif /* PRJ_LIB_UTILITY_INC_STRING_HPP_ */
