#include <stdio.h>

//swap two variables using third variable
int main()
{
    int a,b,temp;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    temp=a;
    //swap a
    a=b;
    //swap b
    b=temp;
    printf("Swapped numbers are\n");
    printf("%d %d",a,b);
    return 0;
}
