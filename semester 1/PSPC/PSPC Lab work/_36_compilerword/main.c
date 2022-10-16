#include <stdio.h>
#include <stdlib.h>

#define TEST 10
int main()
{
    #if(TEST<=5)
        printf("I am less than or equal to 5\n");
        printf("Existing less than equal to 5");
    #elif(TEST>5&&TEST<=8)
        printf("I am 5 to 8\n");
        printf("Existing 5 to 8");
    #else
        printf("I am else\n");
        printf("Existing else");
    #endif
}
