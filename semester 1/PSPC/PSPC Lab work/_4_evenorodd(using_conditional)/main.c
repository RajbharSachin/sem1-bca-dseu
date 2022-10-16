#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    (num%2==0)?printf("Number is even"):printf("Number is odd");
    return 0;
}
