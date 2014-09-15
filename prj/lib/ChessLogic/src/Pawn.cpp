/*
 * Pawn.cpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#include "Pawn.hpp"

bool Pawn::isMoveCorrect(ChessboardFieldCoordinates& from,
		ChessboardFieldCoordinates& to) const
{
	int rowFrom=static_cast<int>(from.rowToUint()),
			columnFrom=static_cast<int>(from.column()),
			rowTo=static_cast<int>(to.rowToUint()),
			columnTo=static_cast<int>(to.column());

	return () || () || () || ();
}
