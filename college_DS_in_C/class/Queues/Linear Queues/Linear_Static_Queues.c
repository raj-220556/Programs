// linear Queues means FiFo

#include <stdio.h>
#define Max 10
int q[Max];
int rear = -1;
int front = -1;

int traverse(){
    printf("\nQueue: ");
    for(int i = front; i <= rear; i++){
        printf("%d - ",q[i]);
    }
}
void enque(){ //enque means insertion
    if(rear == -1){
        front = 0;
    }
    rear = rear +1;
    if(rear == Max -1){
        printf("Queue is Overflow.");
    }
    printf("enter %d data :",rear);
    scanf("%d",&q[rear]);
    traverse();
    return;
    
}
void deque(){   //deque means deletion
    if(front == -1){
        printf("Queue is Empty");
    }
    if(front == rear){
        printf("Queue is Underflow.");
    }
    front = front+1;
    traverse();
    return;
}

void peek(){
    printf("Peek data : %d",q[rear]);
}

int main(){
    int c;
    while(1){
        printf("\nenter for\n1.enque\n2.deque\n3.traverse\n4.peek\nInput:");
        scanf("%d",&c);
        if(c==1) enque();   
        else if(c==2) deque();
        else if(c == 3)traverse();
        else if(c== 4)peek();
        else break;
    }
}