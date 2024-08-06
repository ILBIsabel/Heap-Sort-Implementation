#include <stdio.h>
#include <stdlib.h>

//Function to swap two elements
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Function to heapify a subtree rooted with node i
void heapify(int arr[], int n, int i){
    int largest = i;               //Initialize largest as root
    int left = 2 * i + 1;          //Left child index
    int right = 2 * i + 2;         //Right child index

    //If left child is larger than root
    if(left < n && arr[left] > arr[largest])
        largest = left;
    
    //If right child is larger than largest so far
    if(right < n && arr[right] > arr[largest])
        largest = right;

    //If largest is not root
    if(largest != i){
        //Swap the root with the largest element
        swap(&arr[i], &arr[largest]);

        //Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

//Function to perform heap sort 
void heapSort(int arr[], int n){
    //Build heap (rearrange array)
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    //One by one extract an element from heap
    for(int i = n - 1; i >= 0; i--){
        //Move current root to end
        swap(&arr[0], &arr[i]);

        //Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

//Function to print an array
void printArray(int arr[], int n){
    //Loop through the array elements 
    for(int i = 0; i < n; i++){
        if(i > 0){
            printf(", ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
}

//Main function to test the heap sort implementation
int main(){
    //Initialize the array
    int arr[] = {12, 11, 13, 5, 6, 7};

    //Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    //Sort the array using heap sort
    heapSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

/* Abstract:
   This program implements the heap sort algorithm to sort an array of integers. It starts by building a max-heap from the input array, which is a
   complete binary tree where each node's value is greater than or equal to the values of its children. The program achieves this by comparing 
   and swapping the root with the largest of its children, and recursively heapifying the affected subtree. After building the max-heap,
   the program repeatedly extracts the maximum element from the heap (the root), moves it to the end of the array, and then heapifies the reduced heap.
   This process continues until the entire array is sorted. The main function initializes an array, applies heap sort, and prints both the original and 
   sorted arrays to demonstrate the sorting result. Through this program, I gained a deeper understanding of how the heap sort algorithm leverages the 
   binary heap structure for efficient sorting, reinforcing the importance of maintaining the max-heap property. */