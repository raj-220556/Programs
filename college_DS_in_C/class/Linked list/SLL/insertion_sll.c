// Insertion of a sigle linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int insertion_start(struct node **start){ //we change in it stored location
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory error \n");
        return 1;
    }
    int data;
    printf("enter data in the node : ");
    scanf("%d",&data);
    temp->data = data;
    temp->next = NULL;

    // connecting node to linked list
    temp->next = *start;
    *start = temp;


}
int insertion_end(struct node **start){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory error \n ");
        return 1;
    }
    int data;
    printf("enter data in the node : ");
    scanf("%d",&data);
    temp->data = data;
    temp->next = NULL;

    // connecting node to the link
    struct node *ptr = NULL;
    ptr = *start;
    while(ptr != NULL){
        if(ptr->next == NULL){
            break;
        }
        ptr = ptr->next;
    }
    ptr->next = temp;


}

int insertion_position(struct node **start,int position){
    int data;
    printf("enetr the data in node :");
    scanf("%d",&data);
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory error\n");
        return 1;
    }
    temp->data = data;
    temp->next = NULL;
  

    if (position == 1) {
        temp->next = *start;
        *start = temp;
    } else {
        struct node *ptr = *start;
        int i = 1;
        while (i < position - 1 && ptr->next != NULL) {  // not run on position 2
            ptr = ptr->next;
            i++;
        }
        if (ptr == NULL) {
            printf("Invalid position\n");
            free(temp);
            return 1;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

int traversing_list(struct node *start){
    struct node *ptr = start;
    while(ptr != NULL){
        printf(" %d -->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(){
    int n;
    printf("enter number of node : ");
    scanf("%d",&n);
    struct node *start = NULL;
    struct node *link = NULL;
    for(int i = 1; i <= n; i++){
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        if(temp == NULL ){
            printf("Memory allocation is failed");
            return 1;
        }
        
        int data;
        printf("enter the %d data :",i);
        scanf("%d",&data);
        temp->data = data;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            link = temp;
        }
        else{
            link->next = temp;
            link = temp;
        }
        
    }
    traversing_list(start);

    // // insertion at start
    // insertion_start(&start);
    // traversing_list(start);


    // // insertion at END
    // insertion_end(&start);
    // traversing_list(start);

    // insertion at specific position
    int pos;
    int condition = 1;
    
    while(condition){
        printf("enter the position to add node :");
        scanf("%d",&pos);
        if(pos < 1){
            printf("invalid position");
           
        }
        else{
            insertion_position(&start,pos);
            traversing_list(start);
            printf("do you wish to enter node:\nyes means'1'\nno means '0'\n Input :");
            scanf("%d",&condition);
        }
    }


    // freeing dyanamically acclocated memory
    struct node *ptr = NULL;
    ptr = start;
    while(ptr != NULL){
        struct node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}
