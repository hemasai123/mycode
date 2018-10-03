#include<stdio.h>
#include<Stdlib.h>
struct student 
{
int roll;
char name[10];
floar per;
struct student *next;
};
void add_last(struct student **);
void display(struct student *);
void add_beg(struct student**);;
main()
{
struct student *head=NULL;
int choice;
while(1)
{
printf("1.add_last\t 2.display\t3.addbeg\t");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:add_last(&head);
       break;
case 2:display(head);
break;
default:printf("invalid choice\n");
breaak;
}}}
void add_last(struct student **ptr)
{
struct student *nu=NULL,*temp=NULL;
nu=calloc(1,sizeof(struct student);
if(nu==NULL)
{
printf("memory allocation failed");
return;
}
printf("enter roll no:");
scanf("%d",&nu->roll);
printf("enter the name:");
scanf("%s",nu->name);
printf("enter roll no:);
scanf("%s",&nu->per);
if(*ptr==NULL)
{
*ptr=nu;
}
else
{
temp=*ptr;
while(temp->next)
{
temp=temp->next;
}
temp->next=nu;
}}












