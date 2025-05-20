#include"data_stack.h"
#include<stdio.h>
t_stack *copy_stack(t_stack *a)
{
	if(!a)
		return NULL;
	t_stack *copy;
	copy=create_stack(a->size);
	if(!copy)
		return NULL;
	int i=0;
	while(i <=a->size)
	{
		push_to_stack(copy,a->tab[i]);
		i++;
	}
	return copy;
}
/*void bubble_sort(t_stack *a)
{
        int     looping=1;
        int     i;
        while(looping)
        {
                i=0;
                looping=0;
                while(i < a->size )

                {
                        if(a->tab[a->size -1] < a->tab[a->size-2])
                        {
                                looping =1;
                                swap_first(a);
                        }
			else
                        	shift_top(a);
                        i++;
                }
        }
}*/
void bubble_sort(t_stack *a)
{
        int looping;
        int min;
        int i;
        looping=1;
        while(looping)
        {
                i=a->size -1;
                looping=0;
                while(i>0)
                {
                        if(a->tab[i] < a->tab[i-1])
                        {
                                min=a->tab[i-1];
                                a->tab[i-1]=a->tab[i];
                                a->tab[i]=min;
                                looping=1;

                        }
                        i--;
                }
        }
}
t_stack * normlize_stack(t_stack *a,t_stack * sorted)
{
	t_stack * normilze;
	normilze=create_stack(a->size);
	int i=0;
	while(i< a->size)
	{
		int j=a->size -1;
		while(j>=0)
		{
			if(a->tab[i]==sorted->tab[j])
			{
				push_to_stack(normilze,j);
				break;
			}
			j--;	
		}
		i++;
	}
	return normilze;
}
