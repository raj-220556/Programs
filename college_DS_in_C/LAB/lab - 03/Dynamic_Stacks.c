// Creating Stacks using Linked List (dynamic memory allocation)
#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack * next;
};
int display(struct stack *top){
    printf("\nSingle Linked list STACK :\n");
    if(top == NULL){
        printf("    ====EMPTY====\n");
    }else{
        while(top != NULL){
            printf("  ------\n");
            printf("    %d\n",top->data);
            top = top->next;
        }
    }
}
int push(struct stack ** top){
    struct stack* temp = (struct stack*)malloc(sizeof(struct stack));
    if(temp == NULL){
        printf("Memory allocation failed.");
        return 0;
    }
    printf("enter node data :");
    int data;
    scanf("%d",&temp->data);

    temp->next = *top;
    *top = temp;
    
}
int pop(struct stack ** top){
    int data;
    if(top == NULL){
        printf("Stack is Under Flow. there is no element to pop in stack.");
        return 0;
    }else{
        struct stack * temp = *top;
        data = temp->data;
        *top = temp->next; 
        temp->next = NULL;
        free(temp);
        printf("%d is poped in the Stack.",data);
        return data;
    }
}
int peek(struct stack *top){
    int data,peek = -1;
    data = top->data;
    while(top != NULL){
        peek = peek + 1;
        top = top->next;
    }
    printf("%d is peak and %d is data of peak.",peek,data);
}
int main(){
    struct stack * top = NULL;
    int c,repeat = 1;
    while(repeat){
        printf("\nStack Methods:\n1.Push(1)\n2.Pop (2)\n3.Peek (3)\n4.display (4)\nInput :");
        scanf("%d",&c);
        if(c == 1){
            push(&top);
        }else if(c == 2){
            pop(&top);
        }else if(c == 3){
            peek(top);
        }else if(c == 4){
            display(top);
        }else{
            break;
        }
        
    }

    // freeing memory allocationn
    while(top != NULL){
        struct stack *temp = top;
        top = top->next;
        free(temp);
    }
}