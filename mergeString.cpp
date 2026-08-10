#include <iostream>

std::string mergeString(std::string string1, std::string string2 );


int main()
{
    std::string name = "phoenix";
    std::string lastname = "gold";
    std::string fullname = mergeString (name , lastname);

    std::cout<< "hello "<< fullname << std::endl;

    return 0;
}

std::string mergeString(std::string string1, std::string string2 )
{
    return string1 + " " + string2;
}