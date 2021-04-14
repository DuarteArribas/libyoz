#ifndef ARRAY_H
#define ARRAY_H
#define ARRAY_COPY_ERROR 3
#define PRINT_TYPE_ERROR 4
#define INVALID_INDEX 5
//copy
void ccopyArray(size_t srcSize,char *src,size_t destSize,char *dest);
void i8copyArray(size_t srcSize,int8_t *src,size_t destSize,int8_t *dest);
void i16copyArray(size_t srcSize,int16_t *src,size_t destSize,int16_t *dest);
void i32copyArray(size_t srcSize,int32_t *src,size_t destSize,int32_t *dest);
void i64copyArray(size_t srcSize,int64_t *src,size_t destSize,int64_t *dest);
void ui8copyArray(size_t srcSize,uint8_t *src,size_t destSize,uint8_t *dest);
void ui16copyArray(size_t srcSize,uint16_t *src,size_t destSize,uint16_t *dest);
void ui32copyArray(size_t srcSize,uint32_t *src,size_t destSize,uint32_t *dest);
void ui64copyArray(size_t srcSize,uint64_t *src,size_t destSize,uint64_t *dest);
void fcopyArray(size_t srcSize,float *src,size_t destSize,float *dest);
void dcopyArray(size_t srcSize,double *src,size_t destSize,double *dest);
void ldcopyArray(size_t srcSize,long double *src,size_t destSize,long double *dest);
//print
void cprintArray(size_t size,char *array,size_t type);
void i8printArray(size_t size,int8_t *array,size_t type);
void i16printArray(size_t size,int16_t *array,size_t type);
void i32printArray(size_t size,int32_t *array,size_t type);
void i64printArray(size_t size,int64_t *array,size_t type);
void ui8printArray(size_t size,uint8_t *array,size_t type);
void ui16printArray(size_t size,uint16_t *array,size_t type);
void ui32printArray(size_t size,uint32_t *array,size_t type);
void ui64printArray(size_t size,uint64_t *array,size_t type);
void fprintArray(size_t size,float *array,size_t type);
void dprintArray(size_t size,double *array,size_t type);
void ldprintArray(size_t size,long double *array,size_t type);
//append start
void csappend(size_t *size,char **array,char value);
void i8sappend(size_t *size,int8_t **array,int8_t value);
void i16sappend(size_t *size,int16_t **array,int16_t value);
void i32sappend(size_t *size,int32_t **array,int32_t value);
void i64sappend(size_t *size,int64_t **array,int64_t value);
void ui8sappend(size_t *size,uint8_t **array,uint8_t value);
void ui16sappend(size_t *size,uint16_t **array,uint16_t value);
void ui32sappend(size_t *size,uint32_t **array,uint32_t value);
void ui64sappend(size_t *size,uint64_t **array,uint64_t value);
void fsappend(size_t *size,float **array,float value);
void dsappend(size_t *size,double **array,double value);
void ldsappend(size_t *size,long double **array,long double value);
//append at index
void cappend(size_t *size,char **array,char value,size_t index);
void i8append(size_t *size,int8_t **array,int8_t value,size_t index);
void i16append(size_t *size,int16_t **array,int16_t value,size_t index);
void i32append(size_t *size,int32_t **array,int32_t value,size_t index);
void i64append(size_t *size,int64_t **array,int64_t value,size_t index);
void ui8append(size_t *size,uint8_t **array,uint8_t value,size_t index);
void ui16append(size_t *size,uint16_t **array,uint16_t value,size_t index);
void ui32append(size_t *size,uint32_t **array,uint32_t value,size_t index);
void ui64append(size_t *size,uint64_t **array,uint64_t value,size_t index);
void fappend(size_t *size,float **array,float value,size_t index);
void dappend(size_t *size,double **array,double value,size_t index);
void ldappend(size_t *size,long double **array,long double value,size_t index);
//append end
void ceappend(size_t *size,char **array,char value);
void i8eappend(size_t *size,int8_t **array,int8_t value);
void i16eappend(size_t *size,int16_t **array,int16_t value);
void i32eappend(size_t *size,int32_t **array,int32_t value);
void i64eappend(size_t *size,int64_t **array,int64_t value);
void ui8eappend(size_t *size,uint8_t **array,uint8_t value);
void ui16eappend(size_t *size,uint16_t **array,uint16_t value);
void ui32eappend(size_t *size,uint32_t **array,uint32_t value);
void ui64eappend(size_t *size,uint64_t **array,uint64_t value);
void feappend(size_t *size,float **array,float value);
void deappend(size_t *size,double **array,double value);
void ldeappend(size_t *size,long double **array,long double value);
//remove at index
char cremove(size_t *size,char **array,size_t index);
int8_t i8remove(size_t *size,int8_t **array,size_t index);
int16_t i16remove(size_t *size,int16_t **array,size_t index);
int32_t i32remove(size_t *size,int32_t **array,size_t index);
int64_t i64remove(size_t *size,int64_t **array,size_t index);
uint8_t ui8remove(size_t *size,uint8_t **array,size_t index);
uint16_t ui16remove(size_t *size,uint16_t **array,size_t index);
uint32_t ui32remove(size_t *size,uint32_t **array,size_t index);
uint64_t ui64remove(size_t *size,uint64_t **array,size_t index);
float fremove(size_t *size,float **array,size_t index);
double dremove(size_t *size,double **array,size_t index);
long double ldremove(size_t *size,long double **array,size_t index);
//sort
void cisort(size_t size,char *array);
void i8isort(size_t size,int8_t *array);
void i16isort(size_t size,int16_t *array);
void i32isort(size_t size,int32_t *array);
void i64isort(size_t size,int64_t *array);
void ui8isort(size_t size,uint8_t *array);
void ui16isort(size_t size,uint16_t *array);
void ui32isort(size_t size,uint32_t *array);
void ui64isort(size_t size,uint64_t *array);
void fisort(size_t size,float *array);
void disort(size_t size,double *array);
void ldisort(size_t size,long double *array);
//search
int64_t clsearch(size_t size,char *array,char value);
int64_t i8lsearch(size_t size,int8_t *array,int8_t value);
int64_t i16lsearch(size_t size,int16_t *array,int16_t value);
int64_t i32lsearch(size_t size,int32_t *array,int32_t value);
int64_t i64lsearch(size_t size,int64_t *array,int64_t value);
int64_t ui8lsearch(size_t size,uint8_t *array,uint8_t value);
int64_t ui16lsearch(size_t size,uint16_t *array,uint16_t value);
int64_t ui32lsearch(size_t size,uint32_t *array,uint32_t value);
int64_t ui64lsearch(size_t size,uint64_t *array,uint64_t value);
int64_t flsearch(size_t size,float *array,float value);
int64_t dlsearch(size_t size,double *array,double value);
int64_t ldlsearch(size_t size,long double *array,long double value);
#endif