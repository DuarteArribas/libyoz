#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>
#include"queue.h"
int main(void){
  i8NODE_QUEUE *front=i8createqueue(0);
  for(size_t i=50;i<=60;i++){
    i8enqueue(&front,i);
  }
  for(size_t i=50;i<=60;i++){
    printf("%"PRId8"\n",i8dequeue(&front));
  }
  i8freequeue(&front);
  return 0;
}