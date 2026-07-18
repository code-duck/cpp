#include<iostream>


/*the name spaces are used to give the same varible different values outside the main function */

/*Or the namespaces are used to avoid naming conflicts in code and oraganise by grouping them*/

namespace first  
{
   int x = 10;
}

namespace second
{
    int x = 20;
}

int main()
{
    int x = 0;

    std::cout<<x<<std::endl;           //this prints the value of x in the main function

    std::cout << first::x <<'\n';      //this prints the value of x in the first namespace

    std::cout << second::x <<'\n';     //this prints the value of x in the second namespace



    return 0;
}