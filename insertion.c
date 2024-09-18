#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * InsertAtBeg(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node * InsertAtIndex(struct Node *head, int data,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * InsertAtEnd(struct Node *head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * InsertAfterNode(struct Node *head,struct Node *prevNode,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}



int main()
{
    //allocate memory for nodes in linked list
    struct Node * head;
    struct Node * second;
    struct Node * third;
   // struct Node * InsertAtBeg;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    //InsertAtBeg = (struct Node *) malloc(sizeof(struct Node));

    //link first and second node
    head->data = 7;
    head->next = second;

    //link second and third node
    second->data = 11;
    second->next = third;

    //terminate list at 3rd node
    third->data = 66;
    third->next = NULL;

    printf("Linked List before insertion\n");
    traversal(head);
    //head = InsertAtBeg(head,52);
    //head = InsertAtIndex(head,56,1);
    //head = InsertAtEnd(head,56);
    head = InsertAfterNode(head,second,45);
    printf("Linked List after insertion\n");
    traversal(head);
    return 0;
}