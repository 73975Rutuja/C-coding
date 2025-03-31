/* Self practice on calloc */

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr=NULL,count=4;

    ptr = (int *)calloc(4,sizeof(int));

    printf("\nPlease enter the values \n");
    for(int i=0; i<4; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\n The values entered are :: \n");
    for(int i=0; i<4; i++)
    {
        printf("\n%3d",ptr[i]);
        printf(" and it's Address = %u  ",&ptr[i]);// trying to access the dynamic memory created on heap
    }

    free(ptr);
    ptr=NULL;
    printf("\n %u",ptr);
    

    return 0;
}