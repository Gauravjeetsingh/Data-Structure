#include<stdio.h>
#include<stdlib.h>

main()
{

struct node
{
int data;
struct node *link;
};

struct node *first, *second, *third, *fourth, *ptr;

first=(struct node*)malloc(sizeof(struct node));
first->data = 10;

second=(struct node*)malloc(sizeof(struct node));
second->data = 30;

third=(struct node*)malloc(sizeof(struct node));
third->data = 40;

fourth=(struct node*)malloc(sizeof(struct node));
fourth->data = 60;

ptr=(struct node*)malloc(sizeof(struct node));


first->link = second;

second -> link = third;

third -> link = fourth;

fourth -> link = NULL ;

ptr = first;

while(ptr != NULL)
{
printf("%d\n",ptr->data);
ptr = ptr->link;
}
}
