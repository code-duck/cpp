#include <iostream>

// Function prototypes for function overloading
void makeroti();
void makeroti(std::string toppings1);
void makeroti(std::string toppings1, std::string toping2);

int main() {
    
    //? Calls the overloaded version with a string argument

    makeroti(); // you can pass the toppings string to execute the "void makeroti(std::string topping1)"
       //? or can pass the topping using the "void makeroti(std::string topping1, std::string topping2)"
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
void makeroti(std::string topping1, std::string topping2) {
    std::cout << "here is your " << topping1 << "and " << topping2 <<" roti \n"; 
}
