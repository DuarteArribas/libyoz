#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<inttypes.h>
#include"stack.h"
#include"mem.h"

/************************************************************************

@title stack
@author Duarte Arribas
@description Library that contains several operations for stacks.

************************************************************************/

//----------------------------- Create top -----------------------------//
/**
 * Creates a stack with the specified element (char version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
cNODE_STACK *ccreatestack(char value){
  cNODE_STACK *top=memalloc(sizeof(cNODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (int8_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
i8NODE_STACK *i8createstack(int8_t value){
  i8NODE_STACK *top=memalloc(sizeof(i8NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (int16_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
i16NODE_STACK *i16createstack(int16_t value){
  i16NODE_STACK *top=memalloc(sizeof(i16NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (int32_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
i32NODE_STACK *i32createstack(int32_t value){
  i32NODE_STACK *top=memalloc(sizeof(i32NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (int64_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
i64NODE_STACK *i64createstack(int64_t value){
  i64NODE_STACK *top=memalloc(sizeof(i64NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (uint8_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
ui8NODE_STACK *ui8createstack(uint8_t value){
  ui8NODE_STACK *top=memalloc(sizeof(ui8NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (uint16_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
ui16NODE_STACK *ui16createstack(uint16_t value){
  ui16NODE_STACK *top=memalloc(sizeof(ui16NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (uint32_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
ui32NODE_STACK *ui32createstack(uint32_t value){
  ui32NODE_STACK *top=memalloc(sizeof(ui32NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (uint64_t version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
ui64NODE_STACK *ui64createstack(uint64_t value){
  ui64NODE_STACK *top=memalloc(sizeof(ui64NODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (float version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
fNODE_STACK *fcreatestack(float value){
  fNODE_STACK *top=memalloc(sizeof(fNODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (double version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
dNODE_STACK *dcreatestack(double value){
  dNODE_STACK *top=memalloc(sizeof(dNODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

/**
 * Creates a stack with the specified element (long double version)
 * @param value the value to add to the top of the list
 * @return the address of the top
 */
ldNODE_STACK *ldcreatestack(long double value){
  ldNODE_STACK *top=memalloc(sizeof(ldNODE_STACK));
  top->data=value;
  top->previous=NULL;
  return top;
}

//----------------------------- Push -----------------------------//
/**
 * Pushes the specfied element to the top of the stack (char version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void cpush(cNODE_STACK **top,char value){
  cNODE_STACK *newTop=ccreatestack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (int8_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void i8push(i8NODE_STACK **top,int8_t value){
  i8NODE_STACK *newTop=i8createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (int16_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void i16push(i16NODE_STACK **top,int16_t value){
  i16NODE_STACK *newTop=i16createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (int32_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void i32push(i32NODE_STACK **top,int32_t value){
  i32NODE_STACK *newTop=i32createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (int64_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void i64push(i64NODE_STACK **top,int64_t value){
  i64NODE_STACK *newTop=i64createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (uint8_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void ui8push(ui8NODE_STACK **top,uint8_t value){
  ui8NODE_STACK *newTop=ui8createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (uint16_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void ui16push(ui16NODE_STACK **top,uint16_t value){
  ui16NODE_STACK *newTop=ui16createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (uint32_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void ui32push(ui32NODE_STACK **top,uint32_t value){
  ui32NODE_STACK *newTop=ui32createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (uint64_t version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void ui64push(ui64NODE_STACK **top,uint64_t value){
  ui64NODE_STACK *newTop=ui64createstack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (float version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void fpush(fNODE_STACK **top,float value){
  fNODE_STACK *newTop=fcreatestack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (double version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void dpush(dNODE_STACK **top,double value){
  dNODE_STACK *newTop=dcreatestack(value);
  newTop->previous=*top;
  *top=newTop;
}

/**
 * Pushes the specfied element to the top of the stack (long double version)
 * @param **top the address of the address of the top of the stack
 * @param value the new value to push into the stack
 */
void ldpush(ldNODE_STACK **top,long double value){
  ldNODE_STACK *newTop=ldcreatestack(value);
  newTop->previous=*top;
  *top=newTop;
}
//----------------------------- Pop -----------------------------//
/**
 * Pops the top element from the stack (char version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
char cpop(cNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  cNODE_STACK *temp=*top;
  *top=temp->previous;
  char tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (int8_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
int8_t i8pop(i8NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  i8NODE_STACK *temp=*top;
  *top=temp->previous;
  int8_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (int16_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
int16_t i16pop(i16NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  i16NODE_STACK *temp=*top;
  *top=temp->previous;
  int16_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (int32_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
int32_t i32pop(i32NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  i32NODE_STACK *temp=*top;
  *top=temp->previous;
  int32_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (int64_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
int64_t i64pop(i64NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  i64NODE_STACK *temp=*top;
  *top=temp->previous;
  int64_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (uint8_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
uint8_t ui8pop(ui8NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  ui8NODE_STACK *temp=*top;
  *top=temp->previous;
  uint8_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (uint16_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
uint16_t ui16pop(ui16NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  ui16NODE_STACK *temp=*top;
  *top=temp->previous;
  uint16_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (uint32_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
uint32_t ui32pop(ui32NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  ui32NODE_STACK *temp=*top;
  *top=temp->previous;
  uint32_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (uint64_t version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
uint64_t ui64pop(ui64NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  ui64NODE_STACK *temp=*top;
  *top=temp->previous;
  uint64_t tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (float version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
float fpop(fNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  fNODE_STACK *temp=*top;
  *top=temp->previous;
  float tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (double version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
double dpop(dNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  dNODE_STACK *temp=*top;
  *top=temp->previous;
  double tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}

/**
 * Pops the top element from the stack (long double version)
 * @param **top the address of the address of the top
 * @return the popped element
 */
