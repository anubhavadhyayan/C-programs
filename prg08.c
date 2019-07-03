#include <stdio.h>
#include <curses.h>
#define MAX 5
struct stack
{
	int arr[MAX];
	int top;
};
  void initstack(struct stack*);
  void push (struct stack*,int item);
       int pop(struct stack*);
  void main()
{
  struct stack s ;
	   int i;
	   initstack(&s);
	push(&s,11);
	  push(&s,23);
	push(&s,-8);
	  push(&s,16);
	push(&s,27);
	  push(&s,7);
	   i=pop(&s);
   printf("\n item popped :%d",i);
	   i=pop(&s);

  getchar();

}

  void initstack(struct stack*s)

{
   s->top=-1;
}
  void push(struct stack*s,int item)
{
	  if(s->top==MAX-1	)
	  {
	  printf("\n stack is full");
	  return;

	  }
	    s->top++;
	    s->arr[s->top]=item;

}
    int pop(struct stack*s)
{
	int data;
	if(s->top==-1)
	{
	printf("\n stack is empty");
	}
  data=s->arr[s->top];
  s->top--;
  return data;
}
m