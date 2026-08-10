#include <iostream> 

// Declares the function "square" before main so the compiler knows it exists
double square( double length); 

// Declares the function "cube" before main so the compiler knows it exists
double cube (double length);

int main() 
{
    
    double length = 6.0; // Creates a decimal variable named "length" 
    
    //! Calls the square function using "length", then saves the result into "area"
    double area = square(length); 

     //! Calls the cube function using "length", then saves the result into "volume"
    double volume = cube(length);
   
    std::cout << area << " cm^2 \n" ;  // Prints the calculated area followed by the units " cm^2" to the screen
    std::cout << volume << " cm^3";  // Prints the calculated volume followed by the units " cm^3" to the screen
} 

// Defines the actual logic of the "square" function
double square ( double length)
{ 
    double result = length * length; // Multiplies the number by itself and saves it
    return result; // Sends the final answer back to where the function was called
}
double cube ( double length)
{
    double result = length * length * length; // Multiplies the number by itself and saves it
    return result;  // Sends the final answer back to where the function was called
} 
