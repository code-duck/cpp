#include <iostream>
using namespace std;

int searcharray(int arr[], int size, int element);

int main()
{
    int number[] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(number)/sizeof(number[0]);
    int index;
    int mynum;

    cout<< "enter element to seach: \n";
    cin>> mynum;

    index = searcharray(number, size, mynum );

    if(index != -1)
    {
        cout << mynum << " is at index "<< index;
    }
    else{
        cout << mynum << "is not in the array";
    }
    
}

int searcharray(int arr[], int size, int element)
{

    for(int i=0 ; i < size; i++)
    {
        if( arr[i] == element)
        {
            return i;
        }
    }
    return -1;

}