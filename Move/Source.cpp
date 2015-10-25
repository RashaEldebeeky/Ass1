#include <iostream>
#include "Move.h"
using namespace std;

void main()
{
	Move one(3, 5);
	Move two(8, 4);
	one.showmove();
	two.showmove();
	Move three = one.add(two);
	three.showmove();
}