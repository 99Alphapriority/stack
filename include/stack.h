typedef struct stack
{
	int top;
	int size;
	int *stackArr;
}stack_t;

//stack_t *stack_p;

void push();
void display();
int isStackFull();
int isStackEmpty();
int peek();
int pop();
int stackTop();
