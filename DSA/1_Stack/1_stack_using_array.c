/*
- A stack is a linear data structure that follows the principle of Last In First Out (LIFO).
- This means the last element inserted inside the stack is removed first.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int count = 0;

struct stack{
    int top;
    int items[MAX];
};

void create_stack(struct stack* s)
{
    s->top = -1;
}

int is_stack_full(struct stack* s)
{
    if (s->top == MAX-1)
        return 1;
    return 0;
}

int is_stack_empty(struct stack* s)
{
    if(s->top == -1)
        return 1;
    return 0;
}

void push(struct stack* s, int data)
{
    if (is_stack_full(s)){
        printf("Stack FUll\n");
    }
    else{
        s->top++;
        s->items[s->top] = data;
        count++;
    }
}

void pop(struct stack* s)
{
    if (is_stack_empty(s)){
        printf("Stack Empty\n");
    }
    else{
        printf("Popped item = %d\n",s->items[s->top]);
        s->top--;
        count--;
    }
}

void print_stack(struct stack* s)
{
    printf("-----Stack-----\n");
    if (is_stack_empty(s))
        printf("No items in stack.");
    for (int i=0;i<count;i++)
    {
        printf("items[%d] = %d\t",i,s->items[i]);
    }
    printf("\n");
}

int main()
{
    struct stack* s = malloc(sizeof(struct stack));

    //push(s,10);
    create_stack(s);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    print_stack(s);
    push(s, 40);
    push(s, 50);
    print_stack(s);
    push(s,60);
    print_stack(s);

    pop(s);
    pop(s);
    print_stack(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    print_stack(s);
    
    return 0;
}

/*
* Applications of Stack Data Structure
Although stack is a simple data structure to implement, it is very powerful.
The most common uses of a stack are:
- To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
- In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
- In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.
*/