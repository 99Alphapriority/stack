#include<stdio.h>
#include "stack.h"
#include "test.h"

extern stack_t *stack_p;

int main()
{
	stack_p = (stack_t*)malloc(sizeof(stack_t));
	printf("creating a stack to operate on...\nEnter size of stack: ");
	scanf("%d", &stack_p->size);
	stack_p->top = -1;
	stack_p->stackArr = (int *)malloc(stack_p->size * sizeof(int));
	run_test();
	return 0;
}
