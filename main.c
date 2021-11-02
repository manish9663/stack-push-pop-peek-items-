#include<stdio.h>
#include<conio.h>
#define MAXSTK 10
typedef struct mystack
{
    int data[MAXSTK];
    int top;
}stack;
void push (stack *s, int item)
{
    if (s->top==MAXSTK-1)
        printf("overflow");
    s->top++;
    s->data[s->top] = item;
    return;
}
int pop (stack *s)
{
    int item;
    if (s->top==-1)
        printf("underflow");
    item = s->data[s->top];
    s->top--;
    return item;
}
int peep (stack *s)
{
    int item;
    if (s->top==-1)
        printf("underflow");
    item = s->data[s->top];
    return item;
}

int main()
{
    stack s1;
    int n , item;
    s1.top= -1;
    push(&s1,10);
    push(&s1,20);
    push(&s1,30);
    push(&s1,40);
    item = pop(&s1);
    if ( item!= 0)
        printf("%d deleted \n",item);
    item = pop(&s1);
    if ( item!= 0)
        printf("%d deleted \n",item);
    item = pop(&s1);
    if ( item!= 0)
        printf("%d deleted \n",item);
    item = pop(&s1);
    if ( item!= 0)
        printf("%d deleted \n",item);
    return 0 ;

}
