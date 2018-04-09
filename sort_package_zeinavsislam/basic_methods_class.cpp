#include "basic_methods_class.h"

Basic_methods_class::Basic_methods_class()
{

}

void Basic_methods_class::swap(int * a , int * b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


