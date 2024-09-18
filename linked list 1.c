#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};


void traversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }


}
int main()
{
    //allocate memory for nodes in linked list
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    //link first and second node
    head->data = 7;
    head->next = second;

    //link second and third node
    second->data = 11;
    second->next = third;

    //terminate list at 3rd node
    third->data = 66;
    third->next = NULL;

    traversal(head);

    return 0;
}
