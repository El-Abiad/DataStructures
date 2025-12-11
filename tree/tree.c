#include <stdio.h>
#include "tree.h"

void CreateTree(TreeType *t){
    *t = NULL;
}

int IsTreeEmpty(TreeType t){
    return (!t); 
}

int IsTreeFull(TreeType t){
    return 0;
}

void PreOrder(TreeType t, void (*pvisit)(EntryType*)){
    if(t){
        (*pvisit)(&(t->info));
        PreOrder(t->left, pvisit);
        PreOrder(t->right, pvisit);
    }
}

void InOrder(TreeType t, void (*pvisit)(EntryType*)){
    if(t){
        InOrder(t->left, pvisit);
        (*pvisit)(&(t->info));
        InOrder(t->right, pvisit);
    }
}

void PostOrder(TreeType t, void (*pvisit)(EntryType*)){
    if(t){
        PostOrder(t->left, pvisit);
        PostOrder(t->right, pvisit);
        (*pvisit)(&(t->info));
    }
}

int Size(TreeType t){
    if(!t)return 0;
    else{
        return 1 + Size(t->left) + Size(t->right);
    }
}

int height(TreeType t){
    if(!t)return 0;
    else{
        int a = height(t->left);
        int b = height(t->right);
        return (a>b)? a+1 : b+1;
    }
}

void ClearTree(TreeType *t){
    if(*t){
        ClearTree(&(*t)->left);
        ClearTree(&(*t)->right);
        free(*t);
        *t = NULL;
    }
}