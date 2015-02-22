#include <boost/test/unit_test.hpp>
#include "String.hpp"

BOOST_AUTO_TEST_SUITE(StringTests)

	using namespace MOSoft::String;

	BOOST_AUTO_TEST_CASE(StringSplit)
	{
		String str = u8"Marcin i Ala mają kota";
		auto vec=str.split(" ");
		std::vector<String> correctVec=
			{"Marcin","i","Ala",u8"mają","kota"};
		BOOST_CHECK_EQUAL_COLLECTIONS(correctVec.begin(),correctVec.end(),vec.begin(),vec.end());
	}

BOOST_AUTO_TEST_SUITE_END()
