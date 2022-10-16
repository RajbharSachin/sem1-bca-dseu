#include <stdio.h>
#include <stdlib.h>

//call by refrence
int swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nValues inside main function\na=%d\nb=%d",a,b);
}
int swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("Swapped nos are\na=%d\nb=%d",*a,*b);
}
