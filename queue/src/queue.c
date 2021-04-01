#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<inttypes.h>
#include"queue.h"
#include"mem.h"

/************************************************************************

@title queue
@author Duarte Arribas
@description Library that contains several operations for queues.

************************************************************************/

//----------------------------- Create front -----------------------------//
/**
 * Creates a queue with the specified element (char version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
cNODE_QUEUE *ccreatequeue(char value){
  cNODE_QUEUE *front=memalloc(sizeof(cNODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (int8_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
i8NODE_QUEUE *i8createqueue(int8_t value){
  i8NODE_QUEUE *front=memalloc(sizeof(i8NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (int16_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
i16NODE_QUEUE *i16createqueue(int16_t value){
  i16NODE_QUEUE *front=memalloc(sizeof(i16NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (int32_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
i32NODE_QUEUE *i32createqueue(int32_t value){
  i32NODE_QUEUE *front=memalloc(sizeof(i32NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (int64_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
i64NODE_QUEUE *i64createqueue(int64_t value){
  i64NODE_QUEUE *front=memalloc(sizeof(i64NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (uint8_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
ui8NODE_QUEUE *ui8createqueue(uint8_t value){
  ui8NODE_QUEUE *front=memalloc(sizeof(ui8NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (uint16_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
ui16NODE_QUEUE *ui16createqueue(uint16_t value){
  ui16NODE_QUEUE *front=memalloc(sizeof(ui16NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (uint32_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
ui32NODE_QUEUE *ui32createqueue(uint32_t value){
  ui32NODE_QUEUE *front=memalloc(sizeof(ui32NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (uint64_t version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
ui64NODE_QUEUE *ui64createqueue(uint64_t value){
  ui64NODE_QUEUE *front=memalloc(sizeof(ui64NODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (float version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
fNODE_QUEUE *fcreatequeue(float value){
  fNODE_QUEUE *front=memalloc(sizeof(fNODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (double version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
dNODE_QUEUE *dcreatequeue(double value){
  dNODE_QUEUE *front=memalloc(sizeof(dNODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}

/**
 * Creates a queue with the specified element (long double version)
 * @param value the value be the front of the list
 * @return the address of the front
 */
ldNODE_QUEUE *ldcreatequeue(long double value){
  ldNODE_QUEUE *front=memalloc(sizeof(ldNODE_QUEUE));
  front->data=value;
  front->previous=NULL;
  return front;
}
//----------------------------- Enqueue -----------------------------//
/**
 * Enqueues the specfied element to the back of the queue (char version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void cenqueue(cNODE_QUEUE **front,char value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  cNODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  cNODE_QUEUE *newBack=ccreatequeue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (int8_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void i8enqueue(i8NODE_QUEUE **front,int8_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  i8NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  i8NODE_QUEUE *newBack=i8createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (int16_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void i16enqueue(i16NODE_QUEUE **front,int16_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  i16NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  i16NODE_QUEUE *newBack=i16createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (int32_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void i32enqueue(i32NODE_QUEUE **front,int32_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  i32NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  i32NODE_QUEUE *newBack=i32createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (int64_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void i64enqueue(i64NODE_QUEUE **front,int64_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  i64NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  i64NODE_QUEUE *newBack=i64createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (uint8_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void ui8enqueue(ui8NODE_QUEUE **front,uint8_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  ui8NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  ui8NODE_QUEUE *newBack=ui8createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (uint16_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void ui16enqueue(ui16NODE_QUEUE **front,uint16_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  ui16NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  ui16NODE_QUEUE *newBack=ui16createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (uint32_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void ui32enqueue(ui32NODE_QUEUE **front,uint32_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  ui32NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  ui32NODE_QUEUE *newBack=ui32createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (uint64_t version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void ui64enqueue(ui64NODE_QUEUE **front,uint64_t value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  ui64NODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  ui64NODE_QUEUE *newBack=ui64createqueue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (float version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void fenqueue(fNODE_QUEUE **front,float value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  fNODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  fNODE_QUEUE *newBack=fcreatequeue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (double version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void denqueue(dNODE_QUEUE **front,double value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  dNODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  dNODE_QUEUE *newBack=dcreatequeue(value);
  temp->previous=newBack;
}

/**
 * Enqueues the specfied element to the back of the queue (long double version)
 * @param **front the address of the address of the front of the queue
 * @param value the new value to enqueue into the queue
 */
