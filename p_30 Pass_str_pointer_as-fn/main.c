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
    struct student stud1 = {"abc",101,15};
    struct student stud2 = {"xyz",102,16};

    disp_student(&stud1); //passing the addr of structure
}

disp_student(struct student *studptr)
{
    printf("\n Name : %s",studptr -> Name);
    printf("\n RollNo : %d",studptr -> RollNo);
    printf("\n Age : %d",studptr -> age);
}
