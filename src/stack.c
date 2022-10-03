#include<stdio.h>
#include "stack.h"

stack_t *stack_p = NULL;

void display(stack_t *stack_temp)
{
        int idx;
        printf("Stack:\n");
        for(idx = stack_temp->top; idx>-1; idx--)
        {
                printf("%d\n",stack_temp->stackArr[idx]);
        }
}

void push(stack_t *stack_temp)
{
	if(isStackFull(stack_temp))
		printf("stack overflow");
	else
	{
		printf("Enter a value: ");
		stack_temp->top++;
		scanf("%d",&stack_temp->stackArr[stack_temp->top]);
		printf("%d is pushed into the stack\n",stack_temp->stackArr[stack_temp->top]);
	}
	return;
}

int isStackFull(stack_t *stack_temp)
{
	int x = 0;
	if(stack_temp->top == stack_temp->size-1)
		x = 1;
	else 
		x = 0;
       return x;	
}

int isStackEmpty(stack_t *stack_temp)
{
	int x = 0;
	if(stack_temp->top == -1)
		x = 1;
	else 
		x = 0;
	return x;
}

int peek(stack_t *stack_temp, int idx)
{
	int val = -1;
	val = stack_temp->stackArr[stack_temp->top - idx + 1];
	return val;
}

int pop(stack_t *stack_temp)
{
	int val = -1;
	if(stack_temp->top == -1)
		printf("stack underflow\n");
	else
	{
		val = stack_temp->stackArr[stack_temp->top];
		stack_temp->stackArr[stack_temp->top] = 0;
		stack_temp->top--;
	}
	return val;
}

int stackTop(stack_t *stack_temp)
{
	int val = -1;
	if(isStackEmpty(stack_p))
	{}
	else
	{
		val = stack_temp->stackArr[stack_temp->top];
	}
	return val;
}
