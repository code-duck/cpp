#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    std::cout<< "enter side a "<<std::endl;
    std::cin>>a;

    cout<< "enter side b "<<std::endl;
    std::cin>>b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout<< "the hypotenus is "<< c <<endl;


    
}