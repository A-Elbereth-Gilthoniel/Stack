#ifndef STACK_H
#define STACK_H

//#define CANARY
#define DUMP

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

typedef int ELEM;
#define SPEC "%d"
#ifdef CANARY
typedef long long CANARY_TYPE;
//const CANARY_TYPE CANARY_NUMBER = 0xDEADDEAD;
#endif



#define red(str) "\033[31m"#str"\033[0m"

#define new_assert(expr) \
    do                   \
    {                    \
        if (expr!="NO_ERRORS") \
        { \
            fprintf(stderr, red(There is error) ": File: %s, Function: %s, Line: %d, Error :  \"%s\"\n", __FILE__, __func__, __LINE__, expr);\
                \
            exit(1);\
        } \
    } while (0)


enum CODE_ERROR
{
    NO_ERRORS,
    STACK_ERR,
    STACK_IS_UNDECLARED,
    SIZE_LESS_THAN_ZERO,
    CAPACITY_LESS_THAN_ZERO,
    SIZE_MORE_THAN_CAPACITY,
    BOTH_CANARIES_DIED,
    LEFT_CANARY_DIED,
    RIGHT_CANARY_DIED
};


typedef struct
{
    ELEM* data;
    int size;
    int capacity;

  /*  #ifdef CANARY
    CANARY_TYPE* left_canary;
    CANARY_TYPE* right_canary;
    #endif*/
} STACK;


void StackConstructor(STACK *st, const size_t length);
void StackPush(STACK* st, ELEM value);
void StackDestructor(STACK* st);
ELEM StackPop(STACK* st);
void PrintStack(STACK* st);
void StackRealloc(STACK *st, const int size);
char* StackVerification(STACK *st);
#ifdef DUMP
void StackDump(STACK *st, const char* file, const char* func);
#endif

#endif // STACK_H
