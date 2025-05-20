#include"data_stack.h"
#include<stdio.h>
void sort_tow(t_stack *a)
{
	if(a->tab[0] > a->tab[1])
	{
		swap_first(a);
		printf("swap \n");
	}
}
void sort_three(t_stack *a)
{
        t_stack *copy;
        t_stack *norm_a;
        copy=copy_stack(a);
        bubble_sort(copy);
        norm_a=normlize_stack(a,copy);
	if(norm_a->tab[1]==2 && norm_a->tab[2]==1)
	{
		swap_first(a);
                printf("swap \n");
	}
	else if(norm_a->tab[1]==0 && norm_a->tab[0]==1)
	{
		swap_first(a);
		printf("swap \n");
		shift_top(a);
		printf("rot \n");
	}
	else if(norm_a->tab[1]==0 && norm_a->tab[0]==2)
        {
                shift_down(a);
                printf("rot \n");
        }
	if(norm_a->tab[2]==0 && norm_a->tab[0]==1)
        {
                shift_top(a);
                printf("rot \n");
        }
	if(norm_a->tab[2]==0 && norm_a->tab[0]==2)
        {
                shift_top(a);
                printf("rot \n");
		swap_first(a);
                printf("swap \n");

        }
}
void sort_four(t_stack *a)
{
	int l;
	l=max_n(a);
	int i =0;
	t_stack *b;
	b=create_stack(a->size);
	while(i < a->size)
	{
		if(a->tab[(a->size -1)]==l)
		{
			switch_stack(b,a);
			printf("switch \n");
			break;
		}
		else
		{
			shift_top(a);
			printf("rot \n");
		}
		i++;
	}
	display_stack(a);
	sort_three(a);
	switch_stack(a,b);
	printf("switch \n");
}
void  sort_five(t_stack *a)
{
	t_stack *copy;
        t_stack *norm_a;
	t_stack *b;
	b=create_stack(5);
        copy=copy_stack(a);
        bubble_sort(copy);
        norm_a=normlize_stack(a,copy);
	int i=a->size -1;
	while(i >=0)
	{
		if(norm_a->tab[4]==4 || (norm_a->tab[4]==3))
		{
			switch_stack(b,a);
			shift_top(norm_a);
			printf("switch\n");
		}
		else
		{
			shift_top(a);
			shift_top(norm_a);
			printf("shift \n");
		}
		i--;
	}
	sort_three(a);
	if(b->tab[1] > b->tab[0])
	{
		swap_first(b);
		printf("swap\n");
	}
	switch_stack(a,b);
	printf("switch1\n");
	switch_stack(a,b);
        printf("switch2\n");
}

