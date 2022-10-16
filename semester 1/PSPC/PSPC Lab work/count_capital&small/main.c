#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main()
{
    char a[100],count=0;
    printf("Enter the string(max 100 length)\n");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if((isupper(a[i]))!=0)
            count++;
    }
    printf("No.of Capital Alphabets: %d\nNo.of small Alphabets: %d",count,strlen(a)-count);
    return 0;
}
