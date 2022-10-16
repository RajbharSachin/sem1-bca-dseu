#include <stdio.h>
#include <stdlib.h>
void f2();
void f1();
int main()
{
    int m=10;
    f2();
    printf("%d",m);
    return 0;
}
void f2()
{
    int m=100;
    f1();
    printf("%d\n",m);
}
void f1()
{
    int m=1000;
    printf("%d\n",m);
}
