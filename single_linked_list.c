/*
C program to simulate the Sinly Linked List.
*/
#include<stdio.h>
#include<stdlib.h>

struct lnode
{
    int data;
    struct  lnode *next;
    
};

typedef struct lnode* node;
  node head=NULL,tail=NULL,temp=NULL,nn=NULL;





int getdata()
{
    int data;
    printf("Enter the Node Data:");
    scanf("%d",&data);
    return data;
}
void create()
{
  
    nn=(node)malloc(sizeof(node));
    nn->data=getdata();

    if(head==NULL)
    {
        head=nn;
        tail=nn;
        
    }
    else
    {
        tail->next=nn;
        tail=nn;
      
    }

    tail->next=NULL;
    
}

void show()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insert(int data,int pos,int node_count)
{
    
    int i=1;

   
    if(pos<1||pos>node_count+1)
    {
        printf("Cannot insert in that position:(\n");
        
    }
    else if(pos==1)
    {
         nn=(node)malloc(sizeof(node));
         nn->data=data;

         nn->next=head;
         head=nn;
    }
    else if(pos==node_count+1)
    {
         nn=(node)malloc(sizeof(node));
         nn->data=data;

         tail->next=nn;
         tail=nn;
         tail->next=NULL;

    }
    else
    {
         nn=(node)malloc(sizeof(node));
         nn->data=data;

        temp=head;
         while(i<pos-1)
         {
             i++;
             temp=temp->next;
         }

         nn->next=temp->next;
         temp->next=nn;
    }
    
    

}

void main()
{
    int node_count,pos,data;
    printf("Enter the node count:");
    scanf("%d",&node_count);
    for(int i=0;i<node_count;i++)
    {
        create();
    }

    show();

    printf("Enter the Data to insert:");
    scanf("%d",&data);
    printf("Enter the Position to insert:");
    scanf("%d",&pos);
    
    insert(data,pos,node_count);

    show();
}




