#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(const string & ln, const char * fn)
{
	Person::lastname = ln;
	strcpy_s(Person::firstname, fn);
}

void Person::show() const
{
	cout << Person::firstname << " " << Person::lastname << endl;
}

void Person::formalShow() const
{
	cout << Person::lastname << ", " << Person::firstname << endl;
}