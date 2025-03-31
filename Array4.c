/*Self practice on basics of array */

#include<stdio.h>

int main()
{
    int i, arr[5]= {5,10,15,20,25};

    printf("\nDisplaying the array elements and it's address:: ");
    printf("\n We'll be using a array notation here:: \n");

    for(i=0; i<5; i++)
    {
        printf("\narr[%d]= %d and address of arr[%d]: %u ",i,arr[i],i,&arr[i]);
    }

    return 0;
}