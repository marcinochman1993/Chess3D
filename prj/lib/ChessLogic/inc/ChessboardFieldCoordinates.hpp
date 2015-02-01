/*
 * FieldCoordinates.hpp
 *
 *  Created on: 1 Sep 2014
 *      Author: mochman
 */

#ifndef CHESSBOARDFIELDCOORDINATES_HPP_
#define CHESSBOARDFIELDCOORDINATES_HPP_

#include <string>

class ChessboardFieldCoordinates
{
	public:
		explicit ChessboardFieldCoordinates(char row = 'A', unsigned column = 1)
		{
			this->row(row);
			this->column(column);
		}
		char row() const
		{
			return m_row;
		}
		void row(char newRow);
		unsigned rowToUint() const;
		unsigned column() const
		{
			return m_column;
		}
		void column(unsigned newColumn);
		bool operator<(const ChessboardFieldCoordinates& coordinates) const;
		bool operator<=(const ChessboardFieldCoordinates& coordinates) const;
		bool operator>(const ChessboardFieldCoordinates& coordinates) const;
		bool operator>=(const ChessboardFieldCoordinates& coordinates) const;
		bool operator==(const ChessboardFieldCoordinates& coordinates) const;
		bool operator!=(const ChessboardFieldCoordinates& coordinates) const;
	private:
		char m_row;
		unsigned m_column;
		static const unsigned MIN_COLUMN;
		static const unsigned MAX_COLUMN;
		static const unsigned ROWS_NUMBER;
		static const std::string allowedRowsLetters;
};

#endif /* FIELDCOORDINATES_HPP_ */
