#include<inttypes.h>
#ifndef STACK_H
#define STACK_H
#define EMPTY_STACK 6

typedef struct cNODE_STACK{
  char data;
  struct cNODE_STACK *previous;
}cNODE_STACK;

typedef struct i8NODE_STACK{
  int8_t data;
  struct i8NODE_STACK *previous;
}i8NODE_STACK;

typedef struct i16NODE_STACK{
  int16_t data;
  struct i16NODE_STACK *previous;
}i16NODE_STACK;

typedef struct i32NODE_STACK{
  int32_t data;
  struct i32NODE_STACK *previous;
}i32NODE_STACK;

typedef struct i64NODE_STACK{
  int64_t data;
  struct i64NODE_STACK *previous;
}i64NODE_STACK;

typedef struct ui8NODE_STACK{
  uint8_t data;
  struct ui8NODE_STACK *previous;
}ui8NODE_STACK;

typedef struct ui16NODE_STACK{
  uint16_t data;
  struct ui16NODE_STACK *previous;
}ui16NODE_STACK;

typedef struct ui32NODE_STACK{
  uint32_t data;
  struct ui32NODE_STACK *previous;
}ui32NODE_STACK;

typedef struct ui64NODE_STACK{
  uint64_t data;
  struct ui64NODE_STACK *previous;
}ui64NODE_STACK;

typedef struct fNODE_STACK{
  float data;
  struct fNODE_STACK *previous;
}fNODE_STACK;

typedef struct dNODE_STACK{
  double data;
  struct dNODE_STACK *previous;
}dNODE_STACK;

typedef struct ldNODE_STACK{
  long double data;
  struct ldNODE_STACK *previous;
}ldNODE_STACK;

//create top
cNODE_STACK *ccreatestack(char value);
i8NODE_STACK *i8createstack(int8_t value);
i16NODE_STACK *i16createstack(int16_t value);
i32NODE_STACK *i32createstack(int32_t value);
i64NODE_STACK *i64createstack(int64_t value);
ui8NODE_STACK *ui8createstack(uint8_t value);
ui16NODE_STACK *ui16createstack(uint16_t value);
ui32NODE_STACK *ui32createstack(uint32_t value);
ui64NODE_STACK *ui64createstack(uint64_t value);
fNODE_STACK *fcreatestack(float value);
dNODE_STACK *dcreatestack(double value);
ldNODE_STACK *ldcreatestack(long double value);
//push
void cpush(cNODE_STACK **top,char value);
void i8push(i8NODE_STACK **top,int8_t value);
void i16push(i16NODE_STACK **top,int16_t value);
void i32push(i32NODE_STACK **top,int32_t value);
void i64push(i64NODE_STACK **top,int64_t value);
void ui8push(ui8NODE_STACK **top,uint8_t value);
void ui16push(ui16NODE_STACK **top,uint16_t value);
void ui32push(ui32NODE_STACK **top,uint32_t value);
void ui64push(ui64NODE_STACK **top,uint64_t value);
void fpush(fNODE_STACK **top,float value);
void dpush(dNODE_STACK **top,double value);
void ldpush(ldNODE_STACK **top,long double value);
//pop
char cpop(cNODE_STACK **top);
int8_t i8pop(i8NODE_STACK **top);
int16_t i16pop(i16NODE_STACK **top);
int32_t i32pop(i32NODE_STACK **top);
int64_t i64pop(i64NODE_STACK **top);
uint8_t ui8pop(ui8NODE_STACK **top);
uint16_t ui16pop(ui16NODE_STACK **top);
uint32_t ui32pop(ui32NODE_STACK **top);
uint64_t ui64pop(ui64NODE_STACK **top);
float fpop(fNODE_STACK **top);
double dpop(dNODE_STACK **top);
long double ldpop(ldNODE_STACK **top);
//free the whole stack
void cfreestack(cNODE_STACK **top);
void i8freestack(i8NODE_STACK **top);
void i16freestack(i16NODE_STACK **top);
void i32freestack(i32NODE_STACK **top);
void i64freestack(i64NODE_STACK **top);
void ui8freestack(ui8NODE_STACK **top);
void ui16freestack(ui16NODE_STACK **top);
void ui32freestack(ui32NODE_STACK **top);
void ui64freestack(ui64NODE_STACK **top);
void ffreestack(fNODE_STACK **top);
void dfreestack(dNODE_STACK **top);
void ldfreestack(ldNODE_STACK **top);
//peek
char cpeekstack(cNODE_STACK **top);
int8_t i8peekstack(i8NODE_STACK **top);
int16_t i16peekstack(i16NODE_STACK **top);
int32_t i32peekstack(i32NODE_STACK **top);
int64_t i64peekstack(i64NODE_STACK **top);
uint8_t ui8peekstack(ui8NODE_STACK **top);
uint16_t ui16peekstack(ui16NODE_STACK **top);
uint32_t ui32peekstack(ui32NODE_STACK **top);
uint64_t ui64peekstack(ui64NODE_STACK **top);
float fpeekstack(fNODE_STACK **top);
double dpeekstack(dNODE_STACK **top);
long double ldpeekstack(ldNODE_STACK **top);
#endif