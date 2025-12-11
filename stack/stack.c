#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return ((s->top == -1)?1:0);
}

int isFull(Stack *s){
    return ((s->top == MAX_SIZE-1)?1:0);
}

void pop(Stack *s, TYPE *x){
    *x = s->arr[s->top--];
}

void push(Stack *s, TYPE x){
    s->arr[++s->top] = x;
}