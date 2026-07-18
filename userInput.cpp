#include<iostream>

//cout << ( insertion oprator)
// cin >> ( extraction operator )


int main_old ()
{
    std::string name;
    int age;

    std::cout << "enter a name?: ";
    //std::cin >> name;             /*using just cin will only read the first name before the space*/

    std::getline(std::cin, name);   /*using getline will read the whole line including spaces*/

    std::cout<< "enter age?: ";
    std::cin >> age;


    std::cout << "hello " << name;
    std::cout << " your age is " << age << std::endl;
}


/*using std::cin before a std::getline creats a buffer and the program 
reads it as the user has entered an empty line or string */

/*to prevent */

int main()
{
    std::string name;
    int age ;

    std::cout << "what's your age?; ";
    std::cin >> age;

    std::cout << "what's your full name?; ";
    std::getline(std::cin >> std::ws , name );   

    std::cout << "hello " << name;
    std::cout << " your age is " << age << std::endl;
    
    /*the ws(whitspaces) this eliminates 
    any neline characters or whitespaces before any userinputs*/


}