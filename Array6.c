/*Self practice on basics of array. Taking the values in an array and displaying them using function */

#include<stdio.h>

void accept_data(int arr[5] );
void p_data(int arr[5]);

int main()
{
    int arr[5];

    printf("\n Please enter the values for the array: ");
    accept_data(arr);

    printf("\n The entered values for the array is: ");
    p_data(arr);
    return 0;
}

void accept_data(int arr[5])
{
    printf("\n");

    for(int i=0; i<5; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

}

void p_data(int arr[5])
{
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("arr[%d]= %d  ",i, arr[i]);
    }

}