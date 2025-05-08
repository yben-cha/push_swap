#include"data_stack.h"
#include<stdio.h>
int choice_median(t_stack *s)
{
	int i;
	int j;
	int inf ,sup;
	i=0;
	while(i< s->size)
	{
		j=0;
		inf=0;
		sup=0;
		while(j < s->size)
		{
			if(s->tab[i] < s->tab[j] && i != j)
				sup++;
			else if ( s->tab[i] > s->tab[j] && i !=j)
				inf ++;
			j++;
		}
		if((s->size %2) && sup==inf)
			return s->tab[i];
		else if (!(s->size %2) &&((sup==inf-1) || (sup -1==inf)))
			return s->tab[i];
		i++;
	}
}
t_stack * divide_stack(t_stack *a)
{
	t_stack *b;
	b=create_stack(a->size);
	int med = choice_median(a);
	int i=a->size -1;
	while(i >=0)
	{
		if(a->tab[a->size -1]<=med)
		{
			printf("pa \n");
			switch_stack(b,a);
		}
		else
			shift_top(a);
		i--;
	}
	return b;
}
void	merge_stacks(t_stack *a , t_stack *b)
{
	int i=b->size -1;
	while (i >=0)
	{
		printf("pb \n");
		switch_stack(a,b);
		i--;
	}
}
int bubble_sort_asc(t_stack *a)
{
        int     looping=1;
        int     i;
        while(looping)
        {
                i=0;
                looping=0;
                while(i < a->size -1 )

                {
                        if(a->tab[a->size -1] > a->tab[a->size-2])
                        {
                                looping =1;
                                swap_first(a);
                                printf("sa \n");
                        }
                        shift_top(a);
                        printf("ra \n");
                        i++;
                }
		shift_top(a);
		printf("ra \n");
        }
}
int bubble_sort_desc(t_stack *a)
{
        int     looping=1;
        int     i;
        while(looping)
        {
                i=0;
                looping=0;
                while(i < a->size -1 )

                {
                        if(a->tab[a->size -1] < a->tab[a->size-2])
                        {
                                looping =1;
                                swap_first(a);
                                printf("sa \n");
                        }
                        shift_top(a);
                        printf("ra \n");
                        i++;
                }
                shift_top(a);
                printf("ra \n");
        }
}
int sort_stack(t_stack *a)
{
	t_stack *b;
	b= divide_stack(a);
	bubble_sort_desc(b);
	bubble_sort_asc(a);
	merge_stacks(a,b);
}
