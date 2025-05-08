#include"datastack.h"
#include<stdio.h>
void insertion_sort(Stack *list)
{
	if(!list)
		return;
	int pos;
	int condtion_shift;
	int ref;
	int i;
	int j;
	i=1;
	while(i<= (list->size) -1)
	{
		j=0;
		ref=list->collection[i];
		condtion_shift=0;
		while(j < i)
		{
			if(condtion_shift)
                        {
                                list->collection[i-(j-pos)]=list->collection[i-(j-pos)-1];
                        }
                        else if(ref<list->collection[j])
                        {
                                condtion_shift=1;
				list->collection[i]=list->collection[i-1];
                                pos=j;
                        }

			j++;
		}
		if(condtion_shift)
			list->collection[pos]=ref;
		i++;
	}
}
/*void insertion_sort(Stack *list)
{
    if (!list || list->size <= 1)
        return;

    for (int i = 1; i < list->size; i++) {
        int key = list->collection[i];
        int j = i - 1;

        // Shift elements of collection[0..i-1] that are greater than key
        while (j >= 0 && list->collection[j] > key) {
            list->collection[j + 1] = list->collection[j];
            j--;
        }

        list->collection[j + 1] = key;
    }
}*/
