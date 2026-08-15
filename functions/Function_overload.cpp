#include <iostream>
#include <cmath>

//function declaration with their parameters.
double calculateArea(double length1, double length2);
double calculateArea(double radious);
double calculateArea(double base, double height, bool isTriangle);

int main()
{
    //showing output with cout and calling the function
    calculateArea(5.0, 6.0); 
    std::cout << "area of a circle: "<< calculateArea(4)<< "\n";
    std::cout << "area of a triangle: "<< calculateArea(3, 3, true)<< "\n";

/*you can also remove the cout from here and put in into the fuinction defination 
and remove the "return from there so you can just call the function in main()"*/
    return 0;
}

//function definations 
double calculateArea(double length1, double width)
{
    std::cout << "area of a cube: " << length1* width << "\n";
}

//function definations 
double calculateArea(double radious)
{
    double pi = 3.14;
    return pi* radious* radious;
}

//function definations 
double calculateArea(double base, double height, bool isTriangle)
{
    double half = 0.5;
    return half* base * height;
}