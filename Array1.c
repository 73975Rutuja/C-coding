/*Self practice on basics of array, here we'll see how we can display the array elements */

#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    printf("\n The array elements using array notation :: \n");

    for(int i=0;i<5;i++)
    {
        printf(" arr[%d] = %d ",i, arr[i]);
    }

    printf("\n\n The array elements using pointer notations :: \n\n");
    for(int i=0; i<5; i++)
    {
        printf("arr[%d] = %d ",i,*(arr+i));

    }

    return 0;
}