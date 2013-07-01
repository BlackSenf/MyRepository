//a.hofmann jan 2005
// g++ t_mystring.cpp mystring.cpp -o t_mystring.exe

#include "mystring.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	MyString a("Hallo, World!");
	cout << a << endl;

	MyString b("XXX");
	MyString c = a + b;
	cout << c << endl;

	MyString d;
	d = b;
	cout << d << endl;

	b[1] = 'Y';
	cout << b << endl;

	b = b;
	cout << b << endl;

	if(b == d)
		cout << "b == d" << endl;
	else
		cout << "b != d" << endl;

	MyString e("XYX");
	if(b == e)
		cout << "b == e" << endl;
	else
		cout << "b != e" << endl;

	return 0;
}
