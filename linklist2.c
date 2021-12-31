//*********************THIS PROGRAM IS USED TO CREATE SINGLY LINK LIST USING STRUCTURE******************************\\

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// DEFINE NODE
struct node
{
    int info;      // it contain node's information
    struct node *next;       // use to store next node address
};

void create(struct node *);       // use to define all node variables in it dynamically
void output(struct node *);       // use to display node data
void main()
{

    struct node *block;
    // creating empty space(or block), in which node variable store its data
    block=(struct node *)malloc(sizeof(struct node));

    create(block);
    output(block);
}

void create(struct node *block)
{
    int node_info=-1;
    printf("\nEnter current node info:");
    scanf("%d",&node_info);

    if(node_info==0)
    {
        block->next=NULL;
    }
    else
    {
        block->info=node_info;
        block->next=(struct node *)malloc(sizeof(struct node));
        create(block->next);

    }


}


void output(struct node *block)
{
    if(block->next==NULL)
    {
        printf("\n\nLast node is %u and its next is %u",block,block->next);
    }
       else
       {
           printf("\n node %u info is  %d   next is  %u",block,block->info,block->next);
           output(block->next);
       }

}
