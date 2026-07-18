#include<iostream>

//int main()
//{
    //double x = (int) 3.14;  //explicit type conversion

    //int y =  100; 

    //std::cout<<x<<std::endl;
    //std::cout<<(char)y<<std::endl;  //explicit type conversion

    //output is '3' and 'd' because the ascii value of d is 100


//}

int main()
{
    int correct = 8;
    int question = 10;

    double score = (double)correct/(double)question * 100; 

    std::cout<<score<<std::endl;
}