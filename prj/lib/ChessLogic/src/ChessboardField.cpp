/*
 * ChessboardField.cpp
 *
 *  Created on: 2 Sep 2014
 *      Author: mochman
 */

#include "ChessboardField.hpp"

ChessboardField::ChessboardField(const ChessboardFieldCoordinates& coordinates,
		ChessPiece* piece)
		: m_coordinates(coordinates)
{
	m_chessPiece.reset(piece);
}

void ChessboardField::movePiece(ChessboardField& field)
{
	field.m_chessPiece = std::move(m_chessPiece);
}

bool ChessboardField::operator<(const ChessboardField& field) const
{
	return coordinates() < field.coordinates();
}

bool ChessboardField::operator<=(const ChessboardField& field) const
{
	return coordinates() <= field.coordinates();
}

bool ChessboardField::operator>(const ChessboardField& field) const
{
	return coordinates() > field.coordinates();
}

bool ChessboardField::operator>=(const ChessboardField& field) const
{
	return !(*this < field);
}

bool ChessboardField::operator==(const ChessboardField& field) const
{
	return coordinates() == field.coordinates();
}

bool ChessboardField::operator!=(const ChessboardField& field) const
{
	return !(*this == field);
}
