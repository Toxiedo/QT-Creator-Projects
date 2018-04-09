#include "insertion_sort_class.h"


insertion_sort_class::insertion_sort_class()
{

}


/*
Insertion Sort Description :
we swap between the least elemnts in every round
ex:
when we found 2 at element 8 it must b3 at element 2
we enter the while loop to shift the elements to right
to push 2 into element 2

Class 	insertion_sort_class
Data structure 	Array
Worst case performance 	?(n2) comparisons, swaps
Best case performance 	O(n) comparisons, O(1) swaps
Average case performance 	?(n2) comparisons, swaps
Worst case space complexity 	?(n) total, O(1) auxiliary
*/


int* insertion_sort_class::sort(int arr [] , int _size)
{
    for(int i=0; i < _size ; i++)
    {
        int index = i;
        while (index != 0 && arr[index]<arr[index-1])
        {
            int temp = arr[index];
            arr[index] = arr[index-1];
            arr[index-1] = temp;
            index--;
        }
    }
    return arr;
}

