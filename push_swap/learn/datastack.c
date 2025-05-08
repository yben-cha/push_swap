#include"datastack.h"
#include<stdio.h>
#include<stdlib.h>
Stack *creat_stack(int capacity)
{
	Stack *s;
	s= malloc(sizeof(Stack));
	if(!s)
		return NULL;
	s->collection=malloc(capacity*sizeof(int));
	if(!(s->collection))
	{
		free(s);
		return NULL;
	}
	s->capacity=capacity;
	s->size=0;
	return s;
}
void destroy_stack(Stack *s)
{
	if(s)
	{
		free( s->collection);
		free(s);
	}
}
int	is_full(Stack *s)
{
	return (s->size == s->capacity);
}
int     is_empty(Stack *s)
{
        return (s->size == 0);
}
int pop(Stack *s)
{
	if(!is_empty(s))
		(s->size)--;
	return (!is_empty(s));
}
int push(Stack *s,int l)
{
        if(!is_full(s))
	{
		s->collection[s->size]=l;
                (s->size)++;
	}
        return (!is_full(s));
}
void prints(Stack *s)
{
	int i=0;
	while(i<s->size)
	{
		printf("%d    ",s->collection[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	Stack *s;
	s=creat_stack(7);
	push(s,10);
	push(s,28);
	push(s,3);
	push(s,500);
	push(s,-19);
	push(s,12);
	push(s,0);
	prints(s);
	printf("---------------\n");
	merge_sort_stack(s);
	prints(s);
	destroy_stack(s);
}
