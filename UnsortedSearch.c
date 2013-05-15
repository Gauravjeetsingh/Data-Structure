#include<stdio.h>
#include<stdlib.h>

main()
{

struct node
{
int data;
struct node *link;
};

int item,x;
struct node *first, *second, *third, *fourth, *ptr;

first=(struct node*)malloc(sizeof(struct node));
first->data = 1;

second=(struct node*)malloc(sizeof(struct node));
second->data = 16;

third=(struct node*)malloc(sizeof(struct node));
third->data = 6;

fourth=(struct node*)malloc(sizeof(struct node));
fourth->data = 10;

ptr=(struct node*)malloc(sizeof(struct node));


first->link = second;

second -> link = third;

third -> link = fourth;

fourth -> link = NULL ;

ptr = first;

printf("Items in linked list are:\n");
while(ptr != NULL)
{
printf("%d\n",ptr->data);
ptr = ptr->link;
}

printf("Enter item to be searched:");
scanf("%d",&item);
ptr =first;

while(ptr != NULL)
{
if(item == ptr->data)
{
x=1;
printf("Search is successful\n");
break;
}
else
ptr = ptr->link;
}
if(x != 1)
{
printf("Search is unsuccessful\n");
}
}
