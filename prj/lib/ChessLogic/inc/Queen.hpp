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
		bool isMoveCorrect(const ChessboardFieldCoordinates& from,
				const ChessboardFieldCoordinates& to) const override;
		bool isQueen() const override { return true; }
};



#endif /* QUEEN_HPP_ */
