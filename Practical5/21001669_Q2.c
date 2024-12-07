#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *left;
    struct Node *right;
    int data;

}Node;

Node* newNode(int date){
    Node *node = (Node*)malloc(sizeof(Node));
    node->left = node->right = NULL;
    node->data = date;
    return node;
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    Node *queue[100];
    int front = 0;
    int rear = 0;
    queue[rear++] = root;
    while(front != rear){
        Node *node = queue[front++];
        printf("%d ", node->data);
        if(node->left != NULL){
            queue[rear++] = node->left;
        }
        if(node->right != NULL){
            queue[rear++] = node->right;
        }
    }
}

Node* insert(Node* root, int data){
    if(root == NULL){
        return newNode(data);
    }
    Node* cur;
    if(data <= root->data){
        cur = insert(root->left, data);
        root->left = cur;
    }else{
        cur = insert(root->right, data);
        root->right = cur;
    }
    return root;
}

int main(){
    
    Node *root = NULL;
    int T,data;
    scanf("%d", &T);
    while(T-->0){
        scanf("%d", &data);
        root = insert(root, data);
    }
    levelOrder(root);
    return 0;
}