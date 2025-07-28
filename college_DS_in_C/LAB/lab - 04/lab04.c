// 4.Write a C program that uses stack operations to convert a given INFIX expression to POSTFIX expression.


#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char op){
    if(top == 99){
        printf("Stack Overflow...\n");
        return;
    }

    stack[++top] = op;
}

char pop(){
    if(top == -1){
        printf("Stack Underflow...\n");
        return '\0'; 
    }
    return stack[top--];
}

int priority(char op){
    if(op == '+' || op == '-'){
        return 1;
    }else if(op == '*' || op == '/'){
        return 2;
    }else if(op == '^'){
        return 3;
    }
    return -1;
}

char* infixToPostfix(char* infix){
    static char postfix[100]; // Make postfix static to return valid pointer
    int p = 0;
    char *c = infix;
    while(*c != '\0'){
        if(isalnum(*c)){
            postfix[p] = *c;
            p++;
        }else if(*c == '('){
            push(*c);
        }else if(*c == ')'){
            char op;
            while((op = pop()) != '('){ 
                postfix[p] = op;
                p++;  
            }
        }else{
            while(priority(stack[top]) >= priority(*c)){
                char op = pop();
                postfix[p] = op;
                p++; 
            }
            push(*c);
        }
        c++;
    }
    while(top != -1){
        char op = pop();
        postfix[p] = op;
        p++;  
    }
    postfix[p] = '\0'; // Null terminate the postfix string
    return postfix;
}

int main(){
    char infix[100];
    printf("Enter infix Expression : ");
    fgets(infix, sizeof(infix), stdin);
    printf("Postfix Expresion : %s", infixToPostfix(infix));
    return 0;
}

