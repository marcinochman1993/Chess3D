/*
 * ChessboardFieldCoordinate.cpp
 *
 *  Created on: 1 Sep 2014
 *      Author: mochman
 */

#include "ChessboardFieldCoordinates.hpp"
#include <stdexcept>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

const unsigned ChessboardFieldCoordinates::MIN_COLUMN=1;
const unsigned ChessboardFieldCoordinates::MAX_COLUMN=8;
const unsigned ChessboardFieldCoordinates::ROWS_NUMBER=8;
const string ChessboardFieldCoordinates::allowedRowsLetters="ABCDEFGH";

void ChessboardFieldCoordinates::column(unsigned newColumn)
{
	if(newColumn<=MAX_COLUMN && newColumn>=MIN_COLUMN)
		m_column=newColumn;
	else
		throw invalid_argument("Column number need to be in range <MAX_COLUMN,MIN_COLUMN>");
}

void ChessboardFieldCoordinates::row(char newRow)
{
	newRow=toupper(newRow);
	if(allowedRowsLetters.find(newRow)!=string::npos)
		m_row=newRow;
	else
		throw invalid_argument("Row number need to be in allowedRowsLetters");
}

unsigned ChessboardFieldCoordinates::rowToUint() const
{
	std::map<char,unsigned> ROW_TO_UINT_MAP={{'A',0},{'B',1},{'C',2},
			{'D',3},{'E',4},{'F',5},{'G',6},{'H',7},};
	switch(row())
	{
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
		return ROW_TO_UINT_MAP[row()];
	default:
		throw ;
	}
}

bool ChessboardFieldCoordinates::operator<(const ChessboardFieldCoordinates& coordinates) const
{
	return rowToUint()<coordinates.rowToUint() ||
			(!(rowToUint()<coordinates.rowToUint()) && column()<coordinates.column());
}

bool ChessboardFieldCoordinates::operator<=(const ChessboardFieldCoordinates& coordinates) const
{
	return !(*this>coordinates);
}

bool ChessboardFieldCoordinates::operator>(const ChessboardFieldCoordinates& coordinates) const
{
	return rowToUint()>coordinates.rowToUint() ||
				(!(rowToUint()>coordinates.rowToUint()) && column()>coordinates.column());
}

bool ChessboardFieldCoordinates::operator>=(const ChessboardFieldCoordinates& coordinates) const
{
	return !(*this<coordinates);
}

bool ChessboardFieldCoordinates::operator==(const ChessboardFieldCoordinates& coordinates) const
{
	return rowToUint()==coordinates.rowToUint() && column()==coordinates.column();
}

bool ChessboardFieldCoordinates::operator!=(const ChessboardFieldCoordinates& coordinates) const
{
	return !(*this==coordinates);
}
