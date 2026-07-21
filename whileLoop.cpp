#include <iostream>

int main()
{
    std::string name;

    std::cout<< "enter your name"<<'\n';
  

    while(name.empty()) 
    {
        std::cout<< "enter your name"<< '\n';
        std::getline(std::cin, name);
        //while loop in C++ repeatedly executes a block of code as long as a specific condition remains true
       
    }

    std::cout<< "hello "<< name;
}