// Tutorial 008.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Forward declaration and definitions 

int add(int x,int y); // function declaration 

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0; 
}

int add(int x, int y)
{
    return x + y; 
}

