// 2.Write a C program that uses functions to perform the following:
//      a)Create a doubly linked list ofIntegers
//      b)Delete a given integer from the above doubly linked list
//      c)Display the contents of the above list after deletion.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    struct node* prev;
    int data;
    struct node * next;
};

struct node* start = NULL;

void Traversing(){
    if(start == NULL){
        printf("\n==== List is Empty ====");
        return;
    }else{
        struct node* ptr = start;
        printf("\nDouble Linked List :\n");
        while(ptr != NULL){
            printf(" %d <-->",ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
void Creation(){
    struct node* temp = (struct node* )malloc(sizeof(struct node));
    printf("Enter node data :");
    scanf("%d",&temp->data);
    temp->next = NULL;
    temp->prev = NULL;
    if(temp == NULL){
        printf("Memory allocation Failed!");
        return;
    }
    if(start == NULL){
        start = temp;
    }else{
        struct node * ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
    }
    Traversing();
}

void Deletion(){
    int delete;
    printf("\nEnter Integer to Delete :");
    scanf("%d",&delete);
    bool isthere =false;
    struct node* ptr = start;
    if(ptr->data == delete){
            struct node * temp = start;
            start = temp->next;
            temp->next = NULL;
            temp->prev = NULL;
            free(temp);
            isthere = true;
            
    }
    while(ptr->next != NULL && isthere){
        if(ptr->next->data == delete){
            struct node * temp = ptr->next;
            ptr->next = temp->next;
            ptr->next->prev = ptr;
            temp->prev = NULL;
            temp->next = NULL;
            free(temp);
            isthere = true;
            break;
        }
        ptr = ptr->next;
    }
    if(isthere){
        printf("\n%d is Deleted Sucessfully!",delete);
    }else{
        printf("\nEntered element is Not Present in the Linked List.");
    }
    Traversing();
}

int main(){
    while(true){
        int c;
        printf("\n1.Adding Element\n2.Deleting Element\n3.Display\n4.exit\nchoice:");
        scanf("%d",&c);
        if(c == 1){
            Creation();
        }else if(c == 2){
            Deletion();
        }else if(c == 3){
            Traversing();
        }else if(c == 4){
            break;
        }else{
            printf("Enter a Vailid Option!");
        }
    }

    struct node * ptr = start;
    while(ptr != NULL){
        struct node* temp = ptr;
        ptr = ptr->next;
        temp->next = NULL;
        free(temp);
    }
}