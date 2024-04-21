//
// Created by winht on 3/24/2024.
//
#include "../N1C_Header/n1cDS.h"
#include "stdio.h"


int main(){

    struct AVL_Node* root = NULL;

   root =  AVL_insert(root,2);
   root =  AVL_insert(root,1);
   root =  AVL_insert(root,7);
   root =  AVL_insert(root,4);
   root =  AVL_insert(root,5);
   root =  AVL_insert(root,3);
   root =  AVL_insert(root,8);
   root =  AVL_insert(root,10);
   root =  AVL_insert(root,15);
   root =  AVL_insert(root,20);
    AVL_inorder(root);
    root = AVL_delete(root,7);
    printf("\nAfter deletion key,%d\n",7);
    AVL_inorder(root);

    root = AVL_delete(root,8);
    printf("\nAfter deletion key,%d\n",8);
    AVL_inorder(root);

}