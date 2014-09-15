/*
 * Queen.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef QUEEN_HPP_
#define QUEEN_HPP_

#include "ChessPiece.hpp"

class Queen: public ChessPiece
{
		Queen(ChessPieceColor color): ChessPiece(color){}
		bool isMoveCorrect(ChessboardFieldCoordinates& from,
				ChessboardFieldCoordinates& to) const override;
};



#endif /* QUEEN_HPP_ */
