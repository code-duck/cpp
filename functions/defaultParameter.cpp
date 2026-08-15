#include <iostream>

// Function declaration taking an integer
void servingFood(int plates);

// Function declaration taking a string with a default parameter ("biryani")
// Default parameters give a value if no argument is passed during the call
void servingFood(std::string plates = "biryani");

int main() {
    // ERROR: Ambiguous call! 
    // The compiler does not know whether to call servingFood(int) 
    // or servingFood(std::string with default value).
    servingFood(); 
}

// Function definition for the integer version
void servingFood(int plates) {
    std::cout << plates;
}

// Function definition for the string version
// Note: Do not repeat default parameters (= "biryani") here if they are in the declaration
void servingFood(std::string plates) {
    std::cout << plates;
}
