#ifndef TEMP_FUNCTIONS
#define TEMP_FUNCTIONS
#endif

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <getopt.h>
#include <string.h>

/* 
 * Количество записей в строке лога
 */
#define NUMBER_OF_FIELDS 6

/*
 * Включена ли отладка
 */
//define DEBUG 

/* 
 * Длина строки из лога с запасом,
 * в том числе нулевой символ
 */
#define MAX_RECORD_LENGTH 25


/* 
 * двунаправленный список
 * для работы с ним можно использовать указатель на любой его элемент
 */
struct listMember {
    unsigned short int year;
    unsigned short int month;
    unsigned short int day;
    unsigned short int hour;
    unsigned short int minute;
    signed short int temperature;
    
    struct listMember *next; //правый элемент
    struct listMember *previous;//левый элемент
    
    //ключ для сортировки фиксированного размера
    //в текущей задаче она будет лексикографическая
    //как указатель на массив из символов делать не стал,
    //т.к. получается странно - в динамически выдеяемом блоке будет
    //указал на другую область памяти.
    char key[MAX_RECORD_LENGTH]; 
};

typedef struct listMember dList; //Чуть сокращаем

void presentationTime(dList*);

void addToDList(dList **, 
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    signed short int 
    );

void addToDListAsc(dList **, 
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    unsigned short int ,
    signed short int ,
    bool (*cmp_func)(dList*, dList*)
    );

void moveToStartDList(dList **ptr); 

void moveToEndDList(dList **); 

void moveLeftDList(dList **); 

void moveRightDList(dList **); 

void purgeDList(dList **);

void deleteElementInDlist(dList **);
 
void presentationTime(dList *);

void printDList(dList *, void (*presentation)(dList*));

bool isGreaterDList(dList *, dList *);

void printHelp(char *);

