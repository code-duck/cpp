#include<iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(0));
    num = rand() % 100 + 1; // generates a random number between 1 and 100

    std::cout<< "welcome to numberguessing game" << "\n";

   do{

    std::cout<< "enter number guess between (1-100): ";
    std::cin>> guess;

    if (std::cin.fail()) // this prevents invalid response and help not to get into a fall case (infinite lines as output)
    {
    std::cin.clear();           // 1. Clear the error state
    std::cin.ignore(1000, '\n'); // 2. Throw away the word "clear" from memory
    std::cout << "Invalid input! Please enter a number.\n";
    continue;                   // 3. Skip to the next loop round
}


    tries++;

    if(guess>num)
    {
        std::cout<< "guess is too high from the num \n";
    }
    else if (guess<num)
    {
        std::cout<< "guess is too low from the num \n";
    }
    else{
        std::cout<< "congratulations you have guessed it in: " << tries << " tries";
    }

   } while(guess !=num);
    
}