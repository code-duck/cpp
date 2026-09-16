#include<iostream>

int main()
{
    int A[5] = {1, 1, 2, 3, 4};
    

    std::cout<<sizeof(A)<<std::endl;
    std::cout<<A[2]<<std::endl;

    int size = sizeof(A)/sizeof(A[0]);
    std::cout << "the size is: "<< size << std::endl;

    return 0;

}

int main_2()
{
    int B[5] = {5,34,5,32,1};

  /*for (range_declaration : range_expression) 
  {
    // Loop body
  }*/

    for (int x : B) // for each loop          
    {
        std::cout<< x << std::endl;
    }
}

/*
A range-based for loop (for-each loop) is a loop that automatically 
   runs a block of code exactly once for every item inside a collection.

   WHAT IT DOES:
   1. It looks at your collection (like an array or vector).
   2. It automatically pulls out the first item and drops it into your loop variable.
   3. It runs your code using that variable.
   4. It automatically moves to the next item and repeats until it hits the end.
*/