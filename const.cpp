#include<iostream>

int main()
{
    const double PI = 3.14;  //const is used to declare a constant variable which means the value of the variable cannot be changed after initialization.
    double radius = 6.0;
    double circumference =  2*PI*radius;  //you can make constant by just giving it a constant value 

    std::cout<< circumference << "cm" << std::endl;

    return 0;
}