#include <iostream> // for std::cout
#include "Double.h"

#define MY_NAME "Kevin"

int add(int, int);

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA()\n";
}

int getValueFromUser() // this function now returns an integer value
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";

    doA();

    int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

    #ifdef MY_NAME
        std::cout << num << " doubled is: " << dbl(num) << '\n';
    #endif

    std::cout << "3 + 2 is " << add(3,2) << '\n';

    #ifndef OTHER_NAME
        std::cout << "Ending main()\n";
    #endif

    return 0;
}

int add(int x, int y){
    return x+y;
}