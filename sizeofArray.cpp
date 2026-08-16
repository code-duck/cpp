#include <iostream>

using namespace std;

int main()
{
   string character[] = {"patrick jane", "harvy soector", "sould goodman", "wahlter whiten", "jessi pinckman" };

   /*
   THE FOR LOOP AND SIZEOF() EXPLANATION:
       
   1. sizeof(character): 
     This finds the total memory size of the entire array in bytes.
          
   2. sizeof(string): 
      This finds the memory size of just ONE single string slot.
         
   3. sizeof(character) / sizeof(string): 
     By dividing the total size by the size of one item, 
     C++ figures out exactly how many elements are in the array (5).
          
   4. The Loop (int i = 0; i < 5; i++):
      This starts a counter 'i' at 0 and goes up by 1 each time.
      It stops before it reaches 5, running exactly for slots 0, 1, 2, 3, and 4.
   */

    for (int i = 0; i < sizeof(character)/sizeof(string) ; i++)
    {
        cout << character[i]<< "\n";
    }
}