#include<iostream>

int mynum = 3;

void printnum();

//local variable = declared inside a function or a block {}
//global variable = declared outside of all functions

int main()
{

    printnum();


    return 0;
}

void printnum()
{
    std::cout << mynum;
}

//! if we have the same variable for the in local and global and you want to display the global variable first
//? you can use the "::" known as scope resolution operator 
//? because the program will read the local variable first, so using the scope resolution gives the priority to the global variable.


//? example code
/*
#include <iostream>

 ? Global variable (outside the house)
int mynum = 3; 

int main() {
     ?Local variable with the SAME name (inside the house)
    int mynum = 10; 

     ? 1. Prints the local variable
    std::cout << "Local mynum: " << mynum << std::endl;

     ? 2. Uses :: to print the global variable
    std::cout << "Global mynum: " << ::mynum << std::endl;

    return 0;
}

*/