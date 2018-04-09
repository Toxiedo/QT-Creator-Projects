#include "bubble_sort_class.h"

Bubble_Sort_Class::Bubble_Sort_Class()
{
}


/*
Bubble Sort Description :
we swap between the least elemnts in every round
ex:
when we found 2 at element 8 it must b3 at element 2
we enter the while loop to shift the elements to right
to push 2 into element 2

Class 	bubble_sort_class
Data structure 	Array
Worst case performance 	O(n^2)
Best case performance 	O(n)
Average case performance 	O(n^2)
Worst case space complexity 	O(1) auxiliary


*/

int* Bubble_Sort_Class::sort(int arr[] , int n){
                int n1 = n;
                bool swap ;
                for (int i = 0; i < n; i++)
                {
                    swap = false;
                    for (int j = 0; j < n1-1; j++)
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                            swap = true;
                        }
                    }
                    n1--;
                    if (!swap) { break; };
                }
                return arr;
}
