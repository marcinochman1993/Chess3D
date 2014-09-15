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
		bool isMoveCorrect(ChessboardFieldCoordinates& from,
				ChessboardFieldCoordinates& to) const override;
};



#endif /* PAWN_HPP_ */
