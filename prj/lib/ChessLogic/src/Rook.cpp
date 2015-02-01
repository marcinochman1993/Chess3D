/*
 * Rook.cpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#include "Rook.hpp"

bool Rook::isMoveCorrect(const ChessboardFieldCoordinates& from,
		const ChessboardFieldCoordinates& to) const
{
	unsigned rowFrom = from.rowToUint(), columnFrom = from.column(), rowTo =
			to.rowToUint(), columnTo = to.column();

	return (rowFrom - rowTo == 0 && columnFrom - columnTo != 0)
			|| (rowFrom - rowTo != 0 && columnFrom - columnTo == 0);
}

