#include<inttypes.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define INVALID_INDEX 5
#define NULL_LIST 6
typedef struct cNODE{
  char data;
  struct cNODE *next;
}cNODE;

typedef struct i8NODE{
  int8_t data;
  struct i8NODE *next;
}i8NODE;

typedef struct i16NODE{
  int16_t data;
  struct i16NODE *next;
}i16NODE;

typedef struct i32NODE{
  int32_t data;
  struct i32NODE *next;
}i32NODE;

typedef struct i64NODE{
  int64_t data;
  struct i64NODE *next;
}i64NODE;

typedef struct ui8NODE{
  uint8_t data;
  struct ui8NODE *next;
}ui8NODE;

typedef struct ui16NODE{
  uint16_t data;
  struct ui16NODE *next;
}ui16NODE;

typedef struct ui32NODE{
  uint32_t data;
  struct ui32NODE *next;
}ui32NODE;

typedef struct ui64NODE{
  uint64_t data;
  struct ui64NODE *next;
}ui64NODE;

typedef struct fNODE{
  float data;
  struct fNODE *next;
}fNODE;

typedef struct dNODE{
  double data;
  struct dNODE *next;
}dNODE;

typedef struct ldNODE{
  long double data;
  struct ldNODE *next;
}ldNODE;

//create
cNODE *ccreateLinked(char value);
i8NODE *i8createLinked(int8_t value);
i16NODE *i16createLinked(int16_t value);
i32NODE *i32createLinked(int32_t value);
i64NODE *i64createLinked(int64_t value);
ui8NODE *ui8createLinked(uint8_t value);
ui16NODE *ui16createLinked(uint16_t value);
ui32NODE *ui32createLinked(uint32_t value);
ui64NODE *ui64createLinked(uint64_t value);
fNODE *fcreateLinked(float value);
dNODE *dcreateLinked(double value);
ldNODE *ldcreateLinked(long double value);
//clean list
void cfreelinked(cNODE *head);
void i8freelinked(i8NODE *head);
void i16freelinked(i16NODE *head);
void i32freelinked(i32NODE *head);
void i64freelinked(i64NODE *head);
void ui8freelinked(ui8NODE *head);
void ui16freelinked(ui16NODE *head);
void ui32freelinked(ui32NODE *head);
void ui64freelinked(ui64NODE *head);
void ffreelinked(fNODE *head);
void dfreelinked(dNODE *head);
void ldfreelinked(ldNODE *head);
//print list
void cprintlinked(cNODE *head,size_t type);
void i8printlinked(i8NODE *head,size_t type);
void i16printlinked(i16NODE *head,size_t type);
void i32printlinked(i32NODE *head,size_t type);
void i64printlinked(i64NODE *head,size_t type);
void ui8printlinked(ui8NODE *head,size_t type);
void ui16printlinked(ui16NODE *head,size_t type);
void ui32printlinked(ui32NODE *head,size_t type);
void ui64printlinked(ui64NODE *head,size_t type);
void fprintlinked(fNODE *head,size_t type);
void dprintlinked(dNODE *head,size_t type);
void ldprintlinked(ldNODE *head,size_t type);
//length
size_t clinkedlength(cNODE *head);
size_t i8linkedlength(i8NODE *head);
size_t i16linkedlength(i16NODE *head);
size_t i32linkedlength(i32NODE *head);
size_t i64linkedlength(i64NODE *head);
size_t ui8linkedlength(ui8NODE *head);
size_t ui16linkedlength(ui16NODE *head);
size_t ui32linkedlength(ui32NODE *head);
size_t ui64linkedlength(ui64NODE *head);
size_t flinkedlength(fNODE *head);
size_t dlinkedlength(dNODE *head);
size_t ldlinkedlength(ldNODE *head);
//search
int64_t clsearchlinked(cNODE *head,char value);
int64_t i8lsearchlinked(i8NODE *head,int8_t value);
int64_t i16lsearchlinked(i16NODE *head,int16_t value);
int64_t i32lsearchlinked(i32NODE *head,int32_t value);
int64_t i64lsearchlinked(i64NODE *head,int64_t value);
int64_t ui8lsearchlinked(ui8NODE *head,uint8_t value);
int64_t ui16lsearchlinked(ui16NODE *head,uint16_t value);
int64_t ui32lsearchlinked(ui32NODE *head,uint32_t value);
int64_t ui64lsearchlinked(ui64NODE *head,uint64_t value);
int64_t flsearchlinked(fNODE *head,float value);
int64_t dlsearchlinked(dNODE *head,double value);
int64_t ldlsearchlinked(ldNODE *head,long double value);
//append start
void csappendlinked(cNODE **head,char value);
void i8sappendlinked(i8NODE **head,int8_t value);
void i16sappendlinked(i16NODE **head,int16_t value);
void i32sappendlinked(i32NODE **head,int32_t value);
void i64sappendlinked(i64NODE **head,int64_t value);
void ui8sappendlinked(ui8NODE **head,uint8_t value);
void ui16sappendlinked(ui16NODE **head,uint16_t value);
void ui32sappendlinked(ui32NODE **head,uint32_t value);
void ui64sappendlinked(ui64NODE **head,uint64_t value);
void fsappendlinked(fNODE **head,float value);
void dsappendlinked(dNODE **head,double value);
void ldsappendlinked(ldNODE **head,long double value);
//append end
void ceappendlinked(cNODE *head,char value);
void i8eappendlinked(i8NODE *head,int8_t value);
void i16eappendlinked(i16NODE *head,int16_t value);
void i32eappendlinked(i32NODE *head,int32_t value);
void i64eappendlinked(i64NODE *head,int64_t value);
void ui8eappendlinked(ui8NODE *head,uint8_t value);
void ui16eappendlinked(ui16NODE *head,uint16_t value);
void ui32eappendlinked(ui32NODE *head,uint32_t value);
void ui64eappendlinked(ui64NODE *head,uint64_t value);
void feappendlinked(fNODE *head,float value);
void deappendlinked(dNODE *head,double value);
void ldeappendlinked(ldNODE *head,long double value);
//append at index
void cappendlinked(cNODE **head,char value,size_t index);
void i8appendlinked(i8NODE **head,int8_t value,size_t index);
void i16appendlinked(i16NODE **head,int16_t value,size_t index);
void i32appendlinked(i32NODE **head,int32_t value,size_t index);
void i64appendlinked(i64NODE **head,int64_t value,size_t index);
void ui8appendlinked(ui8NODE **head,uint8_t value,size_t index);
void ui16appendlinked(ui16NODE **head,uint16_t value,size_t index);
void ui32appendlinked(ui32NODE **head,uint32_t value,size_t index);
void ui64appendlinked(ui64NODE **head,uint64_t value,size_t index);
void fappendlinked(fNODE **head,float value,size_t index);
void dappendlinked(dNODE **head,double value,size_t index);
void ldappendlinked(ldNODE **head,long double value,size_t index);
//remove start
char csremovelinked(cNODE **head);
int8_t i8sremovelinked(i8NODE **head);
int16_t i16sremovelinked(i16NODE **head);
int32_t i32sremovelinked(i32NODE **head);
int64_t i64sremovelinked(i64NODE **head);
uint8_t ui8sremovelinked(ui8NODE **head);
uint16_t ui16sremovelinked(ui16NODE **head);
uint32_t ui32sremovelinked(ui32NODE **head);
uint64_t ui64sremovelinked(ui64NODE **head);
float fsremovelinked(fNODE **head);
double dsremovelinked(dNODE **head);
long double ldsremovelinked(ldNODE **head);
//remove end
char ceremovelinked(cNODE *head);
int8_t i8eremovelinked(i8NODE *head);
int16_t i16eremovelinked(i16NODE *head);
int32_t i32eremovelinked(i32NODE *head);
int64_t i64eremovelinked(i64NODE *head);
uint8_t ui8eremovelinked(ui8NODE *head);
uint16_t ui16eremovelinked(ui16NODE *head);
uint32_t ui32eremovelinked(ui32NODE *head);
uint64_t ui64eremovelinked(ui64NODE *head);
float feremovelinked(fNODE *head);
double deremovelinked(dNODE *head);
long double lderemovelinked(ldNODE *head);
//remove index
char cremovelinked(cNODE **head,size_t index);
int8_t i8removelinked(i8NODE **head,size_t index);
int16_t i16removelinked(i16NODE **head,size_t index);
int32_t i32removelinked(i32NODE **head,size_t index);
int64_t i64removelinked(i64NODE **head,size_t index);
uint8_t ui8removelinked(ui8NODE **head,size_t index);
uint16_t ui16removelinked(ui16NODE **head,size_t index);
uint32_t ui32removelinked(ui32NODE **head,size_t index);
uint64_t ui64removelinked(ui64NODE **head,size_t index);
float fremovelinked(fNODE **head,size_t index);
double dremovelinked(dNODE **head,size_t index);
long double ldremovelinked(ldNODE **head,size_t index);
#endif