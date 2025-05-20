#include"data_stack.h"
#include<stdio.h>
int max_n(t_stack *a)
{
	if(a->size==0)
		return 0;
	int i=0;
	int max;
	max=a->tab[0];
	while(i< a->size)
	{
		if(max<a->tab[i])
			max=a->tab[i];
		i++;
	}
	return max;
}
int number_of_bits(int max)
{
	int number=1;
	while(max>1)
	{
		number++;
		max=max/3;
	}
	return number;
}
int bit_at_postion(int number,int postion)
{
	int i=0;
	while(i<postion)
	{
		number=number/3;
		i++;
	}
	return number%3;
}	
