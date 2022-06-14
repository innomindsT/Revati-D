#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	struct student *link;//self referential pointer
};
struct student * add(struct student*);
struct student * del(struct student*);
struct student *del_first(struct student *);
void display(struct student*);
void main()
{
	struct student *head=NULL;
	int choice;
	while(1)
	{
		printf("Enter a choice 1.add 2.display 3.delete 4.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=del(head);
			       break;
			case 4:exit(0);
		}
	}
}
struct student*add(struct student *ptr)
{
	struct student *newnode=NULL,*temp=NULL;//declaring newnode
 	newnode=(struct student*)calloc(1,sizeof(struct student));//creating new node
	if(newnode==NULL)
	{
		printf("node not created\n");//checking node is created or not
	}
	else
	{
		//node created successfully
		//initialise the node
		printf("enter roll number\n");
		scanf("%d",&newnode->roll);
		printf("enter name:\n");
		scanf("%s",newnode->name);
		if(ptr==NULL)
			ptr=newnode;//if list is empty add newnode as first node
		else  //list already existing
		{   //traverse upto last node 
			temp=ptr;
			while(temp->link !=NULL)//if temp is not last node enter loop
			{
				temp=temp->link;//moving to next node
			}
			//temp is at last node
			temp->link=newnode;//linking  newnode to last node
		}
	}
	return ptr;
}
void display(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
	}
}
struct student* del(struct student *ptr)
{
	struct student *temp=NULL,*prev=NULL;
	int n,pos=0,count=0;
        while(ptr)
	{
		count++;
		ptr=ptr->link;
	}
	printf("nodes are:%d\n",count);
	printf("enter n value:\n");
	scanf("%d",&pos);

       // pos=count+1-n;
	printf("%d",pos);
	

	if(pos==ptr->roll)
	{
		ptr=del_first(ptr);

	}
	else
	{
		prev=ptr;
		temp=ptr->link;
		while(temp && pos !=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",pos);
		}
		else
		{
			prev->link=temp->link;
			free (temp);
			temp=NULL;
		}
	}
	return ptr;
}
struct student *del_first(struct student *ptr)
{
	struct student *temp=NULL;
	if(ptr==NULL)
		printf("list is empty\n");
	else
	{
		temp=ptr;
		ptr=ptr->link;
		free(temp);
		temp=NULL;
	}
	return ptr;
}


