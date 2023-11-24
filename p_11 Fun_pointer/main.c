#include <stdio.h>
#include <stdlib.h>

void fun(int a){
printf("value of a is %d \n",a);
}

void fun_add(int b, int c){
printf("Addition of %d, %d is %d \n",b,c,b+c);}

int main()
{
    void (*fun_Ptr)(int);  //declaring Fn Ptr
    fun_Ptr = fun;         //assigning Fn Ptr

    fun(7);                //calling using Fn
    (*fun_Ptr)(10);        //calling using Fn Ptr

    void (*fun_addptr)(int,int);  //declaring Fn Ptr
    fun_addptr = fun_add;         //assigning Fn Ptr

    fun_add(7,8);                //calling using Fn
    (*fun_addptr)(10,14);        //calling using Fn Ptr
    return 0;
}
