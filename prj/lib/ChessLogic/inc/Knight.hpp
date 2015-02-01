/*
 * Knight.hpp
 *
 *  Created on: 11 wrz 2014
 *      Author: mochman
 */

#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_


#include "ChessPiece.hpp"

class Knight: public ChessPiece
{
public:
	bool isMoveCorrect(const ChessboardFieldCoordinates& from,
			const ChessboardFieldCoordinates& to) const override;
	bool isKnight() const override { return true; }
};


#endif /* KNIGHT_HPP_ */
