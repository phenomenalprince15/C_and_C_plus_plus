#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//struct node *head;
unsigned int len = 0;

void print_linked_list(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ---> ", ptr->data);
        ptr = ptr->next;
        //len++;
    }
    printf("NULL\n");
    printf("Length of linked list : %d\n", len);
}

void insert_at_beginning(struct node **head, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
    len++;
}

void insert_at_end(struct node **head_ref, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        len++;
        return;
    }

    struct node *ptr;
    ptr = *head_ref;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    len++;
    return;
}

void insert_at_index(struct node **head_ref, int idx, int data)
{
    if (idx < 0)
    {
        printf("Insertion not possible !!!\n");
        return;
    }
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    if (*head_ref == NULL || idx == 0)
    {
        insert_at_beginning(head_ref, data);
        return;
    }
    if (idx == len)
    {
        insert_at_end(head_ref, data);
        return;
    }
    struct node *ptr = *head_ref;
    while (ptr->next != NULL && idx > 0)
    {
        if (idx == 1)
        {
            new_node->next = ptr->next;
            ptr->next = new_node;
            len++;
        }
        ptr = ptr->next;
        idx--;
    }
}

void delete_at_index(struct node **head_ref, int idx)
{
    if (idx < 0 || idx >= len)
    {
        printf("can't delete !!!\n");
    }
    if (idx == 0)
    {
        *head_ref = (*head_ref)->next;
        len--;
        return;
    }

    int i = 0;
    struct node *ptr = *head_ref;
    ptr = ptr->next;
    i++;
    while (ptr->next != NULL)
    {
        if (i == idx - 1)
        {
            ptr->next = ptr->next->next;
            len--;
            return;
        }
        ptr = ptr->next;
        i++;
    }
}

void search(struct node **head_ref, int data)
{
    int idx = 0;
    struct node *ptr = *head_ref;
    while (ptr != NULL || ptr->next != NULL)
    {
        if (ptr->data == data)
        {
            printf("Found at index :: %d\n", idx);
            return;
        }
        ptr = ptr->next;
        idx++;
    }
    printf("Not found !!!\n");
    return;
}

void sort_list(struct node** head_ref)
{
    struct node* temp = *head_ref;
    struct node* ptr = NULL;
    int swap;

    while(temp != NULL){
        ptr = temp->next;
        while(ptr != NULL){
            if (temp->data > ptr->data){
                swap = temp->data;
                temp->data = ptr->data;
                ptr->data = swap;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }

}

int main()
{
    struct node *head = NULL;
    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    print_linked_list(head);
    insert_at_end(&head, 40);
    insert_at_end(&head, 50);
    insert_at_index(&head, 3, 60);
    insert_at_index(&head, 1, 70);
    insert_at_index(&head, 6, 80);
    insert_at_index(&head, 8, 90);
    print_linked_list(head);
    delete_at_index(&head, 0);
    delete_at_index(&head, 3);
    print_linked_list(head);
    delete_at_index(&head, 4);
    delete_at_index(&head, 5);
    print_linked_list(head);

    printf("-----Search-----\n");
    search(&head, 40);
    search(&head,70);
    search(&head,50);

    printf("-----List-----\n");
    print_linked_list(head);

    sort_list(&head);
    print_linked_list(head);

}