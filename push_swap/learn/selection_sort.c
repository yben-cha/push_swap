#include"datastack.h"
#include<stdio.h>
void selection_sort(Stack *list)
{
	if(!list)
		return;
	int min;
	int pos;
	int i;
	int j;
	i=0;
	while(i< (list->size) -1)
	{
		j=i;
		min=list->collection[j];
		while(j < list->size)
		{
			if(min > list->collection[j])
			{
				pos=j;
				min=list->collection[j];
			}
			j++;
		}
		list->collection[pos]=list->collection[i];
		list->collection[i]=min;
		i++;
	}
}

