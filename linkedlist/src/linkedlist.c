#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<inttypes.h>
#include"linkedlist.h"
#include"mem.h"

/************************************************************************

@title linkedlist
@author Duarte Arribas
@description Library that contains several operations for linked lists.

************************************************************************/

//----------------------------- Create head -----------------------------//
/**
 * Creates a linked list with the specified element (char version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
cNODE *ccreateLinked(char value){
  cNODE *head=memalloc(sizeof(cNODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (int8_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
i8NODE *i8createLinked(int8_t value){
  i8NODE *head=memalloc(sizeof(i8NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (int16_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
i16NODE *i16createLinked(int16_t value){
  i16NODE *head=memalloc(sizeof(i16NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (int32_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
i32NODE *i32createLinked(int32_t value){
  i32NODE *head=memalloc(sizeof(i32NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (int64_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
i64NODE *i64createLinked(int64_t value){
  i64NODE *head=memalloc(sizeof(i64NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (uint8_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
ui8NODE *ui8createLinked(uint8_t value){
  ui8NODE *head=memalloc(sizeof(ui8NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (uint16_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
ui16NODE *ui16createLinked(uint16_t value){
  ui16NODE *head=memalloc(sizeof(ui16NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (uint32_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
ui32NODE *ui32createLinked(uint32_t value){
  ui32NODE *head=memalloc(sizeof(ui32NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (uint64_t version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
ui64NODE *ui64createLinked(uint64_t value){
  ui64NODE *head=memalloc(sizeof(ui64NODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (float version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
fNODE *fcreateLinked(float value){
  fNODE *head=memalloc(sizeof(fNODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (double version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
dNODE *dcreateLinked(double value){
  dNODE *head=memalloc(sizeof(dNODE));
  head->data=value;
  head->next=NULL;
  return head;
}

/**
 * Creates a linked list with the specified element (long double version)
 * @param value the value to add to the head of the list
 * @return the address of the head
 */
ldNODE *ldcreateLinked(long double value){
  ldNODE *head=memalloc(sizeof(ldNODE));
  head->data=value;
  head->next=NULL;
  return head;
}

//----------------------------- Clean the whole list -----------------------------//
/**
 * Cleans the whole list, freeing the memory. (char version)
 * @param *head the address of the head
 */
