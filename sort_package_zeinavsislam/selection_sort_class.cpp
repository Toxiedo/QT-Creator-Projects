#include "selection_sort_class.h"

selection_Sort_class::selection_Sort_class()
{

}

int * selection_Sort_class::sort(int arr[] , int count){

    int index = 0;
    int temp ;

    for (int i = 0; i < count; i++)
    {
        temp = arr[i];
        for(int j = i ; j<count ; j++)
        {
            if(temp >= arr[j])
            {
                temp = arr[j];
                index = j;
            }
        }
        Basic_methods_class::swap(&arr[i] , &arr[index]);
    }
    return arr;
}
