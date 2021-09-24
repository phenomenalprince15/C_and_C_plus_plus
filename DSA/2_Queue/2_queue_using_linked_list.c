#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue* next;
};

struct queue* front = NULL;
struct queue* rear = NULL;

void enqueue(struct queue* q, int data)
{
    struct queue* new_node = malloc(sizeof(struct queue));
    new_node->data = data;
    new_node->next = NULL;
    if(rear == NULL)
    {
        front = rear = new_node;
    }
    rear->next = new_node;
    rear = new_node;
}

void dequeue(struct queue* q)
{
    if(front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    struct queue* ptr = front;
    front = front->next;
    printf("Removed data from front in queue :: %d\n",ptr->data);
    free(ptr);
}

void print_queue(struct queue* q)
{
    if(front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    struct queue* ptr = front;
    while(ptr != rear)
    {
        printf("%d--->",ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n",rear->data);
    return;
}

int main()
{
    struct queue* q = NULL;
    dequeue(q);
    print_queue(q);
    enqueue(q, 10);
    print_queue(q);
    enqueue(q, 20);
    print_queue(q);
    enqueue(q, 30);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
}