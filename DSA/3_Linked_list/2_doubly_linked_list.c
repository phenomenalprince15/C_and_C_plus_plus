#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

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

void insert_at_beg(struct node** head_ref, int data)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head_ref;
    new_node->prev = NULL;
    if(*head_ref != NULL){
        (*head_ref)->prev = new_node;
    }
    *head_ref = new_node;
    len++;
}

void insert_at_end(struct node** head_ref, int data)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        len++;
        return;
    }
    struct node* ptr;
    ptr = *head_ref;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->prev = ptr;
    len++;
}

void insert_at_index(struct node** head_ref, int idx, int data)
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
        insert_at_beg(head_ref, data);
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
            new_node->prev = ptr;
            if(new_node->next != NULL){
                new_node->next->prev = new_node;
            }
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
        (*head_ref)->prev = NULL;
        len--;
        return;
    }

    /*if (idx == len-1){
        struct node* ptr = malloc(sizeof(struct node));
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        struct node* temp = ptr;
        ptr = ptr->prev;
        ptr->next = NULL;
        free(temp);
        len--;
        return;
    }*/

    int i = 1;
    struct node *ptr = *head_ref;
    while (ptr->next != NULL)
    {
        if (i == idx)
        {
            if (ptr->next->next == NULL){
                ptr->next = NULL;
                len--;
                return;
            }
            //ptr->prev = ptr;
            ptr->next = ptr->next->next;
            //ptr->next->prev = ptr;
            ptr->next->prev = ptr;
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
    while (ptr != NULL && ptr->next != NULL)
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
    insert_at_beg(&head, 10);
    insert_at_beg(&head, 20);
    insert_at_beg(&head, 30);
    print_linked_list(head);
    insert_at_end(&head, 40);
    insert_at_end(&head, 50);
    insert_at_index(&head, 3, 60);
    insert_at_index(&head, 1, 70);
    insert_at_index(&head, 6, 80);
    insert_at_index(&head, 8, 90);
    print_linked_list(head);
    delete_at_index(&head, 0);
    print_linked_list(head);
    delete_at_index(&head, 1);
    print_linked_list(head);
    //delete_at_index(&head, 3);
    //print_linked_list(head);
    delete_at_index(&head, 5);
    print_linked_list(head);
    delete_at_index(&head, 5);
    print_linked_list(head);

    printf("-----Search-----\n");
    search(&head,50);
    search(&head, 40);
    search(&head,70);
    
    printf("-----List-----\n");
    print_linked_list(head);

    sort_list(&head);
    print_linked_list(head);

}