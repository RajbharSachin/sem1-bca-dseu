#include <stdio.h>
#include <stdlib.h>
void f();
void f2();
int b=0;
int main()
{
    f();
    f2();
    return 0;
}
void f()
{
    int b=3;
    printf("%d\n",b);
}
void f2()
{
    printf("%d",b);
}
