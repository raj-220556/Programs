#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void Traversing_scll(struct node * start){
    printf("\nSingle Circular Linked List :\n");
    if(start == NULL){
        printf("    ====EMPTY====   \n");
    }
    else{    struct node * ptr = start;
        do{
            printf("%d --> ",ptr->data);
            ptr = ptr->next;
        }while(ptr != start);
        printf("NULL\n");
    }
}
int Deletion_scll(struct node** start){
    int data,pos,c;
    printf("enter for deletion\n1.Beginig(1)\n2.End(2)\n3.At position(3)\nInput : ");
    scanf("%d",&c);
    struct node * temp;
    struct node * ptr = *start;
    if(c == 1){
       
        do{
            ptr = ptr->next;
        }while(ptr->next != *start);
        temp = *start;
        ptr->next = temp->next;
        *start = temp->next;
        temp->next = NULL;
        data = temp->data;
        free(temp);
        return data;
    }else if(c == 2){
        do{
            ptr = ptr->next;
        }while(ptr->next->next != *start);
        temp = ptr->next;
        ptr->next = *start;
        data = temp->data;
        free(temp);
        return data;
    }else{
        printf("enter the position :");
        scanf("%d",&pos);
        if(pos < 1){
            printf("Invalid position");
            return 0;
        }else{
            if(pos == 1){
                temp = *start;
                ptr = *start;
                while(ptr->next != *start){
                    ptr = ptr->next;
                }
                *start = temp->next;
                ptr->next = temp->next;
                data = temp->data;
                free(temp);
                return data;
            }else{
                for(int i = 1;i < pos-1; i++){
                    
                    ptr = ptr->next;
                }
                temp = ptr->next;
                ptr->next =temp->next;
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
    printf("enter no.of node :");
    scanf("%d",&n);
    struct node * start;
    struct node *ptr;
    for(int i = 1; i <= n; i++){
        int data;
        printf("enter %d node data :",i);
        scanf("%d",&data);
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 0;
        }
        temp->data = data;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            temp->next = start;
            ptr = start;
        }else{
            ptr->next = temp;
            temp->next = start;
            ptr = ptr->next;
        }
    }
    // Trversing SCLL
    Traversing_scll(start);

    // deletion SCLL
    int repeat = 1;
    while(repeat){
        Deletion_scll(&start);
        Traversing_scll(start);
        if(start == NULL){
            printf("Single Circular Linked list is empty...");
        }else{
            printf("do u want to repeat deletion yes(1) or no(0) :");
            scanf("%d",&repeat);
        }
    }
}