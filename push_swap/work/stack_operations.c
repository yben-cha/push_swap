#include"data_stack.h"
#include<stdio.h>
int swap_first(t_stack *s)
{
	if(s->size <2)
		return 0;
	int tmp;
	tmp =s->tab[s->size -2];
	s->tab[s->size -2]= s->tab[s->size-1];
	s->tab[s->size -1]=tmp;
	return 1;
}
int switch_stack(t_stack *rec ,t_stack *sen)
{
	if(sen->size ==0)
		return 0;
	(sen->size)--;
	return push_to_stack(rec,sen->tab[sen->size]);
}
int shift_top(t_stack *s)
{
	if(s->size <1)
		return 0;
	int shifter=s->tab[s->size - 1];
	int i= s->size -1;
	while(i -1 >=0)
	{
		s->tab[i]=s->tab[i-1];
		i--;
	}
	s->tab[0]=shifter;
	return 1;
}
int shift_down(t_stack *s)
{
        if(s->size <1)
                return 0;
        int shifter=s->tab[0];
        int i= 0;
        while(i +1 <= s->size -1)
        {
                s->tab[i]=s->tab[i+1];
                i++;
        }
        s->tab[s->size -1]=shifter;
        return 1;
}


