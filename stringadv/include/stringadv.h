#include<inttypes.h>
#ifndef STRINGADV_H
#define STRINGADV_H
//split
char **split(const char *string,const char *delimeter,size_t *splitArraySize);
void freeSplit(const size_t splitStringSize,char **splitString);
//join
char *join(const char *delimeter,const size_t arraySize,char **array);
void freeJoin(char *joinedString);
#endif