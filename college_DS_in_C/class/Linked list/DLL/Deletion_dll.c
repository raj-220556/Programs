#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

void Traversing_dll(struct node* start){
    if(start == NULL){
        printf("Double Linked list is empty..");
    }else{
        while(start != NULL){
            printf(" %d -->",start->data);
            start = start->next;
        }printf(" NULL\n");
    }
}

int Deletion_dll(struct node ** start){
    int c,data;
    struct node * temp;
    struct node* ptr = *start;;
    
        printf("enter deletion for\n1.begining(1)\n2.End(2)\n3.At postion(3)\n Input : ");
        scanf("%d",&c);
        if(c == 1){
            temp = *start;
            *start = temp->next;
            temp->next = NULL;
            data = temp->data;
            free(temp);
            return data;
        }else if(c == 2){
            while(ptr->next->next != NULL){
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr->next = NULL;
            temp->prev = NULL;
            data = temp->data;
            free(temp);
            return data;
        }else{
            int pos;
            printf("enter the position u want delete :");
            scanf("%d",&pos);
            if(pos < 1){
                printf("Invalid position..");
            }else{
                if(pos == 1){
                    temp = *start;
                    *start = temp->next;
                    temp->next = NULL;
                    data = temp->data;
                    free(temp);
                    return data;
                }else{
                    ptr = *start;
                    for( int i = 1; i < pos-1; i++){
                        ptr = ptr->next;
                    }
                    if(ptr->next->next == NULL){
                        temp = ptr->next;
                        ptr->next = NULL;
                    }else{while(ptr->next != *start)
                        temp = ptr->next;
                        temp->next->prev = ptr;
                        ptr->next = temp->next;
                    }
                    temp->prev = NULL;
                    temp->next = NULL;
                    data = temp->data;
                    free(temp);
                    return data;
                }
            }
        }
    
    
}

int main(){
    int n;
    printf("enter no.of nodes :");
    scanf("%d",&n);
    struct node* start = NULL;
    struct node* ptr;
    for(int i = 0;i < n; i++){
        struct node* temp = (struct node *)malloc(sizeof(struct node));
        int data;
        printf("enter %d node data :",i+1);
        scanf("%d",&data);
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            ptr = start;
        }else{
            ptr->next = temp;
            temp->prev = ptr;
            ptr = ptr->next;
        }
    }

    //trversing dll
    printf("Created Double Linked list :\n");
    Traversing_dll(start);

    // deletion dll
    int repeat;
    do{
        Deletion_dll(&start);
        printf("\nDeleted list :\n");
        Traversing_dll(start);
        printf("do you want continue yes(1) or no(0) :");
        scanf("%d",&repeat);
    }while(repeat);
    //freeing memory allocationt
    ptr = start;
    while(ptr != NULL){
        struct node* temp = ptr;
        ptr = ptr->next;
        temp-> prev = NULL;
        temp->next = NULL;
        free(temp);
    }

}