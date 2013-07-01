/*
 * Friend.cpp
 *
 *  Created on: 03.10.2012
 *      Author: Lukas
 */

#include "Friend.h"
#include <iostream>

namespace std {

Friend::Friend() {
	Friend::next();

	// TODO Auto-generated constructor stub

}

Friend::~Friend() {
	// TODO Auto-generated destructor stub
}
void Friend::setfirstname(string erstername)
{
	Friend::firstname = erstername;
}
string Friend::getfirstname()
{
	return Friend::firstname;
}
void Friend::setlastname(string nachname)
{
	Friend::lastname = nachname;
}
string Friend::getlastname()
{
	return Friend::lastname;
}
void Friend::setnickname(string special)
{
	Friend::nickname = special;
}
string Friend::getnickname()
{
	return Friend::nickname;
}
void Friend::setage(int alter)
{
	Friend::age = alter;
}
int Friend::getage()
{
	return Friend::age;
}
void Friend::tellme()
{
	cout << endl;
	cout << "Friend::firstname: " << getfirstname() << endl;
	cout << "Friend::lastname:  " << getlastname() << endl;
	cout << "Friend::nickname:  " << getnickname() << endl;
	cout << "Friend::age:       " << getage() << endl;

}
void Friend::next()
{
	 Friend::setfirstname("");
	 Friend::setlastname("");
	 Friend::setnickname("");
	 Friend::setage(0);
}

}
