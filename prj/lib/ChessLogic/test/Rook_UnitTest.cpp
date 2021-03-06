/*
 * Rook_UnitTest.cpp
 *
 *  Created on: 12 wrz 2014
 *      Author: mochman
 */

#include "Rook.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(ChessboatrdFieldCoordinatesTests)

BOOST_AUTO_TEST_CASE(MovementValidation)
{
	Rook r(ChessPieceColor::BLACK);
	ChessboardFieldCoordinates a,b('a',3),c('d',1),d('g',6);
	BOOST_CHECK(r.isMoveCorrect(a,b));
	BOOST_CHECK(r.isMoveCorrect(b,a));
	BOOST_CHECK(r.isMoveCorrect(c,a));
	BOOST_CHECK(r.isMoveCorrect(a,c));
	BOOST_CHECK(!r.isMoveCorrect(a,d));
}

BOOST_AUTO_TEST_SUITE_END()
