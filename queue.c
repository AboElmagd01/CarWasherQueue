//
// Created by abdelrhman on ١٩‏/١١‏/٢٠٢١.
//

#include "queue.h"
void CreateQueue(Queue* q){
    q->rear = MAX-1;
    q->front = q->size= 0;
}
int QueueEmpty(Queue q){
    return !q.size;
}
int QueueFull(Queue q){
    return q.size==MAX;
}
void Enqueue(EntryType x, Queue* q){
    if(!QueueFull(*q)) {
        q->rear = (q->rear + 1) % MAX;
        q->entry[q->rear] = x;
        q->size++;
    }
}
void DeQueue(EntryType* x, Queue* q){
    if(!QueueEmpty(*q)){
        *x = q->entry[q->front];
        q->front = (q->front+1)%MAX;
        q->size--;
    }
}
void TraverseQueue(Queue* q, void (*pf) (EntryType)){
    int start = q->front;
    for (int counter =0; counter < q->size ; counter++) {
        (*pf)(q->entry[start]);
        start = (start + 1)% MAX;
    }
}
void Copy(Queue* q1, Queue* q2){
    int start = q1->front;
    for (int counter =0; counter < q1->size ; counter++) {
        q2->entry[start] = q1->entry[start];
        start = (start + 1)% MAX;
    }
    q2->front = q1->front;
    q2->rear = q1->rear;
    q2->size = q1->size;
}

