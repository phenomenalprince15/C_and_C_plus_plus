#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//struct node *last;
unsigned int len = 0;

void print_linked_list(struct node *last)
{
    struct node *ptr = last;
    while (1)
    {
        printf("%d ---> ", ptr->data);
        ptr = ptr->next;
        if (ptr == last)
            break;
        //len++;
    }
    //printf("NULL\n");
    printf("%d (in circle again)\n",ptr->data);
    printf("Length of linked list : %d\n", len);
}

void insert_at_beginning(struct node **last_ref, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (*last_ref == NULL){
        new_node->data = data;
        *last_ref = new_node;
        (*last_ref)->next = *last_ref;
        len++;
        return;
    }
    new_node->data = data;
    new_node->next = (*last_ref)->next;
    (*last_ref)->next = new_node;
    len++;
}

void insert_at_end(struct node **last_ref, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (*last_ref == NULL){
        new_node->data = data;
        *last_ref = new_node;
        (*last_ref)->next = *last_ref;
        len++;
        return;
    }
    new_node->data = data;
    new_node->next = (*last_ref)->next;
    (*last_ref)->next = new_node;
    *last_ref = new_node;
    len++;
}

void insert_at_index(struct node **last_ref, int idx, int data)
{
    if (idx < 0)
    {
        printf("Insertion not possible !!!\n");
        return;
    }
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    if (*last_ref == NULL || idx == 0)
    {
        insert_at_beginning(last_ref, data);
        return;
    }
    if (idx == len)
    {
        insert_at_end(last_ref, data);
        return;
    }
    struct node *ptr = *last_ref;
    while (idx > 0)
    {
        if (idx == 1)
        {
            new_node->next = ptr->next;
            ptr->next = new_node;
            len++;
        }
        ptr = ptr->next;
        idx--;
        if (ptr == *last_ref){
            return;
        }
    }
}

void delete_at_index(struct node **last_ref, int idx)
{
    if (idx < 0 || idx >= len)
    {
        printf("can't delete !!!\n");
    }
    if (idx == 0)
    {
        struct node *ptr = *last_ref;
        while(ptr->next == *last_ref){
            ptr = ptr->next;
            break;
        }
        ptr = ptr->next->next;
        *last_ref = ptr;
        //*last_ref = (*last_ref)->next;
        len--;
        return;
    }

    int i = 1;
    struct node *ptr = *last_ref;
    while (1)
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
            len--;
            return;
        }
        ptr = ptr->next;
        i++;
        if (ptr == *last_ref){
            return;
        }
    }
}

void search(struct node **last_ref, int data)
{
    int idx = 0;
    struct node *ptr = *last_ref;
    while (1)
    {
        if (ptr->data == data)
        {
            printf("Found at index :: %d\n", idx);
            return;
        }
        ptr = ptr->next;
        idx++;
        if (ptr == *last_ref){
            break;
        }
    }
    printf("Not found !!!\n");
    return;
}

void sort_list(struct node** last_ref)
{
    struct node* temp = *last_ref;
    struct node* ptr = *last_ref;
    int swap;

    while(1){
        ptr = temp->next;
        while(ptr != *last_ref){
            if (temp->data > ptr->data){
                swap = temp->data;
                temp->data = ptr->data;
                ptr->data = swap;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
        if (temp == *last_ref){
            return;
        }
    }

}

int main()
{
    struct node *last = NULL;
    insert_at_beginning(&last, 10);
    insert_at_beginning(&last, 20);
    insert_at_beginning(&last, 30);
    print_linked_list(last);
    insert_at_end(&last, 40);
    insert_at_end(&last, 50);
    insert_at_index(&last, 3, 60);
    insert_at_index(&last, 1, 70);
    insert_at_index(&last, 6, 80);
    insert_at_index(&last, 8, 90);
    print_linked_list(last);
    delete_at_index(&last, 0);
    print_linked_list(last);
    delete_at_index(&last, 1);
    print_linked_list(last);
    //delete_at_index(&last, 3);
    //print_linked_list(last);
    delete_at_index(&last, 5);
    print_linked_list(last);
    delete_at_index(&last, 5);
    print_linked_list(last);

    printf("-----Search-----\n");
    search(&last,50);
    search(&last, 40);
    search(&last,70);
    
    printf("-----List-----\n");
    print_linked_list(last);

    sort_list(&last);
    print_linked_list(last);

}