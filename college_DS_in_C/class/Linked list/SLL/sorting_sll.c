#include<stdio.h>
#include<stdlib.h>

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

int main() {
    
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    
    struct node *p = NULL;

    for (int i = 1; i <= n; i++) {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return 1; 
        }
        
        int data;
        printf("Enter the %d node data: ", i);
        scanf("%d", &data);
        temp->data = data;
        temp->next = NULL;

        if (start == NULL) {
            start = temp;
            p = temp;
        } else {
            p->next = temp;
            p = temp;
        }
    }

    struct node* ptr = start;
    while (ptr != NULL) {
        struct node *temp = ptr;
        ptr = ptr->next;
        temp->next = NULL;
        free(temp);
    }

}