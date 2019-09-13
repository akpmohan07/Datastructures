/*
C program to simulate the Sinly Linked List.
Note: All the list variables are globally declared.
*/
#include<stdio.h>
#include<stdlib.h>

//Structure of each node in a list
struct lnode
{
    int data;
    struct  lnode *next;
    
};
//Creating required variables
typedef struct lnode* node;
  node head=NULL,tail=NULL,temp=NULL,nn=NULL;




//Function to get node data from the user
int getdata()
{
    int data;
    printf("Enter the Node Data:");
    scanf("%d",&data);
    return data;
}

//Function to create N nodes
//create(int);
void create(int node_count)
{
  
  for (int i = 0; i < node_count; i++)
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
    
}
//Function to print the linked list
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

//Function to insert in the created node
//insert(int_data to be inserted , int_Position , int_total node count)
void insert(int data,int pos,int node_count)
{
    
    int i=1;

   
    if(pos<1||pos>node_count+1)//negative or more than nodecount testcases
    {
        printf("Cannot insert in that position:(\n");
        
    }
    else if(pos==1)//Insert in begin
    {
         nn=(node)malloc(sizeof(node));
         nn->data=data;

         nn->next=head;
         head=nn;
    }
    else if(pos==node_count+1)//Insert in bend
    {
         nn=(node)malloc(sizeof(node));
         nn->data=data;

         tail->next=nn;
         tail=nn;
         tail->next=NULL;

    }
    else//Insert in middle
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
//Function to update the created list(update by position)
//update(int_data to e updated,int_postion)
void update(int data,int pos)
{
    int i;
    temp=head;

    while(i<pos)
    {
        i++;
        temp=temp->next;
    }
    temp->data=data;
}

//Function to delete the node(Delete by position)
//delete(int_position , int_total node count)
void delete(int pos,int node_count)
{

    int i=1;

     if(pos<1||pos>node_count)//negative or more than nodecount testcases
    {
        printf("Cannot delete that position:(\n");
        
    }
    else if(pos==1)//Delete in begin
    {
        head=head->next;
        temp=head;

        free(temp);
    }
    else if(pos==node_count)//Delete in end
    {
         temp=head;

         while(temp!=tail)
         {
             temp=temp->next;
         }
         free(tail);

         tail=temp;

    }
    else//Delete in middle
    {
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
    int node_count,pos,data,choice;

    do
    { 
        printf("Select Your choice:\n1.Create\n2.Insert\n3.Update\n4.Delete");
        scanf("%d",&choice);
    
        switch (choice)
        {
            case 1://Case to call create function
            {
                printf("Enter the node count:");
                scanf("%d",&node_count);
                create(node_count);
                break;
            }
            case 2://Case to call insert function
            {
                printf("Enter the Data to insert:");
                scanf("%d",&data);
                printf("Enter the Position to insert:");
                scanf("%d",&pos);
                insert(data,pos,node_count);
                
                break;
            }
            case 3://Case to call update function
            {
                printf("Enter the postion to be updated:");
                scanf("%d",&pos);
                printf("Enter the data to be updated:");
                scanf("%d",&data);
                update(data,pos);
                break;
            }
            case 4:
            {
                printf("Enter the postion to be deleted:");
                scanf("%d",&pos);
                delete(pos,node_count);
                break;
            }
            default:
            printf("Enter valid input:(");
        }
        show();
        printf("Do you wanna continue(1/0):");
        scanf("&d",&choice);
    }while(choice!=0);

}




