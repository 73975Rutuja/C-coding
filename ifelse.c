/*Self practice on If else statements*/

#include<stdio.h>

int main()
{
    int cp, sp;

    printf("\n Please enter the cost price of an item: ");
    scanf("%d",&cp);
    printf("\n Please enter the selling price of an item: ");
    scanf("%d",&sp);

    if(cp < sp)
    
        printf("\n There is a profit worth= %d\n", sp-cp);
    
    else
    
        printf("\n There is a loss worth= %d\n",cp-sp);
    

    return 0;
}