#include <iostream>
#include <cstring>

using namespace std;

#include "mystring.h"

MyString::MyString(const char* s) {
	str = new char[strlen(s) + 1];
	strcpy(str, s);
	len = strlen(s);
}

MyString::MyString(const char c, unsigned int n) {
	len = n + 1;
	str = new char[len];
	for(unsigned int i = 0; i < n; i++)
		str[i] = c;
	str[len - 1] = 0;
}

MyString::~MyString() {
	delete[] str;
}

MyString MyString::operator+(const MyString& s) {
	MyString n;
	n.len = this->len + s.len;
	n.str = new char[n.len + 1];
	strcpy(n.str, this->str);
	strcat(n.str, s.str);
	return n;
}

char& MyString::operator[](const unsigned int i) {
	if(i > len)
		throw exception();
	return str[i];
}

MyString::MyString(const MyString& s) {
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
}

MyString& MyString::operator=(const MyString& s) {
	if(&s == this)
		return *this;
	delete[] str;
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	return *this;
}

bool MyString::operator==(const MyString& s) const {
	return strcmp(str, s.str) == 0;
}

ostream& operator<<(ostream& o, const MyString& s) {
	o << s.str;
	return o;
}


