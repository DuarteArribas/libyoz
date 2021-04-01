#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>
#include"linkedlist.h"
int main(void){
  i8NODE *head=i8createLinked(0);
  for(size_t i=50;i<=60;i++){
    i8eappendlinked(head,i);
  }
  i8printlinked(head,1);
  for(size_t i=50;i<=60;i++){
    i8sappendlinked(&head,i);
  }
  i8appendlinked(&head,69,1);
  i8printlinked(head,1);
  printf("%zu\n",i8linkedlength(head));
  printf("%"PRId64"\n",i8lsearchlinked(head,50));
  i8printlinked(head,1);
  printf("%"PRId8"\n",i8sremovelinked(&head));
  printf("%"PRId8"\n",i8eremovelinked(head));
  printf("%"PRId8"\n",i8removelinked(&head,10));
  i8printlinked(head,1);
  i8freelinked(head);
  return 0;
}