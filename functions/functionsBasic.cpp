
#include <iostream>

using namespace std;

/* return type  function name ("parameter"). the parameters are optional or if the program require then you can add it.
{
     statement
}
*/

int checktemp(int temprature){
    return temprature;
}

int main()
{
   int temp = checktemp(38);
   cout << temp;
    return 0;
}
