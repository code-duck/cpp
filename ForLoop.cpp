#include<iostream>

int main()
{
   int size;

   std::cout<< "enter array size\n";
   std::cin>> size;

   int A[size] ;

   for( int i = 0; i <= size; i++)
   {
     std::cout << "Element " << i + 1 << ": ";
     std::cin>> A[i];
   }

    std::cout << "You entered: \n";
   for ( int i=0; i<= size; i++)
   {
      std::cout<< A[i]<< '\n';
   }

   std::cout<< std::endl;


    
}