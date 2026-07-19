#include<iostream>

/*
int main()
{
    // ternary operator ?: =  replacement of if/else statement.

    // condition ? expression1 : expression2; 

    double grade; 

    std::cout<< "enter grade "<<std::endl;
    std::cin>> grade;

    ( grade >= 40) ? std::cout<< "you pass" : std::cout<< "you fail";



}
*/

int main()
{

    double x;

    std::cout<< "enter a number "<<'\n';
    std::cin>> x;

    ((int)x % 2 == 0) ? std::cout<<"the number is even" : std::cout<< "the number is odd"<< '\n';
   
    /*the modulo (%) operator work with only 
    int, char, long datatypes*/

    // so i used type conversion here

    
}