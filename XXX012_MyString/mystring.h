#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
using namespace std;

class MyString {
private:
	unsigned int	len;
	char*		str;

public:
	MyString() : len(0), str(new char[1]) { str[0] = 0; }
	MyString(const char* s);
	MyString(const char c, unsigned int n);
	~MyString();

	MyString(const MyString& s);
	MyString& operator=(const MyString& s);
	bool operator==(const MyString& s) const;
	MyString operator+(const MyString& s);
	char& operator[](const unsigned int i);

	friend ostream& operator<<(ostream& o, const MyString& s);
};
#endif
