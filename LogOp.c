/*Self practice on Logical operators*/

#include<stdio.h>

int main()
{
    int a=3, b=6,c=9;

    int d = a<b && b<c; // AND operator-- in C for And, if the 1st condition is true, then only it'll check the 2nd condition
    int e = a<b || b>c; // OR operator-- in C for OR, if the 1st condition is false, then only it'll check the 2nd condition
    int f = !(a>b); // NOT operator

    printf("\nd=%d, e=%d, f=%d\n",d,e,f);
    
    return 0;
}