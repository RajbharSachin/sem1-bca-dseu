#include <stdio.h>
#include <stdlib.h>

// &,|,~,<<,>>,^ do bitwise manipulation
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("a&b   = %d\n",a&b);
    printf("a|b   = %d\n",a|b);
    printf("~a ~b = %d %d\n",~a,~b);
    printf("a<<b  = %d\n",a<<b);
    printf("a>>b  = %d\n",a>>b);
    printf("a^b   = %d\n",a^b);
    return 0;
}
