#include <iostream>



int main()
{
     // first set of square bracket is for rows and the second set of square bracket is for columns
    std::string cars[][3] = {{"mustang ", "ford ", "F-40 "},
                           {"corvette ", "silverado ", "eqinox "},
                           {"challanger ", "durango ", "ram 1500"}};   
                           
    /*std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";                          
    std::cout << cars[0][2] << "\n";    
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";        
    std::cout << cars[1][2] << "\n"; // a manual way to print them
    std::cout << cars[2][0] << " ";        
    std::cout << cars[2][1] << " "; 
    std::cout << cars[2][2] << " "; */   
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
        std::cout<< cars[i][j] << " ";
        }

        std::cout << "\n";
    }
}