/*
 * Sudoku.h
 *
 *  Created on: 14.11.2012
 *      Author: Lukas
 */

#ifndef SUDOKU_H_
#define SUDOKU_H_

namespace std {

class Sudoku {
private:
	int element[9][9];
public:
	Sudoku();
	virtual ~Sudoku();
	void setElement(int,int,int);
	int getElement(int,int);
	bool loadPredefinedExample(int);
	void print();
	bool check(int,int,int);
	bool solve (int, int);
};

}

#endif /* SUDOKU_H_ */
