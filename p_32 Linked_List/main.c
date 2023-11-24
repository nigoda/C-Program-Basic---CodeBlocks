#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data ;
   struct node* next;
}ll;


int main()
{
ll *a=(ll *)malloc(sizeof(ll)*1);
ll *b=(ll *)malloc(sizeof(ll)*1);
ll *c=(ll *)malloc(sizeof(ll)*1);


a->data=1;
b->data=2;
c->data=3;

a->next=b;
b->next=c;
c->next=NULL;
printf("\n");
ll *ptr=a;
while(ptr!=NULL)
{
    printf("%d\t",ptr->data);
    ptr=ptr->next;

}

printf("%d %d %d",a->data,b->data,c->data);
return 0;
}
