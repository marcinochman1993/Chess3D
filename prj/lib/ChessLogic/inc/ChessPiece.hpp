/*
 * ChessPiece.hpp
 *
 *  Created on: 1 Sep 2014
 *      Author: mochman
 */

#ifndef CHESSPIECE_HPP_
#define CHESSPIECE_HPP_

#include "ChessboardFieldCoordinates.hpp"

enum class ChessPieceType
{
		KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN
};

enum class ChessPieceColor
{
		WHITE,BLACK
};

class ChessPiece
{
	public:
		ChessPiece(ChessPieceColor color):m_color(color),m_moved(false) {}
		bool isBlack() const { return color()==ChessPieceColor::BLACK; }
		bool isWhite() const { return color()==ChessPieceColor::BLACK; }
		virtual bool isMoveCorrect(const ChessboardFieldCoordinates& from,
				const ChessboardFieldCoordinates& to) const = 0;
		ChessPieceColor color() const { return m_color; }
		void hasMoved() { m_moved=true; }
		bool moved() const { return m_moved; }
		virtual bool isBishop() const { return false; }
		virtual bool isKing() const { return false; }
		virtual bool isKnight() const { return false; }
		virtual bool isPawn() const { return false; }
		virtual bool isQueen() const { return false; }
		virtual bool isRook() const { return false; }
		virtual ~ChessPiece(){}
	protected:
		ChessPieceColor opponentColor() const;
	private:
		const ChessPieceColor m_color;
		bool m_moved;
};

#endif /* CHESSPIECE_HPP_ */
