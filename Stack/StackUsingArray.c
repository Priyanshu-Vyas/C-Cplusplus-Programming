#include<stdio.h>
#include<stdlib.h>
#define max 100
int stack[max],top=-1;

int push(){
    if(top==max-1)
        printf("\nStack Full!\n");
    else {
        printf("\nEnter data to be inserted = ");
        scanf("%d",&stack[++top]);
    }
}

int pop(){
    if(top==-1){
        printf("\nStack Empty!");
        exit(0);
    }
    else{
        printf("\nDeleted Data=%d",stack[top--]);
    }
}

int peek(){
    return stack[top];
}

int main(){
    while(1){
        printf("\n1.Push()\t");
        printf("2.Pop() \t ");
        printf("3.peek()\t");
        printf("4.Exit()\n");
        int choice;
        printf("Enter Your Choice=\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();break;
            case 2:
                pop();break;
            case 3:
                printf("%d\n",peek());break;
            case 4:
                exit(0);
            default:
                printf("Enter A Valid Choice!");
        }
    }
    return 0;
}
