#include<iostream>

int main_1()
{

    for(int i = 1; i<=20; i++)
    {
        if(i==13)
        {
            break; // break statement will terminate the loop 
        }
        std::cout<<i<<std::endl;
    }

    return 0;
}

int main()
{
    for(int i = 1; i<=20; i++)
    {
        if(i==13)
        {
            continue; // continue statement will skip the current iteration and move to the next iteration
        }
        std::cout<<i<<std::endl;
    }

    return 0;
}