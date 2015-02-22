/*
 * ChessboardFieldCoordinates_UnitTests.cpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */


#include <boost/test/unit_test.hpp>
#include "ChessboardFieldCoordinates.hpp"

BOOST_AUTO_TEST_SUITE(ChessboatrdFieldCoordinatesTests)

BOOST_AUTO_TEST_CASE(Rows)
{
	ChessboardFieldCoordinates coords('a',2);
	BOOST_CHECK_EQUAL(coords.rowToUint(),0);
	coords.row('b');
	BOOST_CHECK_EQUAL(coords.rowToUint(),1);
	coords.row('c');
	BOOST_CHECK_EQUAL(coords.rowToUint(),2);
	coords.row('d');
	BOOST_CHECK_EQUAL(coords.rowToUint(),3);
	coords.row('e');
	BOOST_CHECK_EQUAL(coords.rowToUint(),4);
	coords.row('f');
	BOOST_CHECK_EQUAL(coords.rowToUint(),5);
	coords.row('g');
	BOOST_CHECK_EQUAL(coords.rowToUint(),6);
	coords.row('h');
	BOOST_CHECK_EQUAL(coords.rowToUint(),7);
}


BOOST_AUTO_TEST_CASE(AccessorsMutators)
{
	ChessboardFieldCoordinates coords;
	BOOST_CHECK_THROW(coords.row('x'),std::invalid_argument);
	BOOST_CHECK_THROW(coords.column(10),std::invalid_argument);
	BOOST_CHECK_EQUAL(coords.row(),'A');
}

BOOST_AUTO_TEST_CASE(CompareOperators)
{
	ChessboardFieldCoordinates a,b('g',8),c('d',3),d('d',4),e('d',5),f;
	BOOST_CHECK(a==f);
	BOOST_CHECK(a<b);
	BOOST_CHECK(d<e);
	BOOST_CHECK(e>c);
	BOOST_CHECK(a!=b);
	BOOST_CHECK(a>=f);
	BOOST_CHECK(a<=f);
	BOOST_CHECK(a<=c);
	BOOST_CHECK(b>=e);
}

BOOST_AUTO_TEST_SUITE_END()
