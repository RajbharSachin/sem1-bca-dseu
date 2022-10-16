#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=2,*p1,*p2,z;
    p1=&a;
    p2=&b;
    z=5*-*p2/ *p1;
    printf("Value of expression z=5*-*p2/ *p1: %d\n",z);
    return 0;
}
