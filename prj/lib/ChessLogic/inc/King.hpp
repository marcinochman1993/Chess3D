/*
 * King.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef KING_HPP_
#define KING_HPP_


#include "ChessPiece.hpp"

class King: public ChessPiece
{
public:
	bool isMoveCorrect(const ChessboardFieldCoordinates& from,
					const ChessboardFieldCoordinates& to) const override;
	bool isKing() const override { return true; }

};


#endif /* KING_HPP_ */
