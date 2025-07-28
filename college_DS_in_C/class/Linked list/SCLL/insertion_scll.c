#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void Traversing_scll(struct node * start){
    printf("\nSingle Circular Linked List :\n");
    struct node * ptr = start;
    do{
        printf("%d --> ",ptr->data);
        ptr = ptr->next;
    }while(ptr != start);
    printf("NULL\n");
}

void Insertion_scll(struct node** start){  
    int c, data, repeat = 1;
    struct node *ptr = *start;
    
    
    while(repeat){
        printf("enter for insertion\n1.Begining(1)\n2.End(2)\n3.At position\n Input :");
        scanf("%d", &c);
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        temp->next = NULL;

        if(c == 1){
            printf("enter node data :");
            scanf("%d", &data);
            temp->data = data;
            // insertion at beginning
            temp->next = *start;
            if (*start == NULL) {
                *start = temp;
                temp->next = *start;
            } else {
                ptr = *start;
                do {
                    ptr = ptr->next;
                } while(ptr->next != *start);
                ptr->next = temp;
                *start = temp;
            }
        } else if(c == 2){
            printf("enter node data :");
            scanf("%d", &data);
            temp->data = data;
            // insertion at End
            ptr = *start;
            do {
                ptr = ptr->next;
            } while(ptr->next != *start);
            ptr->next = temp;
            temp->next = *start;
        } else {
            int pos;
            printf("enter insertion position :");
            scanf("%d", &pos);
            printf("enter node data :");
            scanf("%d", &data);
            temp->data = data;
            if(pos < 1){
                printf("Position is Invalid\n");
                free(temp);
            } else {
                ptr = *start;
                if(pos == 1){
                    do{
                        ptr = ptr->next;
                    }while(ptr->next != *start);
                    ptr->next = temp;
                    temp->next = *start;
                    *start = temp;
                } else {
                    for(int i = 1; i < pos - 1; i++){
                        ptr = ptr->next;
                    }
                    temp->next = ptr->next;
                    ptr->next = temp;
                }
            }
        }
        Traversing_scll(*start);
        printf("do u want repeat yes(1) or no(0) :");
        scanf("%d", &repeat);
    }
}

int main(){
    int n;
    printf("enter no.of node :");
    scanf("%d", &n);
    struct node *start = NULL;
    struct node *ptr = NULL;
    for(int i = 1; i <= n; i++){
        int data;
        printf("enter %d node data :", i);
        scanf("%d", &data);
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 1; 
        }
        temp->data = data;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            temp->next = start;
            ptr = start;
        } else {
            ptr->next = temp;
            temp->next = start;
            ptr = ptr->next;
        }
    }
    // Traversing SCLL
    Traversing_scll(start);

    // Insertion
    Insertion_scll(&start);

    // Freeing memory
    if(start != NULL){
        ptr = start;
        struct node* temp;
        do{
            temp = ptr;
            ptr = ptr->next;
            free(temp); 
        } while(ptr != start);
    }
    return 0;
}
