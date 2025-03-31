/* Self practice on malloc */

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr=NULL, *ptr2=NULL;

    ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    printf("\n The value at ptr is :: %d",*ptr);
    printf("\n The address of ptr :: %u  ",&ptr); // trying to access the dynamic memory created on heap

    ptr2 = (int *)malloc(sizeof(int)*4);

    printf("\n Please enter the values :: \n");
    for(int i=0; i<4; i++)
    {
        scanf("%d",&ptr2[i]);
    }

    printf("\n The values entered are :: \n");
    for(int i=0; i<4; i++)
    {
        printf("\n%3d",ptr2[i]);
        printf(" and it's Address = %u  ",&ptr2[i]);// trying to access the dynamic memory created on heap
    }

    free(ptr);
    ptr=NULL;

    free(ptr2);
    ptr2=NULL;

    return 0;
}