void cfreelinked(cNODE *head){
  cNODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (int8_t version)
 * @param *head the address of the head
 */
void i8freelinked(i8NODE *head){
  i8NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (int16_t version)
 * @param *head the address of the head
 */
void i16freelinked(i16NODE *head){
  i16NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (int32_t version)
 * @param *head the address of the head
 */
void i32freelinked(i32NODE *head){
  i32NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (int64_t version)
 * @param *head the address of the head
 */
void i64freelinked(i64NODE *head){
  i64NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (uint8_t version)
 * @param *head the address of the head
 */
void ui8freelinked(ui8NODE *head){
  ui8NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (uint16_t version)
 * @param *head the address of the head
 */
void ui16freelinked(ui16NODE *head){
  ui16NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (uint32_t version)
 * @param *head the address of the head
 */
void ui32freelinked(ui32NODE *head){
  ui32NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (uint64_t version)
 * @param *head the address of the head
 */
void ui64freelinked(ui64NODE *head){
  ui64NODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (float version)
 * @param *head the address of the head
 */
void ffreelinked(fNODE *head){
  fNODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (double version)
 * @param *head the address of the head
 */
void dfreelinked(dNODE *head){
  dNODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

/**
 * Cleans the whole list, freeing the memory. (long double version)
 * @param *head the address of the head
 */
void ldfreelinked(ldNODE *head){
  ldNODE *temp=head;
  while(head!=NULL){
    temp=head->next;
    clnmem(head);
    head=temp;
  }
}

//----------------------------- Print list -----------------------------//
/**
 * Prints the list by the following type (char version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically, 3 to print as string
 */
void cprintlinked(cNODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%c,",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%c\n",head->data);
        head=head->next;
      }
      break;
    case 3:
      while(head!=NULL){
        printf("%c",head->data);
        head=head->next;
      }
      printf("\n");
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (int8_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void i8printlinked(i8NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRId8",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRId8"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (int16_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void i16printlinked(i16NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRId16",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRId16"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (int32_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void i32printlinked(i32NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRId32",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRId32"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (int64_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void i64printlinked(i64NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRId64",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRId64"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (uint8_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void ui8printlinked(ui8NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRIu8",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRIu8"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (uint16_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void ui16printlinked(ui16NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRIu16",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRIu16"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (uint32_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void ui32printlinked(ui32NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRIu32",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRIu32"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (uint64_t version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void ui64printlinked(ui64NODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%"PRIu64",",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%"PRIu64"\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (float version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void fprintlinked(fNODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%f,",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%f\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (double version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void dprintlinked(dNODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%lf,",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%lf\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}

/**
 * Prints the list by the following type (long double version)
 * @param *head the address of the head
 * @param type 1 to print horizontally as an array, 2 to print vertically
 */
void ldprintlinked(ldNODE *head,size_t type){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  switch(type){
    case 1:
      printf("[");
      while(head!=NULL){
        printf("%LF,",head->data);
        head=head->next;
      }
      printf("\b]\n");
      break;
    case 2:
      while(head!=NULL){
        printf("%LF\n",head->data);
        head=head->next;
      }
      break;
    default:
      printf("ERROR: Wrong print type.\n");
      break;
  }
}
//----------------------------- Length -----------------------------//
/**
 * Gets the length of a linked list (char version)
 * @param *head the address of the head
 */
size_t clinkedlength(cNODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (int8_t version)
 * @param *head the address of the head
 */
size_t i8linkedlength(i8NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (int16_t version)
 * @param *head the address of the head
 */
size_t i16linkedlength(i16NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (int32_t version)
 * @param *head the address of the head
 */
size_t i32linkedlength(i32NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (int64_t version)
 * @param *head the address of the head
 */
size_t i64linkedlength(i64NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (uint8_t version)
 * @param *head the address of the head
 */
size_t ui8linkedlength(ui8NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (uint16_t version)
 * @param *head the address of the head
 */
size_t ui16linkedlength(ui16NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (uint32_t version)
 * @param *head the address of the head
 */
size_t ui32linkedlength(ui32NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (uint64_t version)
 * @param *head the address of the head
 */
size_t ui64linkedlength(ui64NODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (float version)
 * @param *head the address of the head
 */
size_t flinkedlength(fNODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (double version)
 * @param *head the address of the head
 */
size_t dlinkedlength(dNODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}

/**
 * Gets the length of a linked list (long double version)
 * @param *head the address of the head
 */
size_t ldlinkedlength(ldNODE *head){
  if(head==NULL){
    return 0;
  }
  size_t count=0;
  while(head!=NULL){
    ++count;
    head=head->next;
  }
  return count;
}
//----------------------------- Search -----------------------------//
/**
 * Searches for the specified value in the linked list (char version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t clsearchlinked(cNODE *head,char value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (int8_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t i8lsearchlinked(i8NODE *head,int8_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (int16_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t i16lsearchlinked(i16NODE *head,int16_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (int32_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t i32lsearchlinked(i32NODE *head,int32_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (int64_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t i64lsearchlinked(i64NODE *head,int64_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (uint8_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t ui8lsearchlinked(ui8NODE *head,uint8_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (uint16_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t ui16lsearchlinked(ui16NODE *head,uint16_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (uint32_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t ui32lsearchlinked(ui32NODE *head,uint32_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (uint64_t version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t ui64lsearchlinked(ui64NODE *head,uint64_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (float version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t flsearchlinked(fNODE *head,float value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (double version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t dlsearchlinked(dNODE *head,double value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}

/**
 * Searches for the specified value in the linked list (long double version)
 * @param *head the address of the head
 * @param value the value to append
 * @return the index of the value in the linked list or -1 otherwise.
 */
int64_t ldlsearchlinked(ldNODE *head,long double value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  int64_t count=0;
  while(head!=NULL){
    if(head->data==value){
      return count;
    }
    head=head->next;
    ++count;
  }
  return -1;
}
//----------------------------- Append -----------------------------//
//--------------- Start ---------------
/**
 * Append element at the start of the list (char version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void csappendlinked(cNODE **head,char value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  cNODE *newElement=memalloc(sizeof(cNODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (int8_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void i8sappendlinked(i8NODE **head,int8_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i8NODE *newElement=memalloc(sizeof(i8NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (int16_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void i16sappendlinked(i16NODE **head,int16_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i16NODE *newElement=memalloc(sizeof(i16NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (int32_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void i32sappendlinked(i32NODE **head,int32_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i32NODE *newElement=memalloc(sizeof(i32NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (int64_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void i64sappendlinked(i64NODE **head,int64_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i64NODE *newElement=memalloc(sizeof(i64NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (uint8_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void ui8sappendlinked(ui8NODE **head,uint8_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui8NODE *newElement=memalloc(sizeof(ui8NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (uint16_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void ui16sappendlinked(ui16NODE **head,uint16_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui16NODE *newElement=memalloc(sizeof(ui16NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (uint32_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void ui32sappendlinked(ui32NODE **head,uint32_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui32NODE *newElement=memalloc(sizeof(ui32NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (uint64_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void ui64sappendlinked(ui64NODE **head,uint64_t value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui64NODE *newElement=memalloc(sizeof(ui64NODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (float version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void fsappendlinked(fNODE **head,float value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  fNODE *newElement=memalloc(sizeof(fNODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (double version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void dsappendlinked(dNODE **head,double value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  dNODE *newElement=memalloc(sizeof(dNODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}

/**
 * Append element at the start of the list (long double version)
 * @param **head the address of the address of the head
 * @param value the value to append
 */
void ldsappendlinked(ldNODE **head,long double value){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ldNODE *newElement=memalloc(sizeof(ldNODE));
  newElement->data=value;
  newElement->next=*head;
  *head=newElement;
}
//--------------- End ---------------
/**
 * Append element at the end of the list (char version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ceappendlinked(cNODE *head,char value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  cNODE *newElement=memalloc(sizeof(cNODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (int8_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void i8eappendlinked(i8NODE *head,int8_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  i8NODE *newElement=memalloc(sizeof(i8NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (int16_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void i16eappendlinked(i16NODE *head,int16_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  i16NODE *newElement=memalloc(sizeof(i16NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (int32_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void i32eappendlinked(i32NODE *head,int32_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  i32NODE *newElement=memalloc(sizeof(i32NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (int64_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void i64eappendlinked(i64NODE *head,int64_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  i64NODE *newElement=memalloc(sizeof(i64NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (uint8_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ui8eappendlinked(ui8NODE *head,uint8_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  ui8NODE *newElement=memalloc(sizeof(ui8NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (uint16_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ui16eappendlinked(ui16NODE *head,uint16_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  ui16NODE *newElement=memalloc(sizeof(ui16NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (uint32_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ui32eappendlinked(ui32NODE *head,uint32_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  ui32NODE *newElement=memalloc(sizeof(ui32NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (uint64_t version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ui64eappendlinked(ui64NODE *head,uint64_t value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  ui64NODE *newElement=memalloc(sizeof(ui64NODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (float version)
 * @param *head the address of the head
 * @param value the value to append
 */
void feappendlinked(fNODE *head,float value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  fNODE *newElement=memalloc(sizeof(fNODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (double version)
 * @param *head the address of the head
 * @param value the value to append
 */
void deappendlinked(dNODE *head,double value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  dNODE *newElement=memalloc(sizeof(dNODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

/**
 * Append element at the end of the list (long double version)
 * @param *head the address of the head
 * @param value the value to append
 */
void ldeappendlinked(ldNODE *head,long double value){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  while(head!=NULL){
    if(head->next==NULL){
      break;
    }
    head=head->next;
  }
  ldNODE *newElement=memalloc(sizeof(ldNODE));
  newElement->data=value;
  newElement->next=NULL;
  head->next=newElement;
}

//--------------- Index ---------------
/**
 * Append element at a certain index (char version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void cappendlinked(cNODE **head,char value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>clinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    csappendlinked(head,value);
    return;
  }
  cNODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  cNODE *newElement=memalloc(sizeof(cNODE));
  newElement->data=value;
  cNODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (int8_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void i8appendlinked(i8NODE **head,int8_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>i8linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    i8sappendlinked(head,value);
    return;
  }
  i8NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  i8NODE *newElement=memalloc(sizeof(i8NODE));
  newElement->data=value;
  i8NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (int16_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void i16appendlinked(i16NODE **head,int16_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>i16linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    i16sappendlinked(head,value);
    return;
  }
  i16NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  i16NODE *newElement=memalloc(sizeof(i16NODE));
  newElement->data=value;
  i16NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (int32_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void i32appendlinked(i32NODE **head,int32_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>i32linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    i32sappendlinked(head,value);
    return;
  }
  i32NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  i32NODE *newElement=memalloc(sizeof(i32NODE));
  newElement->data=value;
  i32NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (int64_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void i64appendlinked(i64NODE **head,int64_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>i64linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    i64sappendlinked(head,value);
    return;
  }
  i64NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  i64NODE *newElement=memalloc(sizeof(i64NODE));
  newElement->data=value;
  i64NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (uint8_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void ui8appendlinked(ui8NODE **head,uint8_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>ui8linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    ui8sappendlinked(head,value);
    return;
  }
  ui8NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  ui8NODE *newElement=memalloc(sizeof(ui8NODE));
  newElement->data=value;
  ui8NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (uint16_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void ui16appendlinked(ui16NODE **head,uint16_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>ui16linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    ui16sappendlinked(head,value);
    return;
  }
  ui16NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  ui16NODE *newElement=memalloc(sizeof(ui16NODE));
  newElement->data=value;
  ui16NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (uint32_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void ui32appendlinked(ui32NODE **head,uint32_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>ui32linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    ui32sappendlinked(head,value);
    return;
  }
  ui32NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  ui32NODE *newElement=memalloc(sizeof(ui32NODE));
  newElement->data=value;
  ui32NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (uint64_t version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void ui64appendlinked(ui64NODE **head,uint64_t value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>ui64linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    ui64sappendlinked(head,value);
    return;
  }
  ui64NODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  ui64NODE *newElement=memalloc(sizeof(ui64NODE));
  newElement->data=value;
  ui64NODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (float version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void fappendlinked(fNODE **head,float value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>flinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    fsappendlinked(head,value);
    return;
  }
  fNODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  fNODE *newElement=memalloc(sizeof(fNODE));
  newElement->data=value;
  fNODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (double version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void dappendlinked(dNODE **head,double value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>dlinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    dsappendlinked(head,value);
    return;
  }
  dNODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  dNODE *newElement=memalloc(sizeof(dNODE));
  newElement->data=value;
  dNODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}

/**
 * Append element at a certain index (long double version)
 * @param **head the address of the address of the head
 * @param value the value to append
 * @param index the index to append at
 */
void ldappendlinked(ldNODE **head,long double value,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index>ldlinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to append to!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    ldsappendlinked(head,value);
    return;
  }
  ldNODE *headtemp=*head;
  while(index-->1){
    headtemp=headtemp->next;
  }
  ldNODE *newElement=memalloc(sizeof(ldNODE));
  newElement->data=value;
  ldNODE *temp=headtemp->next;
  newElement->next=temp;
  headtemp->next=newElement;
}
//----------------------------- Remove -----------------------------//
//--------------- Start ---------------
/**
 * Remove the element at start position (char version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
char csremovelinked(cNODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  cNODE *temp=*head;
  *head=temp->next;
  char valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (int8_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int8_t i8sremovelinked(i8NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i8NODE *temp=*head;
  *head=temp->next;
  int8_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (int16_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int16_t i16sremovelinked(i16NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i16NODE *temp=*head;
  *head=temp->next;
  int16_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (int32_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int32_t i32sremovelinked(i32NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i32NODE *temp=*head;
  *head=temp->next;
  int32_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (int64_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int64_t i64sremovelinked(i64NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i64NODE *temp=*head;
  *head=temp->next;
  int64_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (uint8_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint8_t ui8sremovelinked(ui8NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui8NODE *temp=*head;
  *head=temp->next;
  uint8_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (uint16_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint16_t ui16sremovelinked(ui16NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui16NODE *temp=*head;
  *head=temp->next;
  uint16_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (uint32_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint32_t ui32sremovelinked(ui32NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui32NODE *temp=*head;
  *head=temp->next;
  uint32_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (uint64_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint64_t ui64sremovelinked(ui64NODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui64NODE *temp=*head;
  *head=temp->next;
  uint64_t valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (float version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
float fsremovelinked(fNODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  fNODE *temp=*head;
  *head=temp->next;
  float valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (double version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
double dsremovelinked(dNODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  dNODE *temp=*head;
  *head=temp->next;
  double valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at start position (long double version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
long double ldsremovelinked(ldNODE **head){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ldNODE *temp=*head;
  *head=temp->next;
  long double valueRemoved=temp->data;
  clnmem(temp);
  return valueRemoved;
}

//--------------- End ---------------
/**
 * Remove the element at the end position (char version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
char ceremovelinked(cNODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  cNODE *temp;
  if(head->next==NULL){
    char valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  char valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (int8_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int8_t i8eremovelinked(i8NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i8NODE *temp;
  if(head->next==NULL){
    int8_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  int8_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (int16_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int16_t i16eremovelinked(i16NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i16NODE *temp;
  if(head->next==NULL){
    int16_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  int16_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (int32_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int32_t i32eremovelinked(i32NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i32NODE *temp;
  if(head->next==NULL){
    int32_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  int32_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (int64_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
int64_t i64eremovelinked(i64NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  i64NODE *temp;
  if(head->next==NULL){
    int64_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  int64_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (uint8_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint8_t ui8eremovelinked(ui8NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui8NODE *temp;
  if(head->next==NULL){
    uint8_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  uint8_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (uint16_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint16_t ui16eremovelinked(ui16NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui16NODE *temp;
  if(head->next==NULL){
    uint16_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  uint16_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (uint32_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint32_t ui32eremovelinked(ui32NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui32NODE *temp;
  if(head->next==NULL){
    uint32_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  uint32_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (uint64_t version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
uint64_t ui64eremovelinked(ui64NODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ui64NODE *temp;
  if(head->next==NULL){
    uint64_t valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  uint64_t valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (float version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
float feremovelinked(fNODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  fNODE *temp;
  if(head->next==NULL){
    float valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  float valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (double version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
double deremovelinked(dNODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  dNODE *temp;
  if(head->next==NULL){
    double valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  double valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}

/**
 * Remove the element at the end position (long double version)
 * @param **head the address of the address of the head
 * @return the value removed
 */
long double lderemovelinked(ldNODE *head){
  if(head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  ldNODE *temp;
  if(head->next==NULL){
    long double valueTemp=head->data;
    clnmem(head);
    return valueTemp;
  }
  while(head->next!=NULL){
    temp=head;
    head=head->next;
  }
  temp->next=NULL;
  long double valueRemoved=head->data;
  clnmem(head);
  return valueRemoved;
}
//--------------- Index ---------------
/**
 * Remove the element at the specified index (char version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
char cremovelinked(cNODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>clinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return csremovelinked(head);
  }
  cNODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  char valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (int8_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
int8_t i8removelinked(i8NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>i8linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return i8sremovelinked(head);
  }
  i8NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  int8_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (int16_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
int16_t i16removelinked(i16NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>i16linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return i16sremovelinked(head);
  }
  i16NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  int16_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (int32_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
int32_t i32removelinked(i32NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>i32linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return i32sremovelinked(head);
  }
  i32NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  int32_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (int64_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
int64_t i64removelinked(i64NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>i64linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return i64sremovelinked(head);
  }
  i64NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  int64_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (uint8_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
uint8_t ui8removelinked(ui8NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>ui8linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return ui8sremovelinked(head);
  }
  ui8NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  uint8_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (uint16_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
uint16_t ui16removelinked(ui16NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>ui16linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return ui16sremovelinked(head);
  }
  ui16NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  uint16_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (uint32_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
uint32_t ui32removelinked(ui32NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>ui32linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return ui32sremovelinked(head);
  }
  ui32NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  uint32_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (uint64_t version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
uint64_t ui64removelinked(ui64NODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>ui64linkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return ui64sremovelinked(head);
  }
  ui64NODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  uint64_t valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (float version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
float fremovelinked(fNODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>flinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return fsremovelinked(head);
  }
  fNODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  float valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (double version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
double dremovelinked(dNODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>dlinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return dsremovelinked(head);
  }
  dNODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  double valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}

/**
 * Remove the element at the specified index (long double version)
 * @param **head the address of the address of the head
 * @param index of the node to remove
 * @return the value removed
 */
long double ldremovelinked(ldNODE **head,size_t index){
  if(*head==NULL){
    fprintf(stderr,"ERROR: The list is empty!\n");
    exit(NULL_LIST);
  }
  if(index+1>ldlinkedlength(*head)){
    fprintf(stderr,"ERROR: Invalid index to remove!\n");
    exit(INVALID_INDEX);
  }
  if(index==0){
    return ldsremovelinked(head);
  }
  ldNODE *temp=*head,*temp2;
  for(;index>0;index--){
    temp2=temp;
    temp=temp->next;
  }
  long double valueRemoved=temp->data;
  temp2->next=temp->next;
  clnmem(temp);
  return valueRemoved;
}