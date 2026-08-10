#include <iostream>

void Happybirthday(std::string name, int age);

int main()
{
    // "function" is a block of reusable code

    std::string name = "alex";
    int age = 21;

    Happybirthday(name, age);
    

}


void Happybirthday(std::string name, int age)
{
    std::cout<< "happy birthday"<< name << "\n";
    std::cout<< "happy birthday to you"<< "\n";
    std::cout<< "happy birthday dear "<< name << "\n";
    std::cout<< "happy birthday"<< "\n" ;
    std::cout<< "you are now "<< age << " years old " << "\n";

     // "function" is a block of reusable code
}