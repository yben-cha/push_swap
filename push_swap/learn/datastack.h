#ifndef DATASTACK_H
#define DATASTACK_H

typedef struct 
{
	int *collection ;
	int capacity ;
	int size ;
} Stack;
void selection_sort(Stack *list);
void bubble_sort(Stack *list);
void insertion_sort(Stack *list);
void quick_sort_stack(Stack *list);
void merge_sort_stack(Stack *list);
Stack *creat_stack(int capacity);
void destroy_stack(Stack * s);
void merge(Stack *list, int from ,int m,int to);
#endif
