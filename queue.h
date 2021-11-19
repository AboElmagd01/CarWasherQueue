//
// Created by abdelrhman on ١٩‏/١١‏/٢٠٢١.
//
#include "global.h"
typedef struct QueueType{
    int front;
    int rear;
    EntryType entry[MAX];
    int size;

}Queue;
void CreateQueue(Queue* q);
int QueueEmpty(Queue q);
int QueueFull(Queue q);
void Enqueue( EntryType x, Queue* q);
void DeQueue( EntryType* x, Queue* q);
void TraverseQueue(Queue* q, void (*pf) (EntryType));