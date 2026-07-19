#include<iostream>

/*
int main()
{
    // && check if two condition is true
    // || check is atleast one condition is true
    // ! it reverse the the logical state if its operand 

    int temp;

    std::cout<< "enter the temprature"<< "\n";
    std::cin>> temp;


    
    if( temp > 0 && temp < 30 )
    {
        std::cout<< "the temp is suitable"<<std::endl;   
    }
    else
    {
        std::cout<<"the temp is bad"<<std::endl;
    }
    

 
    if( temp <= 0 || temp >= 30)
    {
        std::cout<< "the temp is bad"<<'\n';
    }
    else             // if any on these condition satisfied it will print the if condition 
    {
        std::cout<< "the temp is good "<<'\n';
    }
 
}
*/

int main()
{
    int temp;
    bool sunny =  true;

    std::cout<< "enter the temprature"<< "\n";
    std::cin>> temp;

    if( temp <= 0 || temp >= 30)
    {
        std::cout<< "the temp is bad"<<'\n';
    }
    else            
    {
        std::cout<< "the temp is good "<<'\n';
    }

    if (!sunny)
    {
        std::cout<< "it is sunny outside"<<std::endl;
    }
    else
    {
        std::cout<< "its cloudy outside"<<std::endl;
    }
    /*the "!" this sign turned the true status of the boolean 'sunny'
    to false that's why the else condition was triggered*/

}



