#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char op){
    if(top == 99){
        printf("Stack overflow");
        return;
    }
    stack[++top] = op;
}

char pop(){
    if(top = -1){
        printf("Stac is under flow");
        return '\0';
    }
    return stack[top--];
}
int priority(char op){
    if(op == '+' || op == '-'){
        return 1;
    }else if(op == '/' || op == '*'){
        return 2;
    }else if(op == '^'){
        return 3;
    }else{
        return -1;
    }
}


char* infixtopostfix(char * infix){
    char postfix[100];
    int p = 0;
    while(*infix != '\0' && *infix != '\n'){
        if(isalnum(*infix)){
            postfix[p++] = *infix;
            
        }else if(*infix == '('){
            push(*infix);
        }else if(*infix == ')'){
            char op;
            while((op = pop()) != '('){
                postfix[p++] = op;
            }
        }else{
            while(priority(*infix) >= priority(stack[top])){
                postfix[p++] = pop();
            }
            push(*infix);
        }
        infix++;
    }
    postfix[p] = '\0';
    return postfix;
}

char * infixtoprefix(char * infix){
    char * postfix = infixtopostfix(infix);
    int n = 0;
    char * c = postfix;
    while(*c != '\0'){
        c++;
        n++;
    }

    
}