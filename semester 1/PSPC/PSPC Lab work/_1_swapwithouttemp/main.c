#include <stdio.h>

//swap two variables without using third variable
int main()
{
    int a,b,temp;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    //swap b
    b=a-b;
    //swap a
    a=a-b;
    printf("Swapped numbers are\n");
    printf("%d %d",a,b);
    return 0;
}

