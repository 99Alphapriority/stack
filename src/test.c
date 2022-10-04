#include<stdio.h>
#include "test.h"
#include "stack.h"

extern stack_t *stack_p;

extern int isStackFull();
extern void display();

void run_test()
{
//	test_fill_stack();
	printf("Operations will be performed on the following stack:\n");
	display(stack_p);
	test_push();
	printf("stack after test_push()\n");
	display(stack_p);
	test_peek();
	test_pop();
	printf("stack after test_pop()\n");
	display(stack_p);
	test_empty();
	test_full();
	test_top();
}

void test_fill_stack()
{
	int i = 0;
	char resp = NULL;
		push(stack_p);
	do{
		printf("Do you want to enter more values?[y/n] ");
		//scanf("%c",&resp);
		resp = getchar();
		switch(resp)
		{
			case 'y':
				{
					if(isStackFull(stack_p))
					{
						printf("Stack Overlow\n");
						i = 0;
					}
					else
					{
						push(stack_p);
						i = 1;
					}
					break;
				}
			case 'n':
				{
					i = 0;
					break;
				}
			default:
				{
					printf("Wrong option\n");
					break;
				}
		}
	}while(i);
}

void test_push()
{
	printf("\ntest_push() started\n");
	push(stack_p);
	printf("test_push() finished\n");
}

void test_peek()
{
	int idx = 0, val = 0;
	printf("\ntest_peek() started\n");
	printf("Enter index to peek: ");
	scanf("%d",&idx);
	if(idx > stack_p->top+1)
	{
		printf("index greater than top\n");
		return;
	}
	val = peek(stack_p, idx);
	if(val == -1)
		printf("stack is empty");
	else
		printf("value at index %d is %d\n",idx, val);
	printf("test_peek() finished\n");
}

void test_pop()
{
	int val = 0;
	printf("\ntest_pop() started\n");
	val = pop(stack_p);
	if(val == -1)
		printf("stack is empty\n");
	else 
		printf("value %d is popped from the stack\n",val);
	printf("test_pop() finished\n");
}

void test_empty()
{
	printf("\ntest_empty() started\n");
	if(isStackEmpty(stack_p))
	       printf("stack is Empty\n");
	else
	       printf("stack is not Empty\n");
	printf("test_empty() finished\n");
}

void test_full()
{
	printf("\ntest_full() started\n");
	if(isStackFull(stack_p))
		printf("stack is full\n");
	else
		printf("stack is not full\n");
	printf("test_full() finished\n");
}

void test_top()
{
	int val;
	printf("\ntest_top() started\n");
	val = stackTop(stack_p);
	if(val == -1)
		printf("stack is empty\n");
	else
		printf("%d is at the top of the stack\n",val);
	printf("test_top() finished\n");
}
	

