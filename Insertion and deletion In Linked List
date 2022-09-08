#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next,*prev;
}*h,*first,*t;
struct node* InsertAtEnd(struct node *s,int x)
{
    struct node *s1,*P;
    P=(struct node*)malloc(sizeof(struct node));
    P->data=x;
    P->next=NULL;

    if(s==NULL){
    printf("Insertion not possible");
    exit(0);
    }
    s1=s;
    while(s->next!=NULL){
    s=s->next;
    }
    s->next=P;
    P->prev=s;
    return s1;
  }
  struct node* InsertAtStart(struct node *s,int x)
  {   struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  p->data=x;
  p->prev=NULL;
  p->next=s;
  s->prev=p;
  s=p;
  return s;
  }
  struct node* Del(struct node *s,int x){
  struct node *p;
  p=s;
  while(p->data!=x&&p->next!=NULL){
    p=p->next;}
    p->prev->next=p->next;
    p->next->prev=p->prev;
    free(p);
    p=NULL;
    return s;
  }
  void display(struct node *F){
     struct node *t;
     t=F;
  printf("Item's are: ");

  while(t!=NULL) {
    printf("%d=>",t->data);
    t=t->next;
	    }

   }
main(){
typedef struct node N;
int ch=1,c=0,x;
first=0;
while(ch){
        c++;
h=(N *)malloc(sizeof(N));
h->next=NULL;
h->prev=NULL;
printf("enter data");
scanf("%d",&(h->data));
if(first!=0){
 t->next=h;
 h->prev=t;
 t=h;
}
else first=t=h;
printf("do you want to add more type 1 or 0");
scanf("%d",&ch);
}
t->next=NULL;
t=first;
printf("items are");
while(t!=NULL){
    printf("%d=>",t->data);
    t=t->next;
}
printf("NULL\n");
printf("elements=%d",c);
while(ch!=4){
printf("menu\n");
     printf("1.Insert at end\n");
     printf("2.Insert at Start\n");
     printf("3.delete an element");
     printf("4.Exit");
     scanf("%d",&ch);
     if(ch==1){
     printf("enter data");
     scanf("%d",&x);
     InsertAtEnd(first,x);
     display(first);
     }
     else if(ch==2){
     printf("enter data");
     scanf("%d",&x);
     first=InsertAtStart(first,x);
     display(first);
     }
     else if(ch==3){
        printf("enter data");
     scanf("%d",&x);
     Del(first,x);
     display(first);
     }
     else if(ch==4){
        break;
     }
}
}
