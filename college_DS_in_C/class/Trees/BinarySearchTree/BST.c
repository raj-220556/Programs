// ALL Methods In Binary Search Tree

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
}*root,*ptr,*temp;

void PreOrderTraversingBST(struct node *pointer){
    // PreOrder (Root - left - Right)
    if(pointer == NULL){
        return;
    }
    printf("%d -> ",pointer->data);
    PreOrderTraversingBST(pointer->left);
    PreOrderTraversingBST(pointer->right);

}

void PostOrderTraversingBST(struct node* pointer){
    // PostOrder (left - right - Root)
    if(pointer == NULL){
        return;
    }

    PostOrderTraversingBST(pointer->left);
    PostOrderTraversingBST(pointer->right);
    printf("%d -> ",pointer->data);
}

void InOrderTraversingBST(struct node* pointer){
    // InOrder (left - root - right)
    if(pointer == NULL){
        return;
    }

    InOrderTraversingBST(pointer->left);
    printf("%d -> ",pointer->data);
    InOrderTraversingBST(pointer->right);
}

int ToltalNumOfNodesOfTree(struct node* pointer){
    // Degree of a tree is the number of children of a node
    if(pointer == NULL){
        return 0;
    }
    return 1 + ToltalNumOfNodesOfTree(pointer->left) + ToltalNumOfNodesOfTree(pointer->right);
}

int HeightOfaTree(struct node* pointer){
    int lst = 0, rst = 0;
    if(pointer == NULL){
        return 0;
    }else{
        lst = HeightOfaTree(pointer->left);
        rst = HeightOfaTree(pointer->right);
    }

    if(lst > rst){
        return lst + 1;
    }else{
        return rst + 1;
    }
   
}

void freeMemoryAllocation(struct node* pointer){
    if(pointer == NULL){
        return;
    }
    freeMemoryAllocation(pointer->left);
    freeMemoryAllocation(pointer->right);
    temp = pointer;
    temp->left = NULL;
    temp->right = NULL;
    free(temp);
}

void InsertNode(struct node * pointer){
    if(pointer == NULL){
        return;
    }
    if(pointer->data < temp->data){
        InsertNode(pointer->right);
        if(pointer->right == NULL){
            pointer->right = temp;
            return;
        }
    }else{
        InsertNode(pointer->left);
        if(pointer->left == NULL){
            pointer->left = temp;
            return;
        }
    }
}

void CreateNnodes(int n){
    if(n == 0){
        return;
    }
    CreateNnodes(n-1);
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory Allocation is Failed!");
        return;
    }
    printf("Enter %d Node Data : ",n);
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL){
        root = temp;
    }else{
        InsertNode(root);
    }
    return;
}

void DeleteNode(struct node* pointer, int data) {
    if (pointer == NULL) {
        printf("Node not found.\n");
        return;
    }

    if (data < pointer->data) {
        DeleteNode(pointer->left, data);
    } else if (data > pointer->data) {
        DeleteNode(pointer->right, data);
    } else {
        // Node with only one child or no child
        if (pointer->left == NULL) {
            struct node* temp = pointer->right;
            free(pointer);
            pointer = temp;
        } else if (pointer->right == NULL) {
            struct node* temp = pointer->left;
            free(pointer);
            pointer = temp;
        } else {
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            struct node* temp = pointer->right;
            while (temp && temp->left != NULL) {
                temp = temp->left;
            }
            // Copy the inorder successor's content to this node
            pointer->data = temp->data;
            // Delete the inorder successor
            DeleteNode(pointer->right, temp->data);
        }
    }
}

int main(){
    root = NULL;
    CreateNnodes(10);

    printf("ToltalNumOfNodesOfTree : %d",ToltalNumOfNodesOfTree(root));

    printf("\nPreOrder Traversing:\n");
    PreOrderTraversingBST(root);

    printf("\nPostOrder Traversing:\n");
    PostOrderTraversingBST(root);

    printf("\nInOrder Traversing:\n");
    InOrderTraversingBST(root); //It is sorted of given data

    DeleteNode(root, 15);

    // printf("Height of a Tree : %d", HeightOfaTree(root));

    printf("\nInOrder Traversing:\n");
    InOrderTraversingBST(root);
    
    freeMemoryAllocation(root);
}

// parent of a node
// child of a node
// sbilings
// ancestor 
// descendant
// height maximum path
// max depth = height
// path
// levels
// edge
// Degree of node = no.of childs of particular node
// Degree of tree = no.of childs of root node
// root node
// leaf node (or) terminate node


// NOTE :
//   Tree structures are doesn't contains loops


// Deteltion have 3 cases:
// 1.leaf node
// 2.Node having either left or right child
// 3. Node having both childs
