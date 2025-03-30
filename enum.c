/*Enum practice with a negative initialization*/

#include<stdio.h>

int main ()
{
    enum fing {thumb, first=-1, middle, ring, small};

    enum fing F;

    printf("\n thumb=%d, first=%d, middle=%d",thumb,first,middle);
    printf("\n ring=%d, small=%d\n", ring,small);
    printf("\n The size of enum is ::%d",sizeof(F)); //size of enum variable will be same as size of int
    return 0;
}           