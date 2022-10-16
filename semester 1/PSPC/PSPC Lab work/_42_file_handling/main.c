#include <stdio.h>
#include <stdlib.h>
struct stud
{
    char name[20];
    int rollno;
    float marks[5];
};
int main()
{
    struct stud s1;
    int rollno_mod,found=0;
    FILE *fp;
    fp=fopen("TESTF2.txt", "w+");
    if(fp==NULL)
        {
            printf("Cannot Open\n");
            exit(1);
        }
    else
         for(int i =0;i<2;i++)
         {
             printf("Enter Name: ");
             fflush(stdin);
             gets(s1.name);
             printf("Roll No.: ");
             scanf("%d", &s1.rollno);
             printf("Enter 5 Marks: \n");
             for(int j=0;j<5;j++)
                {
                    scanf("%f", &s1.marks[j]);
                }
             fwrite(&s1,sizeof(s1),1,fp);
         }
     rewind(fp);
     printf("\nSTOREDRECORDS ARE:-\n\n");
     while(fread(&s1,sizeof(s1),1,fp)>0)
        {
            printf("NAME: %s" "\n" "ROLL NO:%d\n", s1.name, s1.rollno);
            for(int i=0;i<5;i++)
            {
                printf("%f", s1.marks[i]);
                printf("\n");
            }
        }
    printf("Enter the rollno to be modified");
    scanf("%d",&rollno_mod);
    rewind(fp);
    while(fread(&s1,sizeof(s1),1,fp)>0)
        {
            if(s1.rollno==rollno_mod)
            {
            found=1;
            break;
            }
        }
    if(found==1)
        {
            fseek(fp,-sizeof(s1),SEEK_CUR);
            printf("Enter new record\n");
            printf("Enter Name: ");
            fflush(stdin);
            gets(s1.name);
            printf("Roll No.: ");
            scanf("%d", &s1.rollno);
            printf("Enter 5 Marks: \n");
            for(int j=0;j<5;j++)
                {
                    scanf("%f", &s1.marks[j]);
                }
            fwrite(&s1,sizeof(s1),1,fp);
        }
    rewind(fp);
    printf("\nSTOREDRECORDS ARE:-\n\n");
    while(fread(&s1,sizeof(s1),1,fp)>0)
        {
            printf("NAME: %s" "\n" "ROLL NO:%d\n", s1.name, s1.rollno);
            for(int i=0;i<5;i++)
            {
                printf("%f", s1.marks[i]);
                printf("\n");
            }
        }
    fclose(fp);
    return 0;
}
