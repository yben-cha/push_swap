#include"data_stack.h"
#include<stdio.h>
#include<stdlib.h>
int len(char *s)
{
	int i=0;
	while(s[i])
		i++;
	return i;
}
int* ftatoi(char *s)
{
	int *result;
	int i=0;
	int sing=1;
	result=malloc(sizeof(int));
	*result =0;
	if(s[i] =='-')
	{
		sing=-1;
		i++;
	}
	while(i<len(s))
	{
		if(s[i] <= '9' && s[i] >='0')
			*result= (*result)*10 + (s[i]-'0');
		else
			return NULL;
		i++;
	}
	*result=sing * *(result);
	return result;
}
int	verfier_eror(char **s,int l)
{
	int i;
	i=1;
	while (i< l)
	{
		if(!ftatoi(s[i]))
				return 1;
		i++;
	}
	return 0;
}
t_stack * affect_valeus(char **s,int l)
{
	t_stack *a;
	a=create_stack(l);
	int i=l-1;
	while(i >= 1)
	{
		push_to_stack(a,*(ftatoi(s[i])));
		i--;
	}
	return a;
}
	
