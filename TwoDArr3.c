/*Self practice on accepting a 2-D array and displaying it on console using functions */

#include<stdio.h>

void accept(int arr[4][3]);
void print(int arr[4][3]);

int main()
{
    int arr[4][3];
    int i,j;

    accept(arr);
    print(arr);

    return 0;

}
void accept(int arr[4][3])
{
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
}

void print(int arr[4][3])
{
    int i,j;

    printf("\n The entered 2-D Array is :: \n");

    for(i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}