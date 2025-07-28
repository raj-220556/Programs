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

int main(){
    int n;
    printf("enter no.of node :");
    scanf("%d",&n);
    struct node * start = NULL; // Initialize start to NULL
    struct node *ptr = NULL; // Initialize ptr to NULL

    for(int i = 1; i <= n; i++){
        int data;
        printf("enter %d node data :",i);
        scanf("%d",&data);
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        if (temp == NULL) { // Error handling for memory allocation
            printf("Memory allocation failed\n");
            return 1; 
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

    // Traversing SCLL
    Traversing_scll(start);

    // Freeing memory
    if (start != NULL) {
        ptr = start;
        struct node* temp;
        do {
            temp = ptr;
            ptr = ptr->next;
            free(temp); 
        } while (ptr != start); // Stop when we return to the start
    }

    return 0;
}
