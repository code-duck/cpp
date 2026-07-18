#include<iostream>

int main()
{
    int student  = 20;

    //student = student + 10;

    //student+= 10;    /*short hand of wirting this */ 

   // student++;      /*increment operator only increase the value by 1*/ 


   int reminder = student % 3;    /*modulus operator gives the reminder of the division*/


    std::cout<<reminder<<std::endl;

    /*the operator precedence is 1. brackets, 2. modulus, 3. multiplication, 4. division, 5. addition, 6. subtraction
    moving from left to right */


}