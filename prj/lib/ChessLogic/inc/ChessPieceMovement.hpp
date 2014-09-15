/*
 * ChessPieceMovement.hpp
 *
 *  Created on: 2 Sep 2014
 *      Author: mochman
 */

#ifndef CHESSPIECEMOVEMENT_HPP_
#define CHESSPIECEMOVEMENT_HPP_

#include "ChessboardFieldCoordinates.hpp"

class ChessPieceMovement
{
	public:
		const ChessboardFieldCoordinates from() const;
		void from(const ChessboardFieldCoordinates& newFrom);
		const ChessboardFieldCoordinates to() const;
		void to(const ChessboardFieldCoordinates& newTo);
	private:
		ChessboardFieldCoordinates m_from;
		ChessboardFieldCoordinates m_to;

};

#endif /* CHESSPIECEMOVEMENT_HPP_ */
