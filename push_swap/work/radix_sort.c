#include"data_stack.h"
#include<stdio.h>
void insert_in_b(t_stack *a,t_stack *b,t_stack * norm_a,t_stack *norm_b,int i)
{
	if(b->size==0)
	{
		switch_stack(norm_b,norm_a);
                printf("pa\n");
                switch_stack(b,a);
	}
	else if(bit_at_postion(norm_a->tab[norm_a->size -1],i)==2 && bit_at_postion(norm_b->tab[norm_b->size -1],i)==1)
	{
		switch_stack(norm_b,norm_a);
		printf("pa\n");
		shift_top(norm_b);
		switch_stack(b,a);
                shift_top(b);
		printf("rb\n");
	}
	else if(bit_at_postion(norm_a->tab[norm_a->size -1],i)==2 && bit_at_postion(norm_b->tab[norm_b->size -1],i)==2)
        {
                switch_stack(norm_b,norm_a);
                printf("pa\n");
                switch_stack(b,a);
        }
	else if(bit_at_postion(norm_a->tab[norm_a->size -1],i)==1)
	{
                switch_stack(norm_b,norm_a);
                printf("pa\n");
                switch_stack(b,a);
        }

}


void radix_sort(t_stack *a)
{
        t_stack *b;
        t_stack *copy;
        t_stack *norm_a;
        t_stack *norm_b;
        b=create_stack(a->size);
        copy=copy_stack(a);
        bubble_sort(copy);
        norm_a=normlize_stack(a,copy);
        norm_b=create_stack(a->size);
        int max=max_n(norm_a);
        max=number_of_bits(max);
        int i=0;
        while(i<max)
        {
		int j= norm_a->size-1;
                while(j>=0)
                {
                        if(bit_at_postion(norm_a->tab[norm_a->size -1],i))
			{
				  switch_stack(norm_b,norm_a);
             			  printf("pa\n");
               			  switch_stack(b,a);
			}
                        else
                        {
                               	 shift_top(norm_a);
                               	 shift_top(a);
                               	 printf("ra\n");
                        }
                        j--;
                }
                j= norm_b->size-1;
                if(i==max-1)
                {
                        while(j>=0)
                        {
				if(bit_at_postion(norm_b->tab[norm_b->size -1],i+1)==2)
				{
                                	switch_stack(norm_a,norm_b);
                              	 	switch_stack(a,b);
                               		printf("pb \n");
				}
				else
				{
					shift_top(norm_a);
					shift_top(a);
					printf("ra\n");
				}
                                j--;
                        }
			j= norm_b->size-1;
			while(j>=0)
                        {
                                        switch_stack(norm_a,norm_b);
                                        switch_stack(a,b);
                                        printf("pb \n");
					j--;
			}

                }
                else
               {
                while(j>=0)
                {
                        if(bit_at_postion(norm_b->tab[norm_b->size -1],i+1))
                        {
                                shift_top(norm_b);
                                shift_top(b);
                                printf("rb\n");
                        }
                        else 
                        {
                                switch_stack(norm_a,norm_b);
                                switch_stack(a,b);
                                printf("pb \n");
                        }

                   	j--;
                }

                }

                i++;
        }
}
