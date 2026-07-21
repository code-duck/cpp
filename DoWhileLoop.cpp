#include<iostream>

int main()
{
    int num;

    do{ //a control flow statement that executes a block of code first, and then checks the condition
        // and if the condition is still true at exit then the block of code repeats again
        std::cout<<"enter a number"<<'\n';
        std::cin>> num;
    }while( num < 0); 

    return 0;
}