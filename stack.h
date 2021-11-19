#include "global.h"
#include <string.h> // for strlen function

typedef struct{
    int top;
    EntryType stackArray[ MAX ];
} StackType;
void CreateStack(StackType *s);
int StackEmpty(StackType s);
int StackFull(StackType s);
void Push(EntryType item, StackType *s);
void Pop(EntryType*item, StackType*s);
void Peek(EntryType*item, StackType*s);
void PrintStack(StackType*s);