#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<inttypes.h>
#include<string.h>
#include"stringadv.h"
#include"mem.h"

/************************************************************************

@title stringadv
@author Duarte Arribas
@description Library that contains several advanced operations on strings

************************************************************************/

//----------------------------- Split -----------------------------//
/**
 * Specified the state of the delimeter
 */
typedef enum{
  IN,
  OUT
}DELIMETER_STATE;

/**
 * Defines the size of the buffer of each string
 */
#define BUFFER_SIZE 4096

/**
 * Splits the given string into an array of strings by the specified delimeter
 * Requires a call to freeSplit in the end
 * Example: split("a1:b1:c1:d1:e1:f1:g1",":",&size)->[a1,b1,c1,d1,e1,f1,g1]
 * @param *string the string to be split
 * @param *delimeter the string to server as delimeter
 * @param *splitArraySize the initial size of the split array
 * @return the split array
 */
char **split(const char *string,const char *delimeter,size_t *splitArraySize){
  char **splitArray=memalloc(*splitArraySize*sizeof(char*));
  for(size_t i=0;i<*splitArraySize;i++){
    splitArray[i]=memalloc(BUFFER_SIZE*sizeof(char));
  }
  DELIMETER_STATE currState=OUT;
  size_t strMax=0,i=0;
  for(;i<strlen(string);i++){
    if(currState==OUT){
      if(string[i]==delimeter[0]){
        currState=IN;
      }  
    }
    if(currState==IN){
      bool belongsToString=true;
      size_t j,k;
      for(j=i,k=0;k<strlen(delimeter)&&j<strlen(string);j++,k++){
        if(string[j]!=delimeter[k]){
          belongsToString=false;
        }
      }
      if(!belongsToString){
        i+=strlen(delimeter)-2;
      }
      else{
        size_t m,n=0;
        char temp[BUFFER_SIZE];
        for(m=strMax;m<i;m++,n++){
          temp[n]=string[m];
        }
        temp[n]='\0';
        strcpy(splitArray[(*splitArraySize)-1],temp);
        ++(*splitArraySize);
        splitArray=realloc(splitArray,*splitArraySize*sizeof(char*));
        splitArray[*splitArraySize-1]=memalloc(BUFFER_SIZE*sizeof(char));
        strMax=m+strlen(delimeter);
        i+=strlen(delimeter)-1;
      }
      currState=OUT;
    }
  }
  if(i==strlen(string)){
    size_t m,n=0;
    char temp[BUFFER_SIZE];
    for(m=strMax;m<i;m++,n++){
      temp[n]=string[m];
    }
    temp[n]='\0';
    strcpy(splitArray[(*splitArraySize)-1],temp);
  }
  return splitArray;
}

/**
 * Defines the size of the buffer of the joined string
 */
#define JOIN_BUFFER 100000

/**
 * Joins all strings in an array using the specified delimeter
 * Requires a call to freeJoin in the end
 * Example: join("->",size,[a1,b1,c1,d1,e1,f1,g1])->"a1->b1->c1->d1->e1->f1->g1"
 * @param *delimeter the delimeter to join the strings together
 * @param arraySize the size of the array of strings
 * @param **array the array of strings
 * @return the joined string
 */
char *join(const char *delimeter,const size_t arraySize,char **array){
  char *str=memalloc(JOIN_BUFFER*sizeof(char));
  str[0]='\0';
  char strTemp[JOIN_BUFFER];
  for(size_t i=0;i<arraySize;i++){
    if(i!=0){
      strcat(strTemp,delimeter);
    }
    strcat(strTemp,array[i]);
  }
  strcat(str,strTemp);
  return str;
}

/**
 * Frees the split string array
 * @param splitStringSize the size of the split string array
 * @param **splitString the splitString array
 */
void freeSplit(const size_t splitStringSize,char **splitString){
  for(size_t i=0;i<splitStringSize;i++){
    clnmem(splitString[i]);
  }
  clnmem(splitString);
}

/**
 * Frees the joined string
 * @param *joinedString the joined string
 */
void freeJoin(char *joinedString){
  clnmem(joinedString);
}