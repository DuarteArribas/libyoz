#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<inttypes.h>
#include<math.h>
#include"array.h"
#include"mem.h"

/******************************************************************

@title array
@author Duarte Arribas
@description Library that contains several operations for arrays.

******************************************************************/

//----------------------------- Copy -----------------------------//
/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (char version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ccopyArray(size_t srcSize,char *src,size_t destSize,char *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (int8_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void i8copyArray(size_t srcSize,int8_t *src,size_t destSize,int8_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (int16_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void i16copyArray(size_t srcSize,int16_t *src,size_t destSize,int16_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (int32_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void i32copyArray(size_t srcSize,int32_t *src,size_t destSize,int32_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (int64_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void i64copyArray(size_t srcSize,int64_t *src,size_t destSize,int64_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (uint8_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ui8copyArray(size_t srcSize,uint8_t *src,size_t destSize,uint8_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (uint16_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ui16copyArray(size_t srcSize,uint16_t *src,size_t destSize,uint16_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (uint32_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ui32copyArray(size_t srcSize,uint32_t *src,size_t destSize,uint32_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (uint64_t version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ui64copyArray(size_t srcSize,uint64_t *src,size_t destSize,uint64_t *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (float version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void fcopyArray(size_t srcSize,float *src,size_t destSize,float *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (double version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void dcopyArray(size_t srcSize,double *src,size_t destSize,double *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

/**
 * Copies the array src to the array dest, aborting the program
 * if the sizes of the arrays don't match. (long double version)
 * @param srcSize the size of the src array
 * @param *src the src array
 * @param destSize the size of the dest array
 * @param *dest the dest array
 */
void ldcopyArray(size_t srcSize,long double *src,size_t destSize,long double *dest){
  if(srcSize!=destSize){
    fprintf(stderr,"Could not copy arrays, because the sizes are not the same!\n");
    exit(ARRAY_COPY_ERROR);
  }
  for(size_t i=0;i<srcSize;i++){
    dest[i]=src[i];  
  }
}

//----------------------------- Print -----------------------------//
/**
 * Prints the specified array, according to the print type. (char version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally, 2 vertically and 3 as a word
 */
void cprintArray(size_t size,char *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%c]\n",array[i]);
        }
        else{
          printf("%c,",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%c\n",array[i]);  
      }
      break;
    case 3:
      for(size_t i=0;i<size;i++){
        printf("%c",array[i]);  
      }
      printf("\n");
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=3\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (int8_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void i8printArray(size_t size,int8_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRId8"]\n",array[i]);
        }
        else{
          printf("%"PRId8",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRId8"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (int16_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void i16printArray(size_t size,int16_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRId16"]\n",array[i]);
        }
        else{
          printf("%"PRId16",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRId16"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (int32_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void i32printArray(size_t size,int32_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRId32"]\n",array[i]);
        }
        else{
          printf("%"PRId32",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRId32"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (int64_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void i64printArray(size_t size,int64_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRId64"]\n",array[i]);
        }
        else{
          printf("%"PRId64",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRId64"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (uint8_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void ui8printArray(size_t size,uint8_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRIu8"]\n",array[i]);
        }
        else{
          printf("%"PRIu8",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRIu8"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (uint16_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void ui16printArray(size_t size,uint16_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRIu16"]\n",array[i]);
        }
        else{
          printf("%"PRIu16",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRIu16"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (uint32_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void ui32printArray(size_t size,uint32_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRIu32"]\n",array[i]);
        }
        else{
          printf("%"PRIu32",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRIu32"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (uint64_t version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void ui64printArray(size_t size,uint64_t *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%"PRIu64"]\n",array[i]);
        }
        else{
          printf("%"PRIu64",",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%"PRIu64"\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (float version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void fprintArray(size_t size,float *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%f]\n",array[i]);
        }
        else{
          printf("%f,",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%f\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (double version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void dprintArray(size_t size,double *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%lf]\n",array[i]);
        }
        else{
          printf("%lf,",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%lf\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

/**
 * Prints the specified array, according to the print type. (long double version)
 * @param size the size of the array
 * @param array the array to print
 * @param type the print type. 1 prints the array horizontally and 2 vertically
 */
void ldprintArray(size_t size,long double *array,size_t type){
  switch(type){
    case 1:
      printf("[");
      for(size_t i=0;i<size;i++){
        if(i==size-1){
          printf("%LF]\n",array[i]);
        }
        else{
          printf("%LF,",array[i]); 
        }
      }
      break;
    case 2:
      for(size_t i=0;i<size;i++){
        printf("%LF\n",array[i]);  
      }
      break;
    default:
      fprintf(stderr,"Error printing array. Type range: 1<=type<=2\n");
      exit(PRINT_TYPE_ERROR);
      break;
  }
}

//----------------------------- Shift -----------------------------//
static void cshiftRight(size_t size,char *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void i8shiftRight(size_t size,int8_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void i16shiftRight(size_t size,int16_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void i32shiftRight(size_t size,int32_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void i64shiftRight(size_t size,int64_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void ui8shiftRight(size_t size,uint8_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void ui16shiftRight(size_t size,uint16_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void ui32shiftRight(size_t size,uint32_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void ui64shiftRight(size_t size,uint64_t *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void fshiftRight(size_t size,float *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void dshiftRight(size_t size,double *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void ldshiftRight(size_t size,long double *array,size_t index){
  for(size_t i=size-1;i>index;--i){
    array[i]=array[i-1];
  }
}

static void cshiftLeft(size_t size,char *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void i8shiftLeft(size_t size,int8_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void i16shiftLeft(size_t size,int16_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void i32shiftLeft(size_t size,int32_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void i64shiftLeft(size_t size,int64_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void ui8shiftLeft(size_t size,uint8_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void ui16shiftLeft(size_t size,uint16_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void ui32shiftLeft(size_t size,uint32_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void ui64shiftLeft(size_t size,uint64_t *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void fshiftLeft(size_t size,float *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void dshiftLeft(size_t size,double *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}

static void ldshiftLeft(size_t size,long double *array,size_t index){
  for(size_t i=index;i<size-1;++i){
    array[i]=array[i+1];
  }
}
//----------------------------- Append -----------------------------//
//--------------- Start ---------------
/**
 * Appends a value at the start of the array, increasing its size by 1 (char version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void csappend(size_t *size,char **array,char value){
  *array=memreallocp(*array,size,sizeof(char));
  cshiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (int8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i8sappend(size_t *size,int8_t **array,int8_t value){
  *array=memreallocp(*array,size,sizeof(int8_t));
  i8shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (int16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i16sappend(size_t *size,int16_t **array,int16_t value){
  *array=memreallocp(*array,size,sizeof(int16_t));
  i16shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (int32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i32sappend(size_t *size,int32_t **array,int32_t value){
  *array=memreallocp(*array,size,sizeof(int32_t));
  i32shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (int64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i64sappend(size_t *size,int64_t **array,int64_t value){
  *array=memreallocp(*array,size,sizeof(int64_t));
  i64shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (uint8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui8sappend(size_t *size,uint8_t **array,uint8_t value){
  *array=memreallocp(*array,size,sizeof(uint8_t));
  ui8shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (uint16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui16sappend(size_t *size,uint16_t **array,uint16_t value){
  *array=memreallocp(*array,size,sizeof(uint16_t));
  ui16shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (uint32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui32sappend(size_t *size,uint32_t **array,uint32_t value){
  *array=memreallocp(*array,size,sizeof(uint32_t));
  ui32shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (uint64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui64sappend(size_t *size,uint64_t **array,uint64_t value){
  *array=memreallocp(*array,size,sizeof(uint64_t));
  ui64shiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (float version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void fsappend(size_t *size,float **array,float value){
  *array=memreallocp(*array,size,sizeof(float));
  fshiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void dsappend(size_t *size,double **array,double value){
  *array=memreallocp(*array,size,sizeof(double));
  dshiftRight(*size,*array,0);
  (*array)[0]=value;
}

/**
 * Appends a value at the start of the array, increasing its size by 1 (long double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ldsappend(size_t *size,long double **array,long double value){
  *array=memreallocp(*array,size,sizeof(long double));
  ldshiftRight(*size,*array,0);
  (*array)[0]=value;
}

//--------------- At specified Index ---------------
/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (char version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void cappend(size_t *size,char **array,char value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(char));
  cshiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (int8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void i8append(size_t *size,int8_t **array,int8_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(int8_t));
  i8shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (int16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void i16append(size_t *size,int16_t **array,int16_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(int16_t));
  i16shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (int32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void i32append(size_t *size,int32_t **array,int32_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(int32_t));
  i32shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (int64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void i64append(size_t *size,int64_t **array,int64_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(int64_t));
  i64shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (uint8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void ui8append(size_t *size,uint8_t **array,uint8_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(uint8_t));
  ui8shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (uint16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void ui16append(size_t *size,uint16_t **array,uint16_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(uint16_t));
  ui16shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (uint32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void ui32append(size_t *size,uint32_t **array,uint32_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(uint32_t));
  ui32shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (uint64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void ui64append(size_t *size,uint64_t **array,uint64_t value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(uint64_t));
  ui64shiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (float version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void fappend(size_t *size,float **array,float value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(float));
  fshiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void dappend(size_t *size,double **array,double value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(double));
  dshiftRight(*size,*array,index);
  (*array)[index]=value;
}

/**
 * Appends a value at the specified index of the array, increasing 
 * its size by 1 (long double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 * @param index the index to append
 */
void ldappend(size_t *size,long double **array,long double value,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  *array=memreallocp(*array,size,sizeof(long double));
  ldshiftRight(*size,*array,index);
  (*array)[index]=value;
}
//--------------- End ---------------
/**
 * Appends a value at the end of the array, increasing its size by 1 (char version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ceappend(size_t *size,char **array,char value){
  *array=memreallocp(*array,size,sizeof(char));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (int8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i8eappend(size_t *size,int8_t **array,int8_t value){
  *array=memreallocp(*array,size,sizeof(int8_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (int16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i16eappend(size_t *size,int16_t **array,int16_t value){
  *array=memreallocp(*array,size,sizeof(int16_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (int32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i32eappend(size_t *size,int32_t **array,int32_t value){
  *array=memreallocp(*array,size,sizeof(int32_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (int64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void i64eappend(size_t *size,int64_t **array,int64_t value){
  *array=memreallocp(*array,size,sizeof(int64_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (uint8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui8eappend(size_t *size,uint8_t **array,uint8_t value){
  *array=memreallocp(*array,size,sizeof(uint8_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (uint16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui16eappend(size_t *size,uint16_t **array,uint16_t value){
  *array=memreallocp(*array,size,sizeof(uint16_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (uint32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui32eappend(size_t *size,uint32_t **array,uint32_t value){
  *array=memreallocp(*array,size,sizeof(uint32_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (uint64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ui64eappend(size_t *size,uint64_t **array,uint64_t value){
  *array=memreallocp(*array,size,sizeof(uint64_t));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (float version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void feappend(size_t *size,float **array,float value){
  *array=memreallocp(*array,size,sizeof(float));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void deappend(size_t *size,double **array,double value){
  *array=memreallocp(*array,size,sizeof(double));
  (*array)[*size-1]=value;
}

/**
 * Appends a value at the end of the array, increasing its size by 1 (long double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param value the value to append
 */
void ldeappend(size_t *size,long double **array,long double value){
  *array=memreallocp(*array,size,sizeof(long double));
  (*array)[*size-1]=value;
}

//----------------------------- Remove -----------------------------//
/**
 * Removes the value at the specified index, decreasing its size by 1 (char version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
char cremove(size_t *size,char **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  char poppedElement=(*array)[index];
  cshiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(char));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (int8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
int8_t i8remove(size_t *size,int8_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  int8_t poppedElement=(*array)[index];
  i8shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(int8_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (int16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
int16_t i16remove(size_t *size,int16_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  int16_t poppedElement=(*array)[index];
  i16shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(int16_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (int32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
int32_t i32remove(size_t *size,int32_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  int32_t poppedElement=(*array)[index];
  i32shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(int32_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (int64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
int64_t i64remove(size_t *size,int64_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  int64_t poppedElement=(*array)[index];
  i64shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(int64_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (uint8_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
uint8_t ui8remove(size_t *size,uint8_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  uint8_t poppedElement=(*array)[index];
  ui8shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(uint8_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (uint16_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
uint16_t ui16remove(size_t *size,uint16_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  uint16_t poppedElement=(*array)[index];
  ui16shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(uint16_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (uint32_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
uint32_t ui32remove(size_t *size,uint32_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  uint32_t poppedElement=(*array)[index];
  ui32shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(uint32_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (uint64_t version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
uint64_t ui64remove(size_t *size,uint64_t **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  uint64_t poppedElement=(*array)[index];
  ui64shiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(uint64_t));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (float version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
float fremove(size_t *size,float **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  float poppedElement=(*array)[index];
  fshiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(float));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
double dremove(size_t *size,double **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  double poppedElement=(*array)[index];
  dshiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(double));
  return poppedElement;
}

/**
 * Removes the value at the specified index, decreasing its size by 1 (long double version)
 * @param *size the size of the array
 * @param **array the array to append the value
 * @param index the index of the array to remove
 * @return the removed element
 */
long double ldremove(size_t *size,long double **array,size_t index){
  if(index>*size){
    fprintf(stderr,"Error: could not append to array, because index is invalid\n");
    exit(INVALID_INDEX);
  }
  long double poppedElement=(*array)[index];
  ldshiftLeft(*size,*array,index);
  *array=memreallocm(*array,size,sizeof(long double));
  return poppedElement;
}
//----------------------------- Sort -----------------------------//
/**
 * Sorts the array in ascending order (char version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void cisort(size_t size,char *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (int8_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void i8isort(size_t size,int8_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (int16_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void i16isort(size_t size,int16_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (int32_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void i32isort(size_t size,int32_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (int64_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void i64isort(size_t size,int64_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (uint8_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void ui8isort(size_t size,uint8_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (uint16_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void ui16isort(size_t size,uint16_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (uint32_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void ui32isort(size_t size,uint32_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (uint64_t version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void ui64isort(size_t size,uint64_t *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        array[currentIndex]^=array[j];
        array[j]^=array[currentIndex];
        array[currentIndex]^=array[j];
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (float version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void fisort(size_t size,float *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        float temp=array[j];
        array[j]=array[currentIndex];
        array[currentIndex]=temp;
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (double version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void disort(size_t size,double *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        double temp=array[j];
        array[j]=array[currentIndex];
        array[currentIndex]=temp;
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}

/**
 * Sorts the array in ascending order (long double version)
 * @param size the size of the array
 * @param *array the array to sort
 */
void ldisort(size_t size,long double *array){
  if(size==1){return;}
  register size_t currentIndex;
  for(register size_t i=1;i<size;++i){
    currentIndex=i;
    for(register int64_t j=i-1;j>=0;--j){
      if(array[currentIndex]<array[j]){
        long double temp=array[j];
        array[j]=array[currentIndex];
        array[currentIndex]=temp;
        --currentIndex;
      }
      else{
        break;
      }
    }
  }
}
//----------------------------- Searching -----------------------------//
/**
 * Searches the array for the given value. (char version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t clsearch(size_t size,char *array,char value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (int8_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t i8lsearch(size_t size,int8_t *array,int8_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (int16_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t i16lsearch(size_t size,int16_t *array,int16_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (int32_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t i32lsearch(size_t size,int32_t *array,int32_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (int64_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t i64lsearch(size_t size,int64_t *array,int64_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (uint8_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t ui8lsearch(size_t size,uint8_t *array,uint8_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (uint16_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t ui16lsearch(size_t size,uint16_t *array,uint16_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (uint32_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t ui32lsearch(size_t size,uint32_t *array,uint32_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (uint64_t version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t ui64lsearch(size_t size,uint64_t *array,uint64_t value){
  for(size_t i=0;i<size;i++){
    if(array[i]==value){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (float version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t flsearch(size_t size,float *array,float value){
  for(size_t i=0;i<size;i++){
    if(fabsf(array[i]-value)<0.01){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (double version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t dlsearch(size_t size,double *array,double value){
  for(size_t i=0;i<size;i++){
    if(fabs(array[i]-value)<0.01){
      return i;
    }
  }
  return -1;
}

/**
 * Searches the array for the given value. (long double version)
 * @param size the size of the array
 * @param *array the array to search
 * @param value the value to search for
 * @return the first index of value in the array or -1 if it doesn't exit
 */
int64_t ldlsearch(size_t size,long double *array,long double value){
  for(size_t i=0;i<size;i++){
    if(array[i]<=value){
      if(value-array[i]<0.01){
        return i;
      } 
    }
    else{
      if(array[i]-value<0.01){
        return i;
      } 
    }
  }
  return -1;
}