#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;
void enqueue(int val)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;
    if ((f == NULL) && (r == NULL))
    {
        f = r = ptr;
    }
    else
    {
        r->next = ptr;
        r = ptr;
    }
    printf("Node is Inserted\n\n");
}

int dequeue()
{
    if (f == NULL)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        struct node *temp = f;
        int temp_data = f->data;
        f = f->next;
        free(temp);
        return temp_data;
    }
}

void display()
{
    struct node *temp;
    if ((f == NULL) && (r == NULL))
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("The queue is \n");
        temp = f;
        while (temp)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
    }
}

int main()
{
    int opt, val;
    printf("\nImplementation of Queue using Linked List\n");
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("\nEnter your opt : ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &val);
            enqueue(val);
            break;
        case 2:
            printf("Popped element is :%d\n", dequeue());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong opt\n");
        }
    } while (opt != 4);
    return 0;
}