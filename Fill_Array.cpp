#include <iostream>

using namespace std;

int main_1()
{
    // fill() = fills a rnage of element with a specified vlaue
    // syntax = fill ( begin, end + size, value)


    string foods[10];

    fill(foods, foods + 10, "pizza" );

    for( string food : foods)
    {
        cout << food << "\n";
    }

    return 0;

}

int main()
{

    // Make a constant integer named size and set it to 10. This is the total number of items in our array.
    const int size = 10;
    // Make an array of strings named 'foods' that can hold 10 text items.
    string foods[size];



    // Fill the first half of the array (from index 0 to 4) with the word "pizza".
    fill(foods, foods + (size/2), "pizza" ); 
    //Fill the second half of the array (from index 5 to 9) with the word "burgers".
    fill(foods + (size/2) ,foods + size, "burgers");


    for( string food : foods)
    {
        cout << food << "\n";
    }

    return 0;

}