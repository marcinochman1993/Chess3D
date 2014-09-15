/*
 * Chessboard.hpp
 *
 *  Created on: 1 Sep 2014
 *      Author: mochman
 */

#ifndef CHESSBOARD_HPP_
#define CHESSBOARD_HPP_

#include "ChessboardField.hpp"
#include "ChessboardFieldCoordinates.hpp"

class Chessboard
{
public:
		ChessboardField& operator[](const ChessboardFieldCoordinates coordinates);
		const ChessboardField& operator[](const ChessboardFieldCoordinates coordinates) const;
		ChessboardField& operator ()(char row, unsigned column);
		const ChessboardField& operator ()(char row, unsigned column) const;
private:

};


#endif /* CHESSBOARD_HPP_ */
