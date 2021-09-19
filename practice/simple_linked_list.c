#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_linked_list(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ---> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    print_linked_list(head);

}