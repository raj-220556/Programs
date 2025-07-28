#include<stdio.h>
#include<stdlib.h>

struct node{
    char name[100];
    struct node *next;
    struct node *prev;
}*start,*temp,*ptr;

void insert(char *name){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->name = name;
    temp->next = NULL;
    temp->prev = NULL;
    if(start == NULL) start = temp;
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
    return;

}

void traverse(){
    ptr = start;
    while(ptr != NULL){
        printf("%s is playing",ptr->name);
        ptr = ptr->next;
    }
}

void main(){
    start = NULL;

    insert("song1");
    insert("song2");
    insert("song3");
    insert("song4");

    traverse();
    
    
}