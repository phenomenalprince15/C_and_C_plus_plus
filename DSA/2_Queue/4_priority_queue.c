#include <stdio.h>
#include <stdlib.h>

struct priority_queue{
    int data, id;
    struct priority_queue* next;
};

struct priority_queue* front = NULL;
struct priority_queue* rear = NULL;

void enqueue(struct priority_queue* q, int data, int pr_no)
{
    struct priority_queue* new_node = malloc(sizeof(struct priority_queue));
    new_node->data = data;
    new_node->id = pr_no;
    new_node->next = NULL;
    if (front == NULL || pr_no > front->id) // from lower or higher number (<, >)
    {
        new_node->next = front;
        front = new_node;
        return;
    }
    struct priority_queue* ptr = front;
    while(ptr->next != NULL && ptr->next->id <= pr_no)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void dequeue(struct priority_queue* q)
{
    if (front == NULL)
    {
        printf("Prioirity queue is empty.\n");
        return;
    }
    struct priority_queue* ptr = front;
    front = front->next;
    printf("Removed item = %d with priority = %d\n",ptr->data,ptr->id);
    free(ptr);
}

void print_priority_queue()
{
    if (front == NULL)
    {
        printf("Prioirity queue is empty.\n");
        return;
    }
    struct priority_queue* ptr = front;
    while(ptr != NULL)
    {
        printf("%d with id = %d--->",ptr->data,ptr->id);
        ptr = ptr->next;
    }
    //printf("%d with id = %d\n",ptr->data, ptr->id);
    printf("\n");
    return;
}

int main()
{
    struct priority_queue* q = NULL;
    enqueue(q,10,4);
    print_priority_queue(q);
    enqueue(q,20,10);
    print_priority_queue(q);
    enqueue(q,30,8);
    print_priority_queue(q);
    enqueue(q,10,7);
    print_priority_queue(q);
    dequeue(q);
    print_priority_queue(q);
}