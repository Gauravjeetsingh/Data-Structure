#include<stdio.h>
#include<stdlib.h>

main()
{

struct node
{
int data;
struct node *link;
};

struct node *first, *second, *third, *ptr;

first=(struct node*)malloc(sizeof(struct node));
first->data = 10;

second=(struct node*)malloc(sizeof(struct node));
second->data = 30;

third=(struct node*)malloc(sizeof(struct node));
third->data = 40;

ptr=(struct node*)malloc(sizeof(struct node));


first->link = second;

second -> link = third;

third -> link = NULL;
ptr = first;
//printf("%d \n %d \n %d",first->data,second->data, third->data);
while(ptr->link != NULL)
{
printf("%d\n",ptr->data);
ptr = ptr->link;
}
printf("%d\n",ptr->data);

}
