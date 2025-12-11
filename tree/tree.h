#ifndef TREE_H
#define TREE_H
#define EntryType char

typedef struct node{
    EntryType info;
    struct node *right;
    struct node *left;
} NodeType;

typedef NodeType *TreeType;

//methods
void CreateTree(TreeType *t);
int IsTreeEmpty(TreeType t);
int IsTreeFull(TreeType t);
void PreOrder(TreeType t, void (*pvisit)(EntryType*));
void InOrder(TreeType t, void (*pvisit)(EntryType*));
int Size(TreeType t);
int height(TreeType t);
void ClearTree(TreeType *t);
#endif