#include <iostream>

//this is a simple calculator

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout<< "*************CALCULATOR*************"<<std::endl;

    std::cout<< "enter the num1"<<'\n';
    std::cin>>num1;

    std::cout<<" chose operation (+ - / *)"<<'\n';
    std::cin>>op;

    std::cout<<"enter num2"<<'\n';
    std::cin>>num2;

    switch (op)
    {
        case '+':
        result = num1 + num2;
        std::cout<< "the result " <<result<< '\n'; 
        break;

        case '-':
        result = num1 - num2;
        std::cout<< "the result " <<result<< '\n';
        break;

        case '*':
        result = num1 * num2;
        std::cout<< "the result " <<result<<'\n';
        break;

        case '/':
        result = num1/num2;
        std::cout<< "the result " << result << '\n';
        break;

        default:
        std::cout<< "please enter valid values";
        break;

    }

    std::cout<< "**************************************";
}