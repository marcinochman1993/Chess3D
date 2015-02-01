/*
 * Bishop.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef BISHOP_HPP_
#define BISHOP_HPP_

#include "ChessPiece.hpp"

class Bishop: public ChessPiece
{
		bool isMoveCorrect(const ChessboardFieldCoordinates& from,
				const ChessboardFieldCoordinates& to) const override;
		bool isBishop() const override { return true; }
};


#endif /* BISHOP_HPP_ */
