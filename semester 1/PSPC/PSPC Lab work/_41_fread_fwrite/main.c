#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    char section;
    int rollno;
}s;
int main()
{
    FILE *fp,*fp1;
    int roll;
    fp=fopen("student.txt","wb");
    if(fp==NULL)
    {
        printf("\nError: cannot open file");
        exit(1);
    }

    printf("Enter name,section,rollno\n");
    scanf("%s %c %d",s.name,&s.section,&s.rollno);
    printf("\n");
    fwrite(&s,sizeof(struct student),1,fp); //writes struct into file
    printf("\nData is stored successfully...\n");
    fclose(fp);


    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("\nError: cannot open file");
        exit(1);
    }

    fread(&s,sizeof(struct student),1,fp); //reads struct into file
    printf("\nName= %s\nSection= %c\nrollno= %d",s.name,s.section,s.rollno);
    fclose(fp);

    //Modification
    printf("\nEnter the roll no whose record to be updated ");
    scanf("%d",&roll);
    fp=fopen("student.txt","rb");
    fp1=fopen("copy.txt","wb");
    if(fp==NULL)
    {
        printf("\nError: cannot open file");
        exit(1);
    }
    while(fread(&s,sizeof(struct student),1,fp))
    {
        if((s.rollno!=roll))
        {
            fwrite(&s,sizeof(struct student),1,fp1);
        }
    }
    struct student s1={"John",'A',41221176};
    fwrite(&s1,sizeof(struct student),1,fp1);
    fclose(fp);
    fclose(fp1);
    remove("student.txt");
    rename("copy.txt","student.txt");
    printf("Record updated successfully");
    return 0;
}
