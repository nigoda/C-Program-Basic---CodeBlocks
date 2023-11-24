#include <stdio.h>
#include <stdlib.h>


struct student{
    char Name[30];
    int RollNo;
    int age;
    };

disp_student(struct student *); //arg type is struct pointer

int main()
{
    struct student studarr[2] = {
                                {"abc",101,15},
                                {"xyz",102,16}
    };

    disp_student(studarr); //passing the aarray of structure
}

disp_student(struct student stud[])
{
    for(int i=0;i<2;i++)
    {
    printf("\n Name : %s",stud[i].Name);
    printf("\n RollNo : %d",stud[i].RollNo);
    printf("\n Age : %d",stud[i].age);
    }
}


