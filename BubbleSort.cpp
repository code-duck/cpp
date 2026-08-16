#include <iostream> 

// Function prototype/declaration
// Tells the compiler ahead of time that a function named 'sort' exists and expects an array and its size
void sort(int array[], int size); 

using namespace std; 

int main() { 
    // Initialize an unsorted integer array
    int array[] = {3, 25, 6, 7, 1, 2, 8, 9, 10, 4, 5}; 
    
    // Calculate total elements in the array: (Total bytes of array) / (Bytes of a single element)
    int size = sizeof(array) / sizeof(array[0]); 
    
    // Call the sorting function and pass the array and its size
    sort(array, size); 
    
    // Range-based for loop (introduced in C++11)
    // Iterates through each 'element' in 'array' sequentially and prints it
    for(int element : array) { 
        cout << element << " "; 
    } 
    
    return 0; 
} 

// Definition of the Bubble Sort function
void sort(int array[], int size) { 
    int temp; // Temporary variable used as a placeholder during the element swap process
    
    // Outer loop: Coordinates how many passes we make through the array.
    // A dataset of 'size' elements needs a maximum of 'size - 1' passes to guarantee it is sorted.
    for(int i = 0; i < size - 1; i++) { 
        
        // Inner loop: Compares adjacent elements side-by-side throughout the array
        for(int j = 0; j < size - 1; j++) { 
            
            // Check if the current element is larger than the next adjacent element
            if(array[j] > array[j + 1]) { 
                
                // Swap logic using the temporary variable:
                temp = array[j];   // Save the value of the left element
                array[j] = array[j + 1]; // Move the smaller right element to the left position
                array[j + 1] = temp;  // Place the saved left element into the right position
            } 
        } 
    } 
}