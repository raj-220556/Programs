// Stack is FiLo

// Creating Stack using array(Static stacks )
#include <stdio.h>
#include <stdlib.h>

#define Max 10   //defining maximum size of a stack

typedef struct stack{
    int arr[Max];
    int top;
}Stack;

void intizalise_stack(Stack* stack){
    stack->top = -1;
    return ;
}

int isEmpty(Stack* stack){
    return stack->top == -1;
}

int isFull(Stack *stack){
    return stack->top == (Max - 1);
}
int display(Stack *stack){
    printf("\nStack :\n");
    if(isEmpty(stack)){
        printf("====EMPTY====");
        return 0;
    }
    int ptr = stack->top;
    while(!isEmpty(stack)){
        printf("    %d\n",stack->arr[stack->top]);
        stack->top = stack->top - 1;
    }
    stack->top = ptr;
    return 1;
}
int push(Stack *stack){
    int data;

    printf("enter data :");
    scanf("%d",&data);
    if(isFull(stack)){
        printf("Stack is OverFlow. we can't Push %d in Stack.",data);
        return 0;
    }
    stack->top = stack->top + 1;
    stack->arr[stack->top] = data;
    display(stack);
    return 1;
}

int pop(Stack * stack){
    int data;
    if(isEmpty(stack)){
        printf("\nStack is UnderFlow. There is no element to pop in stack.");
        return 0;
    }
    data = stack->arr[stack->top];
    stack->top = stack->top - 1;
    printf("%d is poped in the Stack.",data);
    display(stack);
    return 1;
}
int peek(Stack * stack){
    if(isEmpty(stack)){
        printf("Stack is Empty..Peek value is %d (-1).",stack->top);
    }else{
        printf("Peek value is %d , and data is %d.",stack->top,stack->arr[stack->top]);
    }
    return stack->top;
}

int main(){
    int c,repeat = 1;
    Stack stack;
    intizalise_stack(&stack);
    while(repeat){
        printf("\nMethods perform on stack:\n1.PUSH (1)\n2.POP (2)\n3.Peek (3) \n4.Dispay\n Input :");
        scanf("%d",&c);
        if(c == 1){
            push(&stack);
        }else if(c == 2){
            pop(&stack);
        }else if(c == 3){
            peek(&stack);
        }else if(c == 4){
            display(&stack);
        }else{
            repeat = 0;
        }
    }
}









// // Function prototypes
// void initStack(Stack *s);
// int isFull(Stack *s);
// int isEmpty(Stack *s);
// void push(Stack *s, int value);
// int pop(Stack *s);
// int peek(Stack *s);

