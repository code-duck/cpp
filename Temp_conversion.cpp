#include<iostream>

int main()
{
    double temp;
    char unit;


    std::cout<<"enter the temprature value"<<'\n';
    std::cin>> temp;
    std::cout<<"enter the unit you would like to convert (C or F)"<<'\n';
    std::cin>> unit;

    if( unit == 'F' || unit == 'f')
    {
        temp = (1.8* temp) + 32;
        std::cout<<"the temp in farenheit is: " << temp<< " F"<<'\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        temp = (temp - 32) * 5.0/9.0;
        std::cout<< "the temp in celcius is: "<< temp<< " C"<<'\n';
    }
    else{
        std::cout<<"please enter a valid response";
    }

}