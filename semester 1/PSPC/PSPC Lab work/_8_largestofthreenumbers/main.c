#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Largest number is ");
    (a>b)?(a>c)?printf("%d",a):printf("%d",c): (b>c)?printf("%d",b):printf("%d",c);
    return 0;
}
