#ifndef DATA_STACK_H
#define DATA_STACK_H
typedef struct s_stack
{
	int *tab;
	int cap;
	int size;
} t_stack;
t_stack * create_stack(int capacity);
void destroy_stack(t_stack * stack);
int push_to_stack(t_stack * stack,int item);
int pop_from_stack(t_stack * stack);
void display_stack(t_stack * stack);
int swap_first(t_stack *s);
int switch_stack(t_stack *rec ,t_stack *sen);
int shift_top(t_stack *s);
int shift_down(t_stack *s);
void sort_stack(t_stack *a);
void bubble_sort(t_stack *a);
t_stack *copy_stack(t_stack *a);
int len(char *s);
t_stack * normlize_stack(t_stack *a,t_stack * sorted);
int *ftatoi(char *s);
int verfier_eror(char **s,int l);
t_stack *affect_valeus(char **s,int l);
int max_n(t_stack *a);
int number_of_bits(int max);
int bit_at_postion(int number,int postion);
void radix_sort(t_stack *a);
void sort_tow(t_stack *a);
void sort_three(t_stack *a);
void sort_four(t_stack *a);
void  sort_five(t_stack *a);
#endif
