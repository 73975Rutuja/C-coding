/*Self practice on basics of array */

#include<stdio.h>

int main()
{
    int i, arr[5]= {6,12,18,24,30};

    printf("\nDisplaying the array elements and it's address:: ");
    printf("\n We'll be using a pointer notation here:: \n");

    for(i=0; i<5; i++)
    {
        printf("\n arr[%d]= %d and address of arr[%d]: %u ",i,*(arr+i),i,(arr+i));
    }

    return 0;
}