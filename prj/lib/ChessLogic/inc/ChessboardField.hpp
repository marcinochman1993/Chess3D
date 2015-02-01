/*
 * ChessboardField.hpp
 *
 *  Created on: 2 Sep 2014
 *      Author: mochman
 */

#ifndef CHESSBOARDFIELD_HPP_
#define CHESSBOARDFIELD_HPP_

#include "ChessPiece.hpp"
#include "ChessboardFieldCoordinates.hpp"
#include <memory>

class ChessboardField
{
	public:
		explicit ChessboardField(const ChessboardFieldCoordinates& coordinates =
				ChessboardFieldCoordinates(), ChessPiece* piece = nullptr);

		void movePiece(ChessboardField& field);

		const ChessboardFieldCoordinates& coordinates() const
		{
			return m_coordinates;
		}

		const ChessPiece& chessPiece() const
		{
			return *m_chessPiece;
		}

		bool operator<(const ChessboardField& coordinates) const;
		bool operator<=(const ChessboardField& coordinates) const;
		bool operator>(const ChessboardField& coordinates) const;
		bool operator>=(const ChessboardField& coordinates) const;
		bool operator==(const ChessboardField& coordinates) const;
		bool operator!=(const ChessboardField& coordinates) const;

	private:
		ChessboardFieldCoordinates m_coordinates;
		std::unique_ptr<ChessPiece> m_chessPiece;
};

#endif /* CHESSBOARDFIELD_HPP_ */
