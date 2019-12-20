#include <stdio.h>
#include "insertion.h"
int main()
{
    int x=0;
    int USER_ARR [FIFTY] = {0};
    printf("Please enter 50 numbers: \n");
    for(int i=0; i<FIFTY; i++)
    {
        if(scanf("%d", &x) == 1)
        {
            USER_ARR[i] = x;
        }
        else
        {
            printf("Error with the ");
        }
    }
    insertion_sort(USER_ARR, FIFTY);
    printf("Your sorted arr is: \n");
    for(int i=0;i<FIFTY;i++)
    {
        printf("%d,",USER_ARR[i]);
    }
    return 0;
}