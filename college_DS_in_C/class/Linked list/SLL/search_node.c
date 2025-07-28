#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
void Traverse(){
    if(start == NULL){
        printf("\n==== List is Empty ====\n");
    }else{
        struct node* ptr = start;
        printf("Single Linked List :");
        while(ptr != NULL){
            printf(" %d ->",ptr->data);
            ptr = ptr->next;
        }printf(" NULL\n");
    }
}

void searchNode(){
    int search;
    printf("Enter data to Search :");
    scanf("%d",&search);
    struct node* ptr = start;
    int pos = 0;
    bool isthere = false;
    while(ptr != NULL){
        if(ptr->data == search){
            printf("\n%d is present in %d position.",search,pos);
            isthere = true;
        }
        pos++;
        ptr = ptr->next;
    }
    if(!isthere){
        printf("%d is NOT present in Linked List!",search);
    }

}
int main(){
    int n;
    printf("enetr number of nodes : ");
    scanf("%d",&n);
    struct node * ptr;
    for (int i = 1; i <= n; i++){
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        printf("enter the %d data :",i);
        scanf("%d",&temp->data);
        temp->next = NULL;
        if(start == 0){
            start = temp;
            ptr = start;
        }else{
            ptr->next = temp;
            ptr = ptr->next;
        }
    }
    
    Traverse();
    searchNode();
}