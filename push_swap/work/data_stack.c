#include"data_stack.h"
#include<stdlib.h>
#include<stdio.h>
t_stack * create_stack(int cap)
{
	if(cap <= 0)
		return NULL;
	t_stack *stack;
	stack=malloc(sizeof(t_stack));
	if(!stack)
		return NULL;
	stack->tab=malloc(cap*sizeof(int));
	if(!(stack->tab))
	{
		free(stack);
		return NULL;
	}
	stack->cap=cap;
	stack->size=0;
	return stack;
}
void destroy_stack(t_stack *stack)
{
	if(stack)
	{
		free(stack->tab);
		free(stack);
	}
}
int push_to_stack(t_stack *stack , int item)
{
	if(!stack)
		return 0;
	if(stack->size != stack->cap)
	{
		stack->tab[stack->size]=item;
		(stack->size)++;
		return 1;
	}
	return 0;
}
int pop_from_stack(t_stack *stack)
{
	if(!stack)
		return 0;
        if(stack->size != 0)
        {
                (stack->size)--;
                return 1;
        }
        return 0;
}
void display_stack(t_stack *stack)
{
	if(!stack)
		return;
	int i=0;
	while(i< stack->size)
	{
		printf("%d  ", stack->tab[i] );
		i++;
	}
	printf("\n");
}
