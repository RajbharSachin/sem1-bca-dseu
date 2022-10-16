#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1;
    char c;
    f1 = fopen("newfile.txt", "r");
    if (f1 == NULL)
    {
        puts("Cannot Open File");
        exit(1);
    }

    while (1)
    {
        c = getc(f1);
        if (c == EOF)
        {
            break;
        }
        printf("%c", c);
    }
    fclose(f1);

    f1 = fopen("newfile.txt", "w");
    if (f1 == NULL)
    {
        puts("Cannot Open the file for writing");
        exit(1);
    }

    else
    {
        while (c = getchar() != EOF)
        {
            putc(c, f1);
        }
    }
    fclose(f1);
    return 0;
}
