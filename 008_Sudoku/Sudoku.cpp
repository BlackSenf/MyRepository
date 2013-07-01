/*
 * Sudoku.cpp
 *
 *  Created on: 14.11.2012
 *      Author: Lukas
 */

#include "Sudoku.h"
#include <iostream>

namespace std {

Sudoku::Sudoku() {
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			Sudoku::element[i][j]=0;
		}
	}

}

Sudoku::~Sudoku() {

}

void Sudoku::setElement(int row,int column,int value)
{
	Sudoku::element[row][column] = value;
}

int Sudoku::getElement(int row,int column)
{
	return Sudoku::element[row][column];
}

bool Sudoku::loadPredefinedExample(int Index)
{
	switch(Index)
	{
	case 0:
		Sudoku::setElement(0,0,6);
		Sudoku::setElement(0,1,4);
		Sudoku::setElement(0,3,2);
		Sudoku::setElement(0,7,3);
		Sudoku::setElement(0,8,5);
		Sudoku::setElement(1,3,5);
		Sudoku::setElement(1,4,7);
		Sudoku::setElement(1,7,8);
		Sudoku::setElement(1,8,6);
		Sudoku::setElement(2,2,1);
		Sudoku::setElement(2,3,4);
		Sudoku::setElement(2,4,3);
		Sudoku::setElement(2,6,9);
		Sudoku::setElement(2,7,2);
		Sudoku::setElement(3,0,3);
		Sudoku::setElement(3,1,1);
		Sudoku::setElement(3,4,4);
		Sudoku::setElement(3,5,2);
		Sudoku::setElement(4,2,8);
		Sudoku::setElement(4,3,6);
		Sudoku::setElement(4,5,5);
		Sudoku::setElement(4,6,7);
		Sudoku::setElement(5,3,8);
		Sudoku::setElement(5,4,9);
		Sudoku::setElement(5,7,1);
		Sudoku::setElement(5,8,4);
		Sudoku::setElement(6,1,6);
		Sudoku::setElement(6,2,2);
		Sudoku::setElement(6,4,5);
		Sudoku::setElement(6,5,8);
		Sudoku::setElement(6,6,3);
		Sudoku::setElement(7,0,1);
		Sudoku::setElement(7,1,3);
		Sudoku::setElement(7,4,6);
		Sudoku::setElement(7,5,4);
		Sudoku::setElement(8,0,9);
		Sudoku::setElement(8,1,8);
		Sudoku::setElement(8,5,7);
		Sudoku::setElement(8,7,5);
		Sudoku::setElement(8,8,1);

	case 1:
		int i,j;
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				Sudoku::element[i][j]=0;
			}
		}
	}

	if(Index == 0)
	{
		return true;
	}

	return false;
}

void Sudoku::print()
{

	int i, j;

	cout << "    0   1   2   3   4   5   6   7   8 " << endl;
	cout << "  +---+---+---+---+---+---+---+---+---+" << endl;

	for (i = 0; i < 9; i++)
	{
		cout << i << " | ";

		for (j = 0; j < 9; j++)
		{
			if (Sudoku::getElement(i, j) != 0)
			{
				cout << Sudoku::getElement(i, j) << " | ";
			}
			else
			{
				cout << "  | ";
			}
		}

		cout << endl;

		if ((i == 2) || (i == 5) || (i == 8))
		{
			cout << "  +---+---+---+---+---+---+---+---+---+" << endl;
		}
	}

}

bool Sudoku::check(int iRow, int iColumn, int value)
{
	int i, j, startRow, endRow, startColumn, endColumn;

	for (i = 0; i < 9; i++)
	{
		if (value == Sudoku::getElement(iRow, i))
		{
			return false;
		}
	}

	for (i = 0; i < 9; i++)
	{
		if (value == Sudoku::getElement(i, iColumn))
		{
			return false;
		}
	}

	startRow = (iRow / 3) * 3;
	endRow = startRow + 3;

	startColumn = (iColumn / 3) * 3;
	endColumn = startColumn + 3;

	for (i = startRow; i < endRow; i++)
	{
		for (j = startColumn; j < endColumn; j++)
		{
			if (value == Sudoku::getElement(i, j))
			{
				return false;
			}
		}
	}

	return true;
}

bool Sudoku::solve (int Row, int Column)
{
	int value;

	if(Row == 9)
	{
		Row = 0;
		Column++;

		if(Column == 9) // 9 = end Condition
		{
			return true;
		}
	}

	if(Sudoku::getElement(Row, Column) != 0)
	{
		return Sudoku::solve(Row+1, Column);
	}

	for(value = 1; value <= 9; value ++)
	{
		if(Sudoku::check(Row, Column, value))
		{
			Sudoku::setElement(Row, Column, value);
			if(Sudoku::solve(Row+1, Column))
			{
				return true;
			}
		}
	}

	Sudoku::setElement(Row, Column, 0);
	return false;

}
}


