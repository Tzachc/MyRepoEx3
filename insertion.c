#include <stdio.h>
#include "insertion.h"
void shift_element(int* arr,int i)
{
    while(i>0)
    {
        *(arr+i) = *(arr + i - 1);
        i--;
    }
}
void insertion_sort(int* arr,int len)
{
    int temp,j,i;
    for(i=1; i<len; i++)
    {
        temp = *(arr+i);
        j=i-1;
        while((temp<*(arr+j)) && (j>=0))
        {
            *(arr+j+1) = *(arr+j);
            j = j-1;
        }
        *(arr+j+1) = temp;
    }
}