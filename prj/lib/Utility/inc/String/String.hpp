/*
 * String.hpp
 *
 *  Created on: Feb 15, 2015
 *      Author: mochman
 */

#ifndef PRJ_LIB_UTILITY_INC_STRING_STRING_HPP_
#define PRJ_LIB_UTILITY_INC_STRING_STRING_HPP_

#include <string>
#include <vector>

namespace MOSoft
{
	namespace String
	{
		class String
		{
			public:
				typedef std::string::iterator Iterator;
				typedef std::string::iterator iterator;
				typedef std::string::const_iterator ConstIterator;
				typedef std::string::const_iterator const_iterator;

				String() = default;
				String(const char* str): m_str(str){ }
				String(const std::string& str): m_str(str) { }

				template <class InputIterator>
				String(InputIterator first, InputIterator last): m_str(first,last) { }

				std::vector<String> split(const String& delimiters) const;
				void replace(const String& oldString, const String& newString);
				void toLower();
				void toUpper();
				void trim();
				void trimBeginning();
				void trimEnd();
				bool isEmpty() const { return m_str.empty(); }
				const std::string& toStdString() const { return m_str; }

				Iterator begin() { return m_str.begin(); }
				ConstIterator begin() const { return m_str.begin(); }
				ConstIterator cbegin() const { return m_str.cbegin(); }
				Iterator end() { return m_str.end(); }
				ConstIterator end() const { return m_str.end(); }
				ConstIterator cend() const { return m_str.cend(); }

				bool operator==(const String& str) const { return m_str == str.m_str; }
				bool operator!=(const String& str) const { return !(*this == str); }
				bool operator>(const String& str) const { return m_str > str.m_str; }
				bool operator>=(const String& str) const { return !(*this < str); }
				bool operator<(const String& str) const { return m_str < str.m_str; }
				bool operator<=(const String& str) const { return !(*this > str); }

			private:
				std::string m_str;
		};

		std::ostream& operator<<(std::ostream& os, const String& str);
	}
}
#endif /* PRJ_LIB_UTILITY_INC_STRING_STRING_HPP_ */
