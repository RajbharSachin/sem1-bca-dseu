#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char fname[20],lname[20],res[40];
    printf("Enter First Name\n");
    gets(fname);
    printf("Enter First Name\n");
    gets(lname);
    printf("Concatenated String is\n%s",strcat(strcat(fname," "),lname));
    return 0;
}
