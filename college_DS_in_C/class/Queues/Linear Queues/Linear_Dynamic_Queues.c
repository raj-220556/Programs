#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

struct Queue* que;

void traverse() {
    printf("\nLinked List Queue :\n");
    struct Node* ptr = que->front;
    if (ptr == NULL) {
        printf("Queue is Empty.\n");
    } else {
        while (ptr != NULL) {
            printf("%d --> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n"); // Indicate the end of the queue
    }
}

void enque() {
    int data;
    
    printf("Enter node data: ");
    scanf("%d", &data);
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data; // Assign data immediately after allocation
    temp->next = NULL; // Initialize next pointer

    if (que->front == NULL) {
        que->front = temp;
        que->rear = temp;
    } else {
        que->rear->next = temp;
        que->rear = temp;
    }
    traverse();
}

void deque() {
    if (que->front == NULL) {
        printf("Queue is Underflow\n");
    } else {
        struct Node* temp = que->front;
        que->front = que->front->next;
        if (que->front == NULL) {
            que->rear = NULL; // Queue is now empty
        }
        free(temp);
    }
    traverse();
}

void peek() {
    if (que->front == NULL) {
        printf("Queue is Empty\n");
    } else {
        printf("\nPeek data: %d\n", que->rear->data);
    }
}

int main() {
    int c;
    que = (struct Queue*)malloc(sizeof(struct Queue)); // Initialize the queue
    que->front = NULL;
    que->rear = NULL;

    while (1) {
        printf("\nEnter for\n1. Enque\n2. Deque\n3. Traverse\n4. Peek\nInput: ");
        scanf("%d", &c);
        if (c == 1) enque();
        else if (c == 2) deque();
        else if (c == 3) traverse();
        else if (c == 4) peek();
        else break;
    }
}
