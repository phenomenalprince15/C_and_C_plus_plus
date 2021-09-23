#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//struct node *head;
unsigned int len = 0;

void print_stack(struct node **head)
{
    if (*head == NULL){
        printf("Empty Stack.\n");
        return;
    }
    struct node *ptr = *head;
    while (ptr->next != NULL)
    {
        printf("%d ---> ", ptr->data);
        ptr = ptr->next;
        //len++;
    }
    printf("%d ---> NULL\n",ptr->data);
    printf("Stack size : %d\n", len);
}

void push(struct node **head, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
    len++;
}

void pop(struct node **head_ref)
{
    if (*head_ref == NULL){
        printf("Empty Stack.\n");
        return;
    }
    struct node *ptr = *head_ref;
    *head_ref = (*head_ref)->next;
    free(ptr);
    len--;
}

int main()
{
    struct node *head = NULL;
    print_stack(&head);
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    print_stack(&head);
    pop(&head);
    print_stack(&head);
    pop(&head);
    print_stack(&head);
    pop(&head);
    print_stack(&head);

}