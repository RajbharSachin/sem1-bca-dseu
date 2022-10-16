#include <stdio.h>
struct student 
{
    int rno;
    float cgpa;
    char name[50];
};
struct teacher
{
    char sub[50];
    char name[50];
};
struct admin
{
    char type[20];
    char name[50];
};

int main(){
    struct student BCA[60];
    struct student pharmacy[60];
    struct student mlt[60];
    struct student baspanish[60];
    struct student s1 = {411221026, 8.70,"Harshita"};
    struct teacher t1 = {"Maths", "Shilpa Bahl"};
    struct admin a1 = {"Cooking", "Shyam"};
    printf("name = %s\n",s1.name);
    printf("roll no = %d\n",s1.rno);
    printf("cgpa = %f\n",s1.cgpa);
    return 0;
}