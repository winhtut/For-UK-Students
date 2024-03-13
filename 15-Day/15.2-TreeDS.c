//
// Created by winht on 3/10/2024.
// Tree DataStructure

#include "../N1C_Header/n1cDS.h"
#include "stdio.h"


int main(){

struct Tree_normal_node* root = NULL;

root = insertNode(root,50);
    insertNode(root,30);
    insertNode(root,60);
    insertNode(root,45);
    insertNode(root,80);

    Tree_normal_inorderTraversal(root);


}
