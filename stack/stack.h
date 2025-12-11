#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100
#define TYPE int

typedef struct{
    int top;
    TYPE arr[100];
} Stack;

// methods
void createStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, TYPE x);
void pop(Stack *s, TYPE *x);
#endif