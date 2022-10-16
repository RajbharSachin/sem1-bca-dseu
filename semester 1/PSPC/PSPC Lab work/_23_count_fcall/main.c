#include <stdio.h>
#include <stdlib.h>
static int count=0;
void fun(int x);
int main()
{
    int n;
    printf("Enter the no. of times to call the function: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            fun(i);
        }
    printf("\n\nTotal no of times function called: %d",count);
    return 0;

}
void fun(int x)
{
    printf("function called %d time",x);
    printf("\n");
    count=count+1;
}
