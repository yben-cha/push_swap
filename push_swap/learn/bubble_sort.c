#include"datastack.h"
#include<stdio.h>
void bubble_sort(Stack *list)
{
	if(!list)
		return;
	int looping;
	int min;
	int i;
	looping=1;
	while(looping)
	{
		i=0;
		looping=0;
		while(i < list->size -1)
		{
			if(list->collection[i] > list->collection[i+1])
			{
				min=list->collection[i+1];
			        list->collection[i+1]=list->collection[i];
               			list->collection[i]=min;
				looping=1;

			}
			i++;
		}
	}
}

