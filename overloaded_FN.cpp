#include <iostream>

// Function prototypes for function overloading
void makeroti();
void makeroti(std::string toppings1);

int main() {
    //? Calls the overloaded version with a string argument
    makeroti(); // you can pass the toppings string to execute the "void makeroti(std::string topping1)"
    return 0;
}

//! Default implementation: generates a plain roti 
void makeroti() {
    std::cout << "here is your roti! \n"; 
}

//? Overloaded implementation: generates a customized roti based on the topping
void makeroti(std::string topping1) {
    std::cout << "here is your " << topping1 << " roti \n"; 
}
