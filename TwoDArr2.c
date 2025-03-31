/*Self practice on accepting a 2-D array and displaying it on console*/

#include<stdio.h>

int main()
{
    int arr[4][3];
    int i,j;

    printf("\n Please enter the elements for 2-D Array: \n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\n arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n The entered 2-D Array is :: \n");

    for(i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}