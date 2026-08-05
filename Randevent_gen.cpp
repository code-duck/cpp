#include <iostream>
#include <ctime>

int main ()
{
    srand(time(0));

    int randomNum = (rand() % 5 + 1);
// we use "srand (time(0))"  function to generate pseudonrandom numbers 
    switch(randomNum)
    {
        case 1: std::cout<< "you win nothing" << std::endl;
                break;
        case 2: std::cout<< "you are ichigo" << std::endl;
                break;
        case 3: std::cout<< "you are naruto" << std::endl;
                break;
        case 4: std::cout<< "you luffy" << std::endl;
                break;
        case 5: std::cout<< "you goku" << std::endl;
                break;
    }
  // adding brealk statement to avoid fall through in switch case 
  // and you get single reward based on the random number generated.
    return 0;

}