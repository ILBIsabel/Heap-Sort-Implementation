Heap Sort Implementation in C


Algorithm Implementation: Developed a comprehensive Heap Sort algorithm, which includes functions for swapping elements, heapifying subtrees, and performing the overall heap sort on an array of integers.

Heapify Function: Implemented a recursive heapify function to ensure that each subtree rooted at a given index maintains the heap property by comparing and swapping elements as necessary.

Sorting Mechanism: Built a max heap from the input array and repeatedly extracted the maximum element, placing it at the end of the array, and reducing the heap size to sort the array.

Demonstration Program: Created a main program to showcase the algorithm, which includes initializing an array, printing the original array, performing the heap sort, and printing the sorted array.

Abstract:
   This program implements the heap sort algorithm to sort an array of integers. It starts by building a max-heap from the input array, which is a
   complete binary tree where each node's value is greater than or equal to the values of its children. The program achieves this by comparing 
   and swapping the root with the largest of its children, and recursively heapifying the affected subtree. After building the max-heap,
   the program repeatedly extracts the maximum element from the heap (the root), moves it to the end of the array, and then heapifies the reduced heap.
   This process continues until the entire array is sorted. The main function initializes an array, applies heap sort, and prints both the original and 
   sorted arrays to demonstrate the sorting result. Through this program, I gained a deeper understanding of how the heap sort algorithm leverages the 
   binary heap structure for efficient sorting, reinforcing the importance of maintaining the max-heap property.
