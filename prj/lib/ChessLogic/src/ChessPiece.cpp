/*
 * ChessPiece.cpp
 *
 *  Created on: 2 Sep 2014
 *      Author: mochman
 */

#include "ChessPiece.hpp"


ChessPieceColor ChessPiece::opponentColor() const
{
	return color() == ChessPieceColor::BLACK ?
			ChessPieceColor::WHITE : ChessPieceColor::WHITE;
}
