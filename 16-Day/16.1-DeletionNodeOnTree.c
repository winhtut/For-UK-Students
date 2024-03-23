//
// Created by winht on 3/23/2024.
//
#include "../N1C_Header/n1cDS.h"
#include "stdio.h"


int main(){

    struct Tree_normal_node* root = NULL;

    root = insertNode(root,50);
    insertNode(root,30);
    insertNode(root,60);
    insertNode(root,45);
    insertNode(root,80);
    insertNode(root,15);
    insertNode(root,90);
    insertNode(root,18);
    insertNode(root,25);
    insertNode(root,70);
    insertNode(root,10);


    Tree_normal_inorderTraversal(root);
    printf("\n");
    Tree_normal_Deletion(root, 30);
    Tree_normal_inorderTraversal(root);
    printf("\n");


}
