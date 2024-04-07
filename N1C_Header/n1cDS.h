//
// Created by winht on 3/3/2024.
//

#ifndef UK_N1CDS_H
#define UK_N1CDS_H
#include "stdio.h"
#include "stdlib.h"

//Stack DataStructure Using array start
#define MAX_SIZE 10
struct Stack{
    int items[MAX_SIZE];
    int top;
};
void arr_initializeStack(struct Stack*stack){

    stack->top = -1;
}
int arr_isFull(struct Stack *stack){
    return (stack->top == MAX_SIZE-1);
}

int arr_isEmpty(struct Stack*stack){
    return (stack->top==-1);
}
void arr_push(struct Stack *stack,int value){
    if (arr_isFull(stack)){
        printf("Stack overFlow!\n");
    } else{
        stack->items[++stack->top]= value;
        printf(" %d pushed value:\n",value);
    }
}
int arr_pop(struct Stack *stack){

    if(arr_isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top--];
    }
}

int arr_peek(struct Stack *stack){

    if(arr_isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top];
    }
}
//End for stack using array
// stack DS using linked List (Singly)
struct Stack_LL_Node{
    int data;
    struct Stack_LL_Node* next;
};
struct Stack_LL_Node_top{
    struct Stack_LL_Node* top;
};

void Stack_LL_initialize(struct Stack_LL_Node_top* stack){
    stack->top = NULL;
}
void Stack_LL_push(struct Stack_LL_Node_top* stack, int data){
    struct Stack_LL_Node* newNode =(struct Stack_LL_Node*) malloc(sizeof(struct Stack_LL_Node));

    if(newNode == NULL){
        perror("Memory Allocation Error!\n");
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("\n %d pushed data to stack!\n",newNode->data);

}
int Stack_LL_is_empty(struct Stack_LL_Node_top* stack){
    return (stack->top==NULL);
}
int Stack_LL_pop(struct Stack_LL_Node_top* stack){
    if(Stack_LL_is_empty(stack)){
        printf("Stack Underflow!\n");
        return -1;
    } else{
        struct Stack_LL_Node* temp = stack->top;
        int data = temp->data;
        stack->top = temp->next;
        free(temp);
        return data;
    }
}
int Stack_LL_peek(struct Stack_LL_Node_top* stack){

    if(Stack_LL_is_empty(stack)){
        perror("Stack is empty!\n");
        return -1;
    } else{
        return stack->top->data;
    }
}
void Stack_LL_Get_allData(struct Stack_LL_Node_top* CopyStack){

//    struct Stack_LL_Node* copyStack =(struct Stack_LL_Node*) malloc(sizeof(struct Stack_LL_Node));
//    if(copyStack==NULL){
//        perror("We can't get any data!\n");
//    }
//    printf("Data on stack->:");
//    while (copyStack->top->data){
//        printf("%d->",copyStack->top->data);
//        if(copyStack->top->next!=NULL) {
//            copyStack->top = copyStack->top->next;
//        } else{
//            return;
//        }
//    }
//    if(copyStack->top->data){
//        printf("%d\n",copyStack->top->data);
//    }
}

// Starting Queue Using LinkedList
struct Queue_LL_Node{ // Que
    int data;
    struct Queue_LL_Node*next;
};

struct Queue_LL_structure{
    struct Queue_LL_Node* front;
    struct Queue_LL_Node* rear;
};

void Queue_LL_initialize(struct Queue_LL_structure* queue){
    queue->front = NULL;
    queue->rear = NULL;
}

int Queue_LL_isEmpty(struct Queue_LL_structure* queue){
    return (queue->front==NULL);
}

void Queue_LL_enqueue(struct Queue_LL_structure* queue, int data){

    struct Queue_LL_Node* newNode =(struct Queue_LL_Node*) malloc(sizeof(struct Queue_LL_Node) );
    if(newNode==NULL){
        printf("Memory Allocation Failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if(Queue_LL_isEmpty(queue)){
        queue->front = newNode;
        queue->rear = newNode;

    } else{
        queue->rear->next = newNode;
        queue->rear = newNode;

    }
    printf("\nEnqueue Process Complete! %d\n",data);
}

int Queue_LL_Dequeue(struct Queue_LL_structure* queue){

    if(Queue_LL_isEmpty(queue)){
        printf("Queue UnderFlow!\n");
        return -1;
    }

    struct Queue_LL_Node* temp = queue->front;
    int data = temp->data;

    queue->front = temp->next;
    free(temp);
    return data;

}

int Queue_LL_Peek(struct Queue_LL_structure* queue){

    if(Queue_LL_isEmpty(queue)){
        printf(" Queus is Empty!\n");
        return -1;
    } else{
        return queue->front->data;
    }
}
// End of Queue

// Starting normal Tree

struct Tree_normal_node{
    int data;
    struct Tree_normal_node* left;
    struct Tree_normal_node* right;
};

struct Tree_normal_node* createNode(int data){
    struct Tree_normal_node* newNode=(struct Tree_normal_node*)malloc(sizeof(struct Tree_normal_node));
    if(newNode==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left=NULL;
    newNode->right = NULL;

    return newNode;
}

struct Tree_normal_node* insertNode(struct Tree_normal_node* root, int data){

    if(root==NULL){
        return createNode(data);
    }
    if(data< root->data){
        root->left = insertNode(root->left,data);
    } else{
        root->right = insertNode(root->right,data);
    }

    return root;
}

void Tree_normal_inorderTraversal(struct Tree_normal_node* root){

    if(root !=NULL){
        Tree_normal_inorderTraversal(root->left);
        printf("-%d-",root->data);
        Tree_normal_inorderTraversal(root->right);
    }


}

struct Tree_normal_node* findMin(struct Tree_normal_node* root){

    if(root==NULL){

        return NULL;
    }
    while (root->left !=NULL){
        root = root->left;

    }
    return root;

}

struct Tree_normal_node* Tree_normal_Deletion(struct Tree_normal_node* root, int data){
    if(root == NULL){
        return root;
    } else if(data < root->data){

        root->left =Tree_normal_Deletion(root->left,data);

    } else if(data > root->data){

        root->right = Tree_normal_Deletion(root->right,data);

    } else{

        // case 1: No child or 1 child
        if(root->left == NULL){

            struct Tree_normal_node* temp = root->right;
            free(root);
            return temp;

        } else if(root->right == NULL){

            struct Tree_normal_node* temp = root->left;
            free(root);
            return temp;
        }
        // case 2 : 2 childrens
        struct Tree_normal_node* temp = findMin(root->right);
        root->data = temp->data;

        root->right = Tree_normal_Deletion(root->right, temp->data);

    }

    return root;

}

// Binary Search Tree Ending Here
// Starting Balanced Binary Search Tree (BBST) AVL

struct AVL_Node{
    int key;
    struct AVL_Node* left;
    struct AVL_Node* right;
    int height;

};
int AVL_height(struct AVL_Node *Node){

    if(Node == NULL){
        return 0;
    }
    return Node->height;

}

int max(int a, int b){
    return (a>b)?a:b;

}

int AVL_getBalance(struct AVL_Node* node){

    if(node==NULL){
        return 0;
    }
    return AVL_height(node->left)- AVL_height(node->right);


}

struct AVL_Node* minimunNode(struct AVL_Node* node){ // right

    struct AVL_Node* current = node ;

    while (current->left != NULL){

        current = current->left;

    }


    return current;
}



struct AVL_Node* AVL_newNode(int key){
   struct AVL_Node* newNode=(struct AVL_Node*) malloc(sizeof(struct AVL_Node) );
   newNode->key = key;
   newNode->left = NULL;
   newNode->right = NULL;
   newNode->height = 1;

    return newNode;
}

struct AVL_Node* AVL_rightrotate(struct AVL_Node *y){
    struct AVL_Node* x =y->left;
    struct AVL_Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    // update heights
     y->height =max(AVL_height(y->left), AVL_height(y->right))+1 ;
     x->height = max(AVL_height(x->left), AVL_height(y->right))+1;


    return x;
}

struct AVL_Node* AVL_leftrotate(struct AVL_Node* x){

    struct AVL_Node* y = x->right;
    struct AVL_Node* T2 = y->left;

    y->left = x;
    x->right = T2 ;
    x->height =max(AVL_height(x->left), AVL_height(x->right))+1 ;
    y->height = max(AVL_height(y->left), AVL_height(y->right))+1;

    return y;
}

struct AVL_Node* AVL_insert(struct AVL_Node* node , int key){

    if(node == NULL){
        return (AVL_newNode(key));
    }

    if(key<node->key){

        node->left = AVL_insert(node->left,key);
    } else if(key>node->key){
        node->right = AVL_insert(node->right,key);
    } else{

        printf("Key cannot be same in AVL tree!\n");
        return node;

    }

    node->height = max(AVL_height(node->left), AVL_height(node->right))+1;


    int balance =AVL_getBalance(node);

    if(balance > 1 && key<node->left->key){ // for left unbalanced
        return AVL_rightrotate(node);
    }

    if(balance<-1 && key> node->right->key){
        return AVL_leftrotate(node);
    }

    if(balance > 1 && key> node->left->key){

        node->left = AVL_leftrotate(node->left);
        return AVL_rightrotate(node);
    }

    if(balance<-1 && key < node->right->key){
        node->right =AVL_rightrotate(node->right);
        return AVL_leftrotate(node);
    }

    return node;
}

struct AVL_Node* AVL_delete(struct AVL_Node* root , int key){

    if(root == NULL){
        return root;
    }
    if(key<root->key){
        root->left = AVL_delete(root->left,key);
    } else if(key>root->key){
        root->right = AVL_delete(root->right,key);
    } else{
        // root key have no child left and right ;
        if((root->left==NULL)|| (root->right == NULL)){
            struct AVL_Node* temp = root->left ?root->left:root->right;
            // if our node is leaf node
            if(temp == NULL){
                temp = root;
                root = NULL;
            // if we have one child ( that child will contain in the temp)
            } else{
                *root = *temp;
                free(temp);
            }

        } else{ // if we have to child or childs are also a sub tree ;
            // inorder successor
           struct AVL_Node* temp = minimunNode(root->right);
           root->key = temp->key;
            // တိုက်ရိုက် ဖျက်ကြည့်မယ်
            root->right =AVL_delete(root->right,temp->key);

        }

    }

    root->height = max(AVL_height(root->left), AVL_height(root->right))+1;


    int balance =AVL_getBalance(root);

    if(balance > 1 && key<root->left->key){ // for left unbalanced
        return AVL_rightrotate(root);
    }

    if(balance<-1 && key> root->right->key){
        return AVL_leftrotate(root);
    }

    if(balance > 1 && key> root->left->key){

        root->left = AVL_leftrotate(root->left);
        return AVL_rightrotate(root);
    }

    if(balance<-1 && key < root->right->key){
        root->right =AVL_rightrotate(root->right);
        return AVL_leftrotate(root);
    }

    return root;


}

#endif //UK_N1CDS_H
// print for avl
// deletion debug
// our own deletion
// project using AVL tree