long double ldpop(ldNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be popped!\n");
    exit(EMPTY_STACK);
  }
  ldNODE_STACK *temp=*top;
  *top=temp->previous;
  long double tempNum=temp->data;
  clnmem(temp);
  return tempNum;
}
//----------------------------- Free the whole stack -----------------------------//
/**
 * Pops and frees the whole stack (char version)
 * @param **top the address of the address of the top
 */
void cfreestack(cNODE_STACK **top){
  while(*top!=NULL){
    cpop(top);
  }
}

/**
 * Pops and frees the whole stack (int8_t version)
 * @param **top the address of the address of the top
 */
void i8freestack(i8NODE_STACK **top){
  while(*top!=NULL){
    i8pop(top);
  }
}

/**
 * Pops and frees the whole stack (int16_t version)
 * @param **top the address of the address of the top
 */
void i16freestack(i16NODE_STACK **top){
  while(*top!=NULL){
    i16pop(top);
  }
}

/**
 * Pops and frees the whole stack (int32_t version)
 * @param **top the address of the address of the top
 */
void i32freestack(i32NODE_STACK **top){
  while(*top!=NULL){
    i32pop(top);
  }
}

/**
 * Pops and frees the whole stack (int64_t version)
 * @param **top the address of the address of the top
 */
void i64freestack(i64NODE_STACK **top){
  while(*top!=NULL){
    i64pop(top);
  }
}

/**
 * Pops and frees the whole stack (uint8_t version)
 * @param **top the address of the address of the top
 */
void ui8freestack(ui8NODE_STACK **top){
  while(*top!=NULL){
    ui8pop(top);
  }
}

/**
 * Pops and frees the whole stack (uint16_t version)
 * @param **top the address of the address of the top
 */
void ui16freestack(ui16NODE_STACK **top){
  while(*top!=NULL){
    ui16pop(top);
  }
}

/**
 * Pops and frees the whole stack (uint32_t version)
 * @param **top the address of the address of the top
 */
void ui32freestack(ui32NODE_STACK **top){
  while(*top!=NULL){
    ui32pop(top);
  }
}

/**
 * Pops and frees the whole stack (uint64_t version)
 * @param **top the address of the address of the top
 */
void ui64freestack(ui64NODE_STACK **top){
  while(*top!=NULL){
    ui64pop(top);
  }
}

/**
 * Pops and frees the whole stack (float version)
 * @param **top the address of the address of the top
 */
void ffreestack(fNODE_STACK **top){
  while(*top!=NULL){
    fpop(top);
  }
}

/**
 * Pops and frees the whole stack (double version)
 * @param **top the address of the address of the top
 */
void dfreestack(dNODE_STACK **top){
  while(*top!=NULL){
    dpop(top);
  }
}

/**
 * Pops and frees the whole stack (long double version)
 * @param **top the address of the address of the top
 */
void ldfreestack(ldNODE_STACK **top){
  while(*top!=NULL){
    ldpop(top);
  }
}
//----------------------------- Peek -----------------------------//
/**
 * Gets the top element of the stack (char version)
 * @param **top the address of the address of the top
 * @return the top element
 */
char cpeekstack(cNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (int8_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
int8_t i8peekstack(i8NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (int16_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
int16_t i16peekstack(i16NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (int32_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
int32_t i32peekstack(i32NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (int64_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
int64_t i64peekstack(i64NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (uint8_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
uint8_t ui8peekstack(ui8NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (uint16_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
uint16_t ui16peekstack(ui16NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (uint32_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
uint32_t ui32peekstack(ui32NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (uint64_t version)
 * @param **top the address of the address of the top
 * @return the top element
 */
uint64_t ui64peekstack(ui64NODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (float version)
 * @param **top the address of the address of the top
 * @return the top element
 */
float fpeekstack(fNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (double version)
 * @param **top the address of the address of the top
 * @return the top element
 */
double dpeekstack(dNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}

/**
 * Gets the top element of the stack (long double version)
 * @param **top the address of the address of the top
 * @return the top element
 */
long double ldpeekstack(ldNODE_STACK **top){
  if(*top==NULL){
    fprintf(stderr,"The stack is empty, and thus cannot be peeked!\n");
    exit(EMPTY_STACK);
  }
  return (*top)->data;
}