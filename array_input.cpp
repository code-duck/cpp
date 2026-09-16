#include<iostream>



int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for (int i = 0 ; i < 5 ; i++){
        std::cout << "enter food you like: " << i + 1  << ":" << std::endl;
        std::getline(std::cin, foods[i]);
       
    }

   std::cout << "you like: " << '\n';

   for (std::string food : foods ){
    std::cout <<  food << '\n' ;
   }
}