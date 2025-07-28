#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

void Traversing_dll(struct node* start){
    if(start == NULL){
        printf("Double Circular Linked list is empty..");
    }else{
        struct node* ptr = start;
        do{
            printf(" %d <-->",start->data);
            start = start->next;
        }while(ptr != start);printf(" NULL\n");
    }
}

int Insertion_dll(struct node ** start){
    int c;
    printf("enter insertion for \n1.begining(1)\n2.End(2)\n3.At position(3)\n Input :");
    scanf("%d",&c);
    if(c == 1){
        int data;
        printf("enter node data :");
        scanf("%d",&data);
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;

        //insertion
        struct node * ptr = *start;
        temp->prev = ptr->prev;
        ptr->prev->next = temp;
        temp->next = *start;
        ptr->prev = temp;
        *start = temp;

        // traversing
        printf("\ninsertion at begining is completed now list is :\n");
        Traversing_dll(*start);
    }else if (c == 2){
        int data;
        printf("enter the node data :");
        scanf("%d",&data);
        struct node * temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->prev =NULL;
        temp->next = NULL;

        // inserting
        struct node* ptr = *start;
        do{
            ptr = ptr->next;
        }while(ptr->next != *start);
        temp->prev = ptr;
        ptr->next = temp;
        struct node* s = *start;
        temp->next = s;
        s->prev = temp;

        // traversing
        printf("\ninsertion at Ending is completed now list is :\n");
        Traversing_dll(*start);
    }else{
        int pos,data;
        printf("enter the postion to insert :");
        scanf("%d",&pos);
        if(pos < 1){
            printf("entered invali postion...returning insertion");
            return 0;
        }else{
            struct node* s = *start;
            printf("enter node data :");
            scanf("%d",&data);
            struct node* temp = (struct node *)malloc(sizeof(struct node));
            temp->data = data;
            temp->next = NULL;
            temp->prev = NULL;
            struct node* ptr = *start;
            if(pos == 1){
                temp->prev = ptr->prev;
                ptr->prev->next = temp;
                temp->next = *start;
                ptr->prev = temp;
                *start = temp;
            }else{
                for(int i = 1; i < pos-1; i++){
                    ptr = ptr->next;
                }
                if(ptr->next == *start){
                    temp->prev =ptr;
                    ptr->next = temp;
                    
                    s->prev = temp;
                    temp->next = *start;
                }else{
                    temp->next = ptr->next;
                    ptr->next->prev = temp;
                    temp->prev = ptr;
                    ptr->next = temp;
                }
            }

             // traversing
            printf("\ninsertion at position is completed now list is :\n");
            Traversing_dll(*start);
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
            temp->next = start;
            temp->prev = start;
            ptr = start;
        }else{
            ptr->next = temp;
            temp->prev = ptr;
            temp->next = start;
            start->prev = temp;
            ptr = ptr->next;
        }
    }

    //trversing dll
    printf("Created Double Linked list :\n");
    Traversing_dll(start);

    // insertion
    int repeat = 1;
    while(repeat){
        Insertion_dll(&start);
        printf("\n do you want to insert another node yes(1) or no(0) :");
        scanf("%d",&repeat);
    }



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