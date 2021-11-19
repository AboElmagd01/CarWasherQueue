//
// Created by abdelrhman on ١٩‏/١١‏/٢٠٢١.
//
#include <stdio.h>
#include "stack.h"

void CreateStack(StackType* s){
    for (int i = 0; i < MAX; ++i) {
        s->top = -1;
    }
}
int StackEmpty(StackType s){
    return (s.top == -1);
}
int StackFull(StackType s){
    return (s.top==MAX-1);
}

void Push(EntryType item, StackType* s) {
    if (StackFull(*s))
            printf("Error: Stack Overflow \n");
    else
    {
        s->stackArray[++s->top]=item;
    }
}
void Pop(EntryType* item, StackType* s){
    if (StackEmpty(*s))
        printf("Error: Stack is empty \n");
    else
        *item = s->stackArray[s->top--];
}

void Peek(EntryType*item, StackType*s){
    *item = s->stackArray[s->top];
}