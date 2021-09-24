#include <stdio.h>
#include <stdlib.h>

#define MAX  5

struct queue{
    int front, rear;
    int items[MAX];
};

void create_queue(struct queue* q)
{
    q->front = -1;
    q->rear = -1;
}

int is_queue_empty(struct queue* q)
{
    if (q->front == -1)
        return 1;
    return 0;
}

int is_queue_full(struct queue* q)
{
    if (q->rear == MAX)
        return 1;
    return 0;
}

void enqueue(struct queue* q, int data)
{
    if (is_queue_full(q)){
        printf("Queue is full.\n");
        return;
    }
    if(q->front == -1)
        q->front = 0;
    (q->rear)++;
    q->items[q->rear] = data;
}

void dequeue(struct queue* q)
{
    if (is_queue_empty(q)){
        printf("Queue is empty.\n");
    }
    (q->front)++;
    if(q->front > q->rear){
        q->front = -1;
        q->rear = -1;
    }
}

void print_queue(struct queue* q)
{
    if (q->rear == -1){
        printf("Queue is empty.\n");
        return;
    }
    if (is_queue_full(q)){
        printf("Queue is full.\n");
        return;
    }
    for(int i=q->front; i<=q->rear;i++)
    {
        printf("items[%d] = %d\t",i,q->items[i]);
    }
    printf("\n");
    return;
}

int main()
{
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    create_queue(q);
    enqueue(q,10);
    print_queue(q);
    enqueue(q,20);
    print_queue(q);
    enqueue(q,30);
    print_queue(q);
    enqueue(q,40);
    print_queue(q);
    enqueue(q,50);
    print_queue(q);
    enqueue(q,60);
    print_queue(q);

    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
    dequeue(q);
    print_queue(q);
}