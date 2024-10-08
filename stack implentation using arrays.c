#include<stdio.h>
#define N 5

int stack[N];
int top = -1;


void push(){
    int value;
    printf("enter the value to push : ");
    scanf("%d",&value);
    if(top == N-1){
        printf("stack overflow");
    }
    else{
        top++;
        stack[top] = value;
    }
}

void pop(){
    int value;
    if(top == -1){
        printf("stack underflow");
    }
    else{
        value = stack[top];
        top--;
        printf("the popped item is %d ",value);
        
    }
}

void peek(){
    if (top == -1){
        printf("stack is empty");
    }
    else{
        printf("the topmost element is ^=%d",stack[top]);
    }
}

void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}




void main(){
    int choice;
    do{
        printf("Enter choice\n");
        printf("1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 : push();
                     break;
            case 2 : pop();
                     break;
            case 3 : peek();
                     break;
            case 4 : display();
                     break;
            case 5 : printf("exitted");
                     break;
            default : printf("invalid choice");
        
        }
    }
    while(choice!=5);
}
