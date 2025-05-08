#include"datastack.h"
#include<stdio.h>
void switch_values(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int split_pivot(Stack *list,int from ,int to)
{
	int pivot=list->collection[to];
	int i = from-1;
	int j=from;
	while(j< to)
	{
		if(list->collection[j]<=pivot)
		{
			i++;
			switch_values((list->collection+j),(list->collection+i));
		}
		j++;
	}
	i++;
	switch_values((list->collection+j),(list->collection+i));
	return i;
}

void quick_sort(Stack *list, int from ,int to)
{
	if(!list)
		return;
	if( to <= from)
		return;
	int split = split_pivot(list,from ,to);
	quick_sort(list,from ,split -1);
	quick_sort(list,split +1 ,to);
}
void quick_sort_stack(Stack *list)
{
	quick_sort(list,0 ,list->size -1);
}


