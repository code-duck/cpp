#include <iostream>

// Calculates the total of all prices in the array
double gettotal(double prices[], int size);

int main()
{
    // Create an array containing the prices
    double prices[] = {4.33, 43, 23, 5.8};

    // Calculate the number of elements in the array
    int size = sizeof(prices)/sizeof(double);

    // Get the total of all prices
    double total = gettotal(prices, size);

    // Display the total
    std::cout << "$" << total; 
}

// Adds all values in the array and returns the total
double gettotal(double prices[], int size)
{
    double total = 0;

    // Loop through each price and add it to total
    for( int i = 0; i < size; i++)
    {
        total = total + prices[i];
    }

    // Return the final total
    return total;
}