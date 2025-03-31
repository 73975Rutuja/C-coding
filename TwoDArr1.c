/*Self practice on printing '*' diagonally in 3x3 array and remaining values as 1 */

#include<stdio.h>

int main()
{
    char arr[3][3];
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i == j)
                printf("*  ");
            else
                printf("1  ");
        }
        printf("\n");
    }

    return 0;
}