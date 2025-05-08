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
int sort_stack(t_stack *a);
int choice_median(t_stack *a);
int bubble_sort_desc(t_stack *a);
int bubble_sort_asc(t_stack *a);
t_stack *divide_stack(t_stack *a);
void merge_stacks(t_stack *a,t_stack *b);
int len(char *s);
int *ftatoi(char *s);
int verfier_eror(char **s,int l);
t_stack *affect_valeus(char **s,int l);
#endif
