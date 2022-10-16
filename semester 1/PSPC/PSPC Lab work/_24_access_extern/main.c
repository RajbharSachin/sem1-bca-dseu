#include <stdio.h>
#include <stdlib.h>

int main()
{
    extern int a;
    printf("calling function");
    scextern();
    a=10;
    printf("\n%d",a);
    scextern();
    return 0;
}
