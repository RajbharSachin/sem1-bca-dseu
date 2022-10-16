#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[100],vowel=0,conso=0,x;
    printf("Enter a string(max 100 length)\n");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        x=toupper(a[i]);
        if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
            ++vowel;
        else if((a[i]>='a'||a[i]>='A')&&(a[i]<='z'||a[i]<='Z'))
            ++conso;
    }
    printf("No. of Vowels= %d & Consonants= %d",vowel,conso);
    return 0;
}