void ldenqueue(ldNODE_QUEUE **front,long double value){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be enqueued\n");
    exit(EMPTY_QUEUE);
  }
  ldNODE_QUEUE *temp=*front;
  while(temp->previous!=NULL){
    temp=temp->previous;
  }
  ldNODE_QUEUE *newBack=ldcreatequeue(value);
  temp->previous=newBack;
}
//----------------------------- Dequeue -----------------------------//
/**
 * Dequeues the front element from the queue (char version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
char cdequeue(cNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  cNODE_QUEUE *temp=*front;
  *front=temp->previous;
  char tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (int8_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
int8_t i8dequeue(i8NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  i8NODE_QUEUE *temp=*front;
  *front=temp->previous;
  int8_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (int16_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
int16_t i16dequeue(i16NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  i16NODE_QUEUE *temp=*front;
  *front=temp->previous;
  int16_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (int32_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
int32_t i32dequeue(i32NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  i32NODE_QUEUE *temp=*front;
  *front=temp->previous;
  int32_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (int64_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
int64_t i64dequeue(i64NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  i64NODE_QUEUE *temp=*front;
  *front=temp->previous;
  int64_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (uint8_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
uint8_t ui8dequeue(ui8NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  ui8NODE_QUEUE *temp=*front;
  *front=temp->previous;
  uint8_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (uint16_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
uint16_t ui16dequeue(ui16NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  ui16NODE_QUEUE *temp=*front;
  *front=temp->previous;
  uint16_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (uint32_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
uint32_t ui32dequeue(ui32NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  ui32NODE_QUEUE *temp=*front;
  *front=temp->previous;
  uint32_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (uint64_t version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
uint64_t ui64dequeue(ui64NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  ui64NODE_QUEUE *temp=*front;
  *front=temp->previous;
  uint64_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (float version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
float fdequeue(fNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  fNODE_QUEUE *temp=*front;
  *front=temp->previous;
  float tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (double version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
double ddequeue(dNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  dNODE_QUEUE *temp=*front;
  *front=temp->previous;
  double tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Dequeues the front element from the queue (long double version)
 * @param **front the address of the address of the front
 * @return the dequeued element
 */
long double lddequeue(ldNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, thus can't be dequeued\n");
    exit(EMPTY_QUEUE);
  }
  ldNODE_QUEUE *temp=*front;
  *front=temp->previous;
  long double tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}
//----------------------------- Free the whole queue -----------------------------//
/**
 * Dequeues and frees the whole queue (char version)
 * @param **front the address of the address of the front
 */
void cfreequeue(cNODE_QUEUE **front){
  while(*front!=NULL){
    cdequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (int8_t version)
 * @param **front the address of the address of the front
 */
void i8freequeue(i8NODE_QUEUE **front){
  while(*front!=NULL){
    i8dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (int16_t version)
 * @param **front the address of the address of the front
 */
void i16freequeue(i16NODE_QUEUE **front){
  while(*front!=NULL){
    i16dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (int32_t version)
 * @param **front the address of the address of the front
 */
void i32freequeue(i32NODE_QUEUE **front){
  while(*front!=NULL){
    i32dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (int64_t version)
 * @param **front the address of the address of the front
 */
void i64freequeue(i64NODE_QUEUE **front){
  while(*front!=NULL){
    i64dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (uint8_t version)
 * @param **front the address of the address of the front
 */
void ui8freequeue(ui8NODE_QUEUE **front){
  while(*front!=NULL){
    ui8dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (uint16_t version)
 * @param **front the address of the address of the front
 */
void ui16freequeue(ui16NODE_QUEUE **front){
  while(*front!=NULL){
    ui16dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (uint32_t version)
 * @param **front the address of the address of the front
 */
void ui32freequeue(ui32NODE_QUEUE **front){
  while(*front!=NULL){
    ui32dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (uint64_t version)
 * @param **front the address of the address of the front
 */
void ui64freequeue(ui64NODE_QUEUE **front){
  while(*front!=NULL){
    ui64dequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (float version)
 * @param **front the address of the address of the front
 */
void ffreequeue(fNODE_QUEUE **front){
  while(*front!=NULL){
    fdequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (double version)
 * @param **front the address of the address of the front
 */
void dfreequeue(dNODE_QUEUE **front){
  while(*front!=NULL){
    ddequeue(front);
  }
}

/**
 * Dequeues and frees the whole queue (long double version)
 * @param **front the address of the address of the front
 */
void ldfreequeue(ldNODE_QUEUE **front){
  while(*front!=NULL){
    lddequeue(front);
  }
}
//----------------------------- Peek -----------------------------//
/**
 * Gets the front element of the queue (char version)
 * @param **front the address of the address of the front
 * @return the front element
 */
char cpeekqueue(cNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (int8_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
int8_t i8peekqueue(i8NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (int16_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
int16_t i16peekqueue(i16NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (int32_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
int32_t i32peekqueue(i32NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (int64_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
int64_t i64peekqueue(i64NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (uint8_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
uint8_t ui8peekqueue(ui8NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (uint16_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
uint16_t ui16peekqueue(ui16NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (uint32_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
uint32_t ui32peekqueue(ui32NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (uint64_t version)
 * @param **front the address of the address of the front
 * @return the front element
 */
uint64_t ui64peekqueue(ui64NODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (float version)
 * @param **front the address of the address of the front
 * @return the front element
 */
float fpeekqueue(fNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (double version)
 * @param **front the address of the address of the front
 * @return the front element
 */
double dpeekqueue(dNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}

/**
 * Gets the front element of the queue (long double version)
 * @param **front the address of the address of the front
 * @return the front element
 */
long double ldpeekqueue(ldNODE_QUEUE **front){
  if(*front==NULL){
    fprintf(stderr,"The queue is empty, and thus cannot be peeked!\n");
    exit(EMPTY_QUEUE);
  }
  return (*front)->data;
}