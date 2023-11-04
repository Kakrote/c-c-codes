// Program No 5: Design, Develop and Implement a menu driven Program in C for the following operations on Singly Linked List (SLL) of Student Data with the fields: USN, Name, Branch, Sem, PhNo
// a. Create a SLL of N Students Data by using front insertion.
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
 struct student
{
	int data;
    struct student *next;
}s;
struct student *start = NULL;
struct student *create(struct student *);
int main()
{
	start = create(start);
	getch();
	return 0;
}
struct student *create(struct student *start)
	{
		struct student *new_node, *ptr;
		int num;
		struct name
		{
		char fname[25];
	    	char lname[25];
	    	char sem[10];
	    	char contact[12];
		}d;
		while(num!=0)
		{
			printf("\n Do you want to enter next data:- ");
			scanf("%d", &num);
			new_node = (struct student*) malloc(sizeof(struct student));
			new_node->data=num;
			if(start==NULL)
			{
				new_node->next=NULL;
				start=new_node;
			}
			else
			{
				ptr=start;
				while(ptr->next!=NULL)
				     ptr=ptr->next;
				ptr->next=new_node;
				new_node->next=NULL;
			}
		
			printf("\nEnter student's details.\n");
			printf("\nEnter your name: ");
			printf("\nEnter your first name:- ");
			scanf("%s",d.fname);
			printf("\nEnter your last name:- ");
			scanf("%s",d.lname);
			printf("\nEnter the semester:- ");
			scanf("%s",d.sem);
			printf("\nEnter the contact number:- ");
			scanf("%s",d.contact);
		    }
	}