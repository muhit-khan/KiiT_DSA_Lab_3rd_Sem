/*
1. WAP to insert a new node at the beginning of a single linked list.
2. WAP to delete a node after a certain node of a single  linked list.
3. WAP to insert a new node before a certain node of a single linked list.
4. WAP to remove the duplicates in a sorted single linked list.
5. WAP to check whether a single linked list is palindrome or not.
*/

#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *delete_node(struct node *start);
struct node *insert_before(struct node *start);

void main()
{
    int option;

    do
    {
        printf("\n****MAIN MENU****");
        printf("\n 1. create link list");
        printf("\n 2. Display link list");
        printf("\n 3. Delete node after a certain node");
        printf("\n 4. Insert a new node before a certain node");
        printf("\n 5. Remove the duplicates in a sorted single linked list");
        printf("\n 6. Exit");
        printf("\n Enter your option");
        scanf("%d", &option);

        switch (option)
        {

        case 1:

            start = create_ll(start);
            printf("\n link list created");
            break;

        case 2:
            start = display(start);

            break;
        case 3:
            start = delete_node(start);
            start = display(start);
        case 4:
            start = insert_before(start);
            start = display(start);
        case 5:
            start =
        }

    } while (option != 6);
}

struct node *create_ll(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the data :");
    scanf("%d", &num);

    while (num != -1)
    {

        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;

        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }
        else
        {

            ptr = start;

            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\n Enter the data :");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;

    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    return start;
}
struct node *delete_node(struct node *start)
{

    struct node *ptr, *preptr;
    int val;

    printf("\n Enter the value of the node which has to be deleted: ");
    scanf("%d", &val);

    ptr = start;
    if (ptr->data == val)
    {
        start = delete_beg(start);
        return start;
    }
    else
    {
        while (ptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        return start;
    }
}
struct node *insert_before(struct node *start)
{

    struct node *new_node, *ptr, *preptr;
    int num, val;

    printf("\n Enter the data :");
    scanf("%d", &num);
    printf("\n Enter the value before which the data has to be inserted :");
    scanf("%d", &val);

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = num;

    ptr = start;

    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = new_node;
    new_node->next = ptr;

    return start;
}