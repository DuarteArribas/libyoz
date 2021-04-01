#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>
#include"stack.h"
int main(void){
  cNODE_STACK *top=ccreatestack(0);
  for(size_t i=50;i<=60;i++){
    cpush(&top,i);
  }
  for(size_t i=50;i<=60;i++){
    printf("%c\n",cpop(&top));
  }

  cfreestack(&top);
  return 0;
}