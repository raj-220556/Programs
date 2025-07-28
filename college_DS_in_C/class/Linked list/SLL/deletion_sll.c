#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int delete_start(struct node **start);
int delete_end(struct node **start);
int delete_position(struct node **start);
int traverse_list(struct node **start);

int main(){
    int n;
    printf("enter number of nodes of linked list :");
    scanf("%d",&n);
    struct node *start = NULL;
    struct node *ptr;
    for(int i = 0;i < n;i++){
        printf("enter %d node data :",i+1);
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        if(temp == NULL){
            printf("Memory error...!");
        }
        int data;
        scanf("%d",&data);
        temp->data = data;
        temp->next = NULL;
        if(start == NULL){
            start = temp;
            ptr = temp;
        }
        else{
            ptr->next = temp;
            ptr = temp;
        }
    }

    traverse_list(&start);

    // delete_start(&start);
   
    // delete_end(&start);

    delete_position(&start);
    
    traverse_list(&start);

    // freeing memory allocation
    ptr = start;
    while(ptr != NULL){
        struct node* temp = ptr;
        ptr = ptr->next;
        free(temp);
    }


    return 0;
}



int delete_position(struct node **start){
    int pos,data;
    printf("enter the position :");
    scanf("%d",&pos);
    if(pos < 1){
        printf("invalid position");
        return 0;
    }
    if(pos == 1){
        struct node *temp = *start;
        *start = temp->next;
        data = temp->data;
        temp->next = NULL;
        free(temp);

    }
    else{
        struct node *ptr = *start;
        struct node *temp;
        int i = 1;
        while(i < pos-1 && ptr->next != NULL){
            ptr = ptr->next;
            i++;
        }
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next = NULL;
        data = temp->data;
        free(temp);
    }
    traverse_list(start);
    int repeat;
    printf("do you delete another yes(1) or No(0) :");
    scanf("%d",&repeat);

    if(repeat){
        
        return delete_position(start);
    }
    else{
        return data;
    }
}

int delete_start(struct node **start){
    struct node *temp = *start;
    int data = temp->data;
    *start = temp->next;
    temp->next = NULL;
    free(temp);

    return data;
}

int delete_end(struct node **start){
    struct node *temp = *start;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    int data = temp->next->data;
    struct node *remove = temp->next;
    temp->next = NULL;
    free(remove);

    return data;
}

int traverse_list(struct node **start){
    struct node *ptr = *start;
    while(ptr != NULL){
        printf(" %d -->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");

    return 0;
}