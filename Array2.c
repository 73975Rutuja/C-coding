/*Self practice on basics of array, in this we're taking values in an array and then printing them */

#include<stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("\n Here we're accepting the values using array notation:: ");

    printf("\n Please enter the elements in array :: \n\n");

    for(i=0; i<5 ;i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n Printing the array using array notation:: \n");
    for(i=0; i<5; i++)
    {
        printf("arr[%d]= %d ",i,arr[i]);
    }
    
    return 0;
}