#include <stdio.h>
#include <stdlib.h>

/* x++, x--(Postfix)
   ++x, --x(Prefix) */
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Prefix operator\n ++a= %d\n --a= %d\n",++a,--a);
    printf("Postfix operator\n a++= %d\n a--= %d\n",a++,a--);
    return 0;

}
