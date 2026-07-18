#include<iostream>


//typedef std::string str_t;  
//typedef int num_t;

/*using the 'typedef' you can turn long data types into custom short 
reserved keyword for existing data type who are long to write and use in te code.*/

using str_t = std::string; /* using do the same as typedef */
using num_t = int;

int main ()
{

    str_t name = "smith";  /*instead of writing 'std::string' every time, we can use 'str_t' */
    num_t age = 20;  /*instead of writing 'int' every time, we can use 'num_t' */

    std::cout << name << std::endl
              << age << std::endl;

    return 0;

}