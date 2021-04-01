#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include"array.h"
int main(void){
  size_t arraySize=10;
  long double *array2=malloc(arraySize*sizeof(long double));
  for(size_t i=0;i<arraySize;i++){
    array2[i]=i+49;  
  }
  ldprintArray(arraySize,array2,1);
  ldsappend(&arraySize,&array2,101);
  ldsappend(&arraySize,&array2,103);
  ldsappend(&arraySize,&array2,104);
  ldprintArray(arraySize,array2,1);
  ldappend(&arraySize,&array2,9,arraySize);
  ldprintArray(arraySize,array2,1);
  ldeappend(&arraySize,&array2,115);
  ldprintArray(arraySize,array2,1);
  ldremove(&arraySize,&array2,3);
  ldprintArray(arraySize,array2,1);
  ldisort(arraySize,array2);
  ldprintArray(arraySize,array2,1);
  printf("%"PRId64"\n",ldlsearch(arraySize,array2,11));
  free(array2);
  return 0;
}