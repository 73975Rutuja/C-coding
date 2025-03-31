/*Self Practice on Wild Pointer*/

#include<stdio.h>

int main()
{
    int *p; // wild pointer
    /*If we don't initialize the pointer it points to some location in memory which is random and it's 
    dangerous. Not to be used and so it is called as Wild pointer*/

    printf("\n %u ",*p); 
    printf("\n %d ",p); // this gives garbage value
    
    return 0;
}