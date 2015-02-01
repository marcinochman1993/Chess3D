/*
 * Pawn.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef PAWN_HPP_
#define PAWN_HPP_

#include "ChessPiece.hpp"

class Pawn: public ChessPiece
{
		Pawn(ChessPieceColor color): ChessPiece(color){}
		bool isMoveCorrect(const ChessboardFieldCoordinates& from,
				const ChessboardFieldCoordinates& to) const override;
		bool isPawn() const override { return true; }
};



#endif /* PAWN_HPP_ */
