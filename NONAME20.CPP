#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#define NULL 0
void create(int);
void addbeg(int);
void addbet(int,int);
void display(void);
void delfirst(void);
void dellast(void);
int dellast(void);
int delnode(int);
void sort(void);
void search(int);
void reverse(void);
class SL
{
	private:
		struct node
		{
			struct node *prev;
			int data;
			struct node *link;
		};
		struct node *p;
	public:
		SL()
		{
			p=NULL;
		}
		void create(int no)
		{
			struct node *q;
			q=p;
			if(q == NULL)
			{
				p=(struct node*)malloc(sizeof(struct node));
				p->data=no;
				p->link=NULL;
				p->prev=NULL;
			}
			else
			{
				while(Q->link!=NULL)
				{
					q=q->link;
				}
				q->link=(struct node*)mallooc(sizeof(struct node));
				q->link->data=no;
				q->link->link=NULL;
				q->prev->link=q;
			}
			printf("\nNode Created...");
			getch();
		}
		//Create First Node
		void addbeg(int no)
		{
			struct node *q;
			q=p;
			p=(struct node*)malloc(sizeof(struct node));
			p->data=no;
			p->link=NULL;
			p->prev=NULL;
			printf("\nCreate Node at First");
			getch();
		}
		void addbet(int no,int pos)
		{
			struct node *q,*temp;
			int i;
			q=p;
			if(pos>0)
			{
				for(i=1;i<pos;i++)
				{

					q = q->link;
					if(q->link == NULL)
					{
						printf("\nYou are on Last Node,Position Out of Range..");
						getch();
						goto E1;
					}
				}
				temp=(struct node*)malloc(sizeof(struct node));
				temp->data=no;
				temp->link=q->link;
				temp->prev=q->prev;
				q->link=temp;
				q->prev=q;
				printf("\nCreate node at position%d",pos+1);
			}
			else
			{
				print("\nPosition Must be Greater Then Zero");
			}
			getch();
			E1:
		}
		//To Display all Nodes
		void display(void)
		{
			struct node *q;
			q=p;
			while(q!=NULL)
			{
				printf("%d->",q->data);
				q=q->link;
			}
			getch();
		}
		void delfirst(void)
		{
			struct node *q;
			q=p;
			if(p!=NULL)
			{
				p=p->link;
				p->prev=NULL;
				free(q);
				printf("\nNode Deleted");
			}
			else
			{
				printf("\nLinklist is Empty");
			}
			getch();
		}
}