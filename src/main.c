#include<stdio.h>
#include "stack.h"
#include "test.h"

extern stack_t *stack_p;

int main()
{
	int size = 5;
	stack_p = (stack_t*)malloc(sizeof(stack_t));
	printf("creating a stack to operate on...\n");
	printf("Size of stack: %d\n",size);
	stack_p->top = -1;
	stack_p->stackArr = (int *)malloc(stack_p->size * sizeof(int));
	stack_p->stackArr[++stack_p->top] = 0;
	stack_p->stackArr[++stack_p->top] = 1;
	stack_p->stackArr[++stack_p->top] = 9;
	run_test();
	return 0;
}
