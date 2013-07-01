/*
 * Friend.h
 *
 *  Created on: 03.10.2012
 *      Author: Lukas
 */
#include <string>

#ifndef FRIEND_H_
#define FRIEND_H_

namespace std {

class Friend {
private:
	string firstname;
	string lastname;
	string nickname;
	int age;

public:
	Friend();
	virtual ~Friend();
	void setfirstname(string);
	string getfirstname();
	void setlastname(string);
	string getlastname();
	void setnickname(string);
	string getnickname();
	void setage(int);
	int getage();
	void tellme();
	void next();

};

}

#endif /* FRIEND_H_ */
