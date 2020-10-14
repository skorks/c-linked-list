#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*start;

void creatlist();
void display();
void count();
void insert_at_beginning();

int main()
{
    creatlist();
    count();
    insert_at_beginning();
}

void creatlist()
{
    int n, num, i;
    struct node *ptr, *new_node;
    start = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the no of node you want to creat: ");
    scanf("%d", &n);
    printf("\nEnter the data: ");
    scanf("%d", &num);
    start-> data = num;
    start-> link = NULL;
    ptr = start;

    for ( i = 2; i <=n; i++)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d", &num);
        new_node->data=num;
        new_node->link=NULL;
        ptr->link=new_node;
        ptr = ptr->link;
    }
    display();
}
void display()
{
    struct node *ptr;
    ptr=start;
    while (ptr != NULL)
    {
        printf("\t%d", ptr->data);
        ptr = ptr->link;
    }
}

void count()
{
    int count=0;
    struct node *ptr;
    ptr=start;
    while (ptr != NULL)
    {
        count=count+1;
        ptr=ptr->link;
    }
    printf("\nThe total number of nodes are :%d",count);
    
}
void insert_at_begnning()
{
    struct node *new_node;
    int num;
    printf("\nEnter new data: ");
    scanf("%d", &num);
    new_node->data=num;
    new_node->link=start;
    start=new_node;
    display();
}

