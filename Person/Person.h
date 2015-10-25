#ifndef __Person__
#define __Person__

#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lastname;      
	char firstname[LIMIT];   
public:
	Person() { lastname = ""; firstname[0] = '\0'; }  
	Person(const string & ln, const char * fn = "Hello");   
															  
	void show() const;         
	void formalShow() const;   
};

#endif