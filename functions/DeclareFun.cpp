#include <iostream>
using namespace std;

//declaration of function
void levelCleared(int level);

int main()
{
    levelCleared(3); //function calling
}

// function defination
void levelCleared(int level)
{
    cout << "current cleared "<< level << " level";
}