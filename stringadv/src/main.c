#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"stringadv.h"
#include"mem.h"
int main(void){
  size_t massaSize=1;
  char *arroz="henistein:yoznacks:amrmorgado:brunex";
  char **massa=split(arroz,":",&massaSize);
  for(size_t i=0;i<massaSize;i++){
    printf("%s\n",massa[i]);  
  }
  char *rice=join("->",massaSize,massa);
  printf("%s\n",rice);
  freeSplit(massaSize,massa);
  freeJoin(rice);
}