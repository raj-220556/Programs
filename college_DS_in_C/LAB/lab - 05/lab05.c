// 5.Write a C program That evaluates a POSTFIX Expression

#include <stdio.h>

int stack[100];
int top = -1;

void push(int num){
    if(top == 99){
        printf("Stack is Overflow...");
        return;
    }
    stack[top++] = num;
}

int pop(){
    if(top == -1){
        printf("Stack is UnderFlow");
        return 0;
    }
    return stack[--top];
}

int calculate(int A, int B, char op){
    switch(op){
        case '-':
            return B-A;
        case '+':
            return B+A;
        case '*':
            return B*A;
        case '^':
            return B^A;
        case '/':
            if(A == 0){
                printf("Divison to Zero Error:");
                return 0;
            } 
            return B/A;
    }
}
int evalPostfix(char* postfix){
    int A,B;
    while(*postfix != '\n' && *postfix != '\0'){
        if(*postfix == '+' || *postfix == '-' || *postfix == '*' || *postfix == '/' || *postfix == '^'){
            A = pop();
            B = pop();
            int r = calculate(A, B, *postfix);
            push((int)r);
        }
        else{
            push((int)*postfix);
        }
        postfix++;
    }
    return stack[top];
}

void main(){
    char postfix[100];
    printf("Enter Postfix to Evaluate :");
    fgets(postfix, sizeof(postfix), stdin);
    printf("Result : %d\n",evalPostfix(postfix));
}