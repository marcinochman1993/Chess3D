/*
 * Rook.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef ROOK_HPP_
#define ROOK_HPP_

#include "ChessPiece.hpp"

class Rook: public ChessPiece
{
public:
		Rook(ChessPieceColor color):ChessPiece(color){}
		bool isMoveCorrect(const ChessboardFieldCoordinates& from,
				const ChessboardFieldCoordinates& to) const override;
};


#endif /* ROOK_HPP_ */
