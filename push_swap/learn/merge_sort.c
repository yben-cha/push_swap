#include"datastack.h"
#include<stdio.h>
void switch_values(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void merge_sort(Stack *list, int from ,int to)
{
	if(!list)
		return;
	if( from < to)
	{
		int m=(from + to)/2;
		merge_sort(list,from,m);
		merge_sort(list,m+1,to);
		merge(list,from,m,to);
	}

}
void merge(Stack *list, int from ,int m,int to)
{
	int i,j,k;
	int l1,l2;
	Stack *t1;
	Stack *t2;
	l1=m-from +1;
	l2=to-m;
	t1=creat_stack(l1);
	t2=creat_stack(l2);
	i=0;
	while(i <l1)
	{
		t1->collection[i]=list->collection[i +from];
		i++;
	}
	 i=0;
        while(i <l2)
        {
                t2->collection[i]=list->collection[i+m+1];
                i++;
        }
	i=0;
	j=0;
	k=from;
	while(i<l1 && j<l2)
	{
		if(t1->collection[i] > t2->collection[j])
		{
			list->collection[k]=t2->collection[j];
			j++;
		}
		else if(t1->collection[i] < t2->collection[j])
                {
                        list->collection[k]=t1->collection[i];
                        i++;
                }
		k++;
	}
	while(j < l2)
	{
		list->collection[k]=t2->collection[j];
                j++;
		k++;
	}
	while(i < l1)
        {
                list->collection[k]=t1->collection[i];
                i++;
                k++;
        }
	destroy_stack(t1);
	destroy_stack(t2);
}
void merge_sort_stack(Stack *list)
{
	merge_sort(list,0 ,list->size -1);
}


