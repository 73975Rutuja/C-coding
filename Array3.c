/*Self practice on basics of array, in this we're taking values in an array and then printing them, but a little change */

#include<stdio.h>

int main()
{
    int arr[5],i;

    printf("\n Here we're accepting the values using pointer notation:: ");

    printf("\n Please enter the elements in array :: \n");
    for(i=0; i<5; i++)
    {
        printf("arr[%d]=  ",i);
        scanf("%d",arr+i); // '&' is not needed here, as the array name is the base address of array
    }

    printf("\n Printing the values using pointer notation:: \n\n");

    for(i=0; i<5; i++)
    {
        printf("arr[%d]= %d ",i,*(arr+i));
    }

    return 0;
}