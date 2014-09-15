/*
 * Bishop.cpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */


#include "Bishop.hpp"
#include <cmath>

bool Bishop::isMoveCorrect(const ChessboardFieldCoordinates& from,
		const ChessboardFieldCoordinates& to) const
{
	const unsigned rowFrom=from.rowToUint(), columnFrom=from.column(),
			rowTo=to.rowToUint(),columnTo=to.column();

	return abs(1)==abs(-1);
}

