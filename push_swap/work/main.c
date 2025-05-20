#include"data_stack.h"
#include<stdio.h>
int main(int l, char *s1[])
{
	if(verfier_eror(s1,l))
	{
		printf("eror\n");
		return 0;
	}
	t_stack *s;
	s=affect_valeus(s1,l);
	if(s->size ==2)
		sort_tow(s);
	else if(s->size==3)
		sort_three(s);
	else if(s->size ==4)
		sort_four(s);
	else if(s->size==5)
		sort_five(s);
	else 
		radix_sort(s);
	display_stack(s);
	return 0;

}
