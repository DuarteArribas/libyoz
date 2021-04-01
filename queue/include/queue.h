#include<inttypes.h>
#ifndef QUEUE_H
#define QUEUE_H
#define EMPTY_QUEUE 6

typedef struct cNODE_QUEUE{
  char data;
  struct cNODE_QUEUE *previous;
}cNODE_QUEUE;

typedef struct i8NODE_QUEUE{
  int8_t data;
  struct i8NODE_QUEUE *previous;
}i8NODE_QUEUE;

typedef struct i16NODE_QUEUE{
  int16_t data;
  struct i16NODE_QUEUE *previous;
}i16NODE_QUEUE;

typedef struct i32NODE_QUEUE{
  int32_t data;
  struct i32NODE_QUEUE *previous;
}i32NODE_QUEUE;

typedef struct i64NODE_QUEUE{
  int64_t data;
  struct i64NODE_QUEUE *previous;
}i64NODE_QUEUE;

typedef struct ui8NODE_QUEUE{
  uint8_t data;
  struct ui8NODE_QUEUE *previous;
}ui8NODE_QUEUE;

typedef struct ui16NODE_QUEUE{
  uint16_t data;
  struct ui16NODE_QUEUE *previous;
}ui16NODE_QUEUE;

typedef struct ui32NODE_QUEUE{
  uint32_t data;
  struct ui32NODE_QUEUE *previous;
}ui32NODE_QUEUE;

typedef struct ui64NODE_QUEUE{
  uint64_t data;
  struct ui64NODE_QUEUE *previous;
}ui64NODE_QUEUE;

typedef struct fNODE_QUEUE{
  float data;
  struct fNODE_QUEUE *previous;
}fNODE_QUEUE;

typedef struct dNODE_QUEUE{
  double data;
  struct dNODE_QUEUE *previous;
}dNODE_QUEUE;

typedef struct ldNODE_QUEUE{
  long double data;
  struct ldNODE_QUEUE *previous;
}ldNODE_QUEUE;

//create front
cNODE_QUEUE *ccreatequeue(char value);
i8NODE_QUEUE *i8createqueue(int8_t value);
i16NODE_QUEUE *i16createqueue(int16_t value);
i32NODE_QUEUE *i32createqueue(int32_t value);
i64NODE_QUEUE *i64createqueue(int64_t value);
ui8NODE_QUEUE *ui8createqueue(uint8_t value);
ui16NODE_QUEUE *ui16createqueue(uint16_t value);
ui32NODE_QUEUE *ui32createqueue(uint32_t value);
ui64NODE_QUEUE *ui64createqueue(uint64_t value);
fNODE_QUEUE *fcreatequeue(float value);
dNODE_QUEUE *dcreatequeue(double value);
ldNODE_QUEUE *ldcreatequeue(long double value);
//enqueue
void cenqueue(cNODE_QUEUE **front,char value);
void i8enqueue(i8NODE_QUEUE **front,int8_t value);
void i16enqueue(i16NODE_QUEUE **front,int16_t value);
void i32enqueue(i32NODE_QUEUE **front,int32_t value);
void i64enqueue(i64NODE_QUEUE **front,int64_t value);
void ui8enqueue(ui8NODE_QUEUE **front,uint8_t value);
void ui16enqueue(ui16NODE_QUEUE **front,uint16_t value);
void ui32enqueue(ui32NODE_QUEUE **front,uint32_t value);
void ui64enqueue(ui64NODE_QUEUE **front,uint64_t value);
void fenqueue(fNODE_QUEUE **front,float value);
void denqueue(dNODE_QUEUE **front,double value);
void ldenqueue(ldNODE_QUEUE **front,long double value);
//dequeue
char cdequeue(cNODE_QUEUE **front);
int8_t i8dequeue(i8NODE_QUEUE **front);
int16_t i16dequeue(i16NODE_QUEUE **front);
int32_t i32dequeue(i32NODE_QUEUE **front);
int64_t i64dequeue(i64NODE_QUEUE **front);
uint8_t ui8dequeue(ui8NODE_QUEUE **front);
uint16_t ui16dequeue(ui16NODE_QUEUE **front);
uint32_t ui32dequeue(ui32NODE_QUEUE **front);
uint64_t ui64dequeue(ui64NODE_QUEUE **front);
float fdequeue(fNODE_QUEUE **front);
double ddequeue(dNODE_QUEUE **front);
long double lddequeue(ldNODE_QUEUE **front);
//free the whole queue
void cfreequeue(cNODE_QUEUE **front);
void i8freequeue(i8NODE_QUEUE **front);
void i16freequeue(i16NODE_QUEUE **front);
void i32freequeue(i32NODE_QUEUE **front);
void i64freequeue(i64NODE_QUEUE **front);
void ui8freequeue(ui8NODE_QUEUE **front);
void ui16freequeue(ui16NODE_QUEUE **front);
void ui32freequeue(ui32NODE_QUEUE **front);
void ui64freequeue(ui64NODE_QUEUE **front);
void ffreequeue(fNODE_QUEUE **front);
void dfreequeue(dNODE_QUEUE **front);
void ldfreequeue(ldNODE_QUEUE **front);
//peek
char cpeekqueue(cNODE_QUEUE **front);
int8_t i8peekqueue(i8NODE_QUEUE **front);
int16_t i16peekqueue(i16NODE_QUEUE **front);
int32_t i32peekqueue(i32NODE_QUEUE **front);
int64_t i64peekqueue(i64NODE_QUEUE **front);
uint8_t ui8peekqueue(ui8NODE_QUEUE **front);
uint16_t ui16peekqueue(ui16NODE_QUEUE **front);
uint32_t ui32peekqueue(ui32NODE_QUEUE **front);
uint64_t ui64peekqueue(ui64NODE_QUEUE **front);
float fpeekqueue(fNODE_QUEUE **front);
double dpeekqueue(dNODE_QUEUE **front);
long double ldpeekqueue(ldNODE_QUEUE **front);
#endif