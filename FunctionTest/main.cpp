//need forward declaration or header for compiler to know functions exist/call them

#include <iostream>
#include "io.h"

int main()
{
	int i = readNumber();
	int j = readNumber();
	writeAnswer(i+j);
	return 0;
}