#include<stdio.h>
#include<stdlib.h>
struct node
{
   int Data;
   struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;
void InsertL(PPNODE Head,int No)
{
	PNODE newn=NULL;
	PNODE Temp=*Head;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=No;
	newn->Next=NULL;

	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(Temp->Next!=NULL)
		{
			Temp=Temp->Next;
        }
        Temp->Next=newn;
	}
}
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\n",Head->Data);
		Head=Head->Next;
	}
}
int Max(PNODE Head)
{
	int max=0;
	max=Head->Data;
	while(Head!=NULL)
	{
		if(Head->Data>max)
		{ max=Head->Data;}
	Head=Head->Next;
	}
	return max;
}
int main()
{
	PNODE First=NULL;
	int ret=0;

	InsertL(&First,110);
	InsertL(&First,230);
	InsertL(&First,320);
	InsertL(&First,240);
	
	Display(First);
	ret=Max(First);
	printf("The Maximum is %d",ret);
    return 0;	
}