#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    ptr="BCA";
    printf("%c",*&*ptr);
    return 0;
}
