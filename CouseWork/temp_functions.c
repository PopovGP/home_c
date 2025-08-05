#include "temp_functions.h"


/* По условию формат записи такой
 * YEAR;MONTH;DAY;HOUR;MINUTE;TEMPERATURE
 * dddd;mm;dd;hh;mm;temperature
 * dddd - год 4 цифры
 * mm - месяц 2 цифры
 * dd - день 2 цифры
 * hh - часы 2 цифры
 * mm - минуты 2 цифры
 * temperature - целое число от -99 до 99 
 */



void addToDList(dList **list, 
    unsigned short int year,
    unsigned short int month,
    unsigned short int day,
    unsigned short int hour,
    unsigned short int minute,
    signed short int temperature
    )
{
     
    if (list==NULL) return;
 
    dList *lptr = malloc(sizeof(dList));
    lptr->year = year;
    lptr->month = month;
    lptr->day = day;
    lptr->hour = hour;
    lptr->minute = minute;
    lptr->temperature = temperature;

    /*
     * заполним ключ
     */
    char s[MAX_RECORD_LENGTH]={0}; //массив для ключа
    sprintf((char*)s, "%04d%02d%03d%02d%02d", lptr->year, lptr->month, lptr->day, lptr->hour, lptr->minute);
    
    //скопируем посимвольно из временной переменной в ключ
    for (int i=0; i<MAX_RECORD_LENGTH; i++)
    {
     lptr->key[i] = s[i];
    }
    //
     
    /*
     * Если список пустой
     */
    if(*list == NULL)
    {
        lptr->next = NULL;
        lptr->previous = NULL;
    
        *list = lptr;
        return;
    }
    
    
    /*
     * Вставляем новый элемент справа в конец списка
     */
    moveToEndDList(list);
    
    lptr->next = NULL; 
    lptr->previous = *list; //весь предыдущий список считается предшественником нового элемента
    (*list)->next = lptr;
    *list = lptr;
}

/*
 * Вставляет в список новый элемент в порядке возрастания значения ключа.
 * Использование этого метода позволяет сразу создать список,
 * отсортированный по возрастанию.
 * Изменяет значения указателя на список, присваивая ему ссылку на 
 * добавленный элемент.
 * Если применять данный метод для вставки каждого элемента, то в результате
 * сразу получается отсортированный список 
 */
void addToDListAsc(dList **list, 
    unsigned short int year,
    unsigned short int month,
    unsigned short int day,
    unsigned short int hour,
    unsigned short int minute,
    signed short int temperature,
    bool (*cmp_func)(dList*, dList*)
    )
{
    if (list==NULL) return;
    
    /*
     * Снача вставляем элемент справа в конец списка
     */
    addToDList(list, 
    year,
    month,
    day,
    hour,
    minute,
    temperature);
    
    /*
     * Двигаем элемент влево.
     * Предполагается, что в списке есть хотя бы один элемент.
     * Также предполагается, что список перед добавлением нового элемента 
     * уже отсортирован по возрастанию.
     */
    while((*list)->previous)
    { 
        bool res_cmp = cmp_func((*list)->previous, *list);
        if (res_cmp)
        {
            dList *temp_ptr1 = (*list)->previous;
            (*list)->previous = temp_ptr1->previous;
            
            if (temp_ptr1->previous) temp_ptr1->previous->next = *list;
            if ((*list)->next) (*list)->next->previous = temp_ptr1;
            
            temp_ptr1->next = (*list)->next;
            (*list)->next = temp_ptr1;
            temp_ptr1->previous = *list;
        } 
        else
        {
            break;
        }
    }
}

void moveToStartDList(dList **ptr) //двигаем указатель начала списка на самый левый элемент
{
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
    while((*ptr)->previous)
    {
        *ptr = (*ptr)->previous;
    }
}

void moveToEndDList(dList **ptr) //двигаем указатель начала списка на самый правый элемент
{
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
    while((*ptr)->next)
    {
        *ptr = (*ptr)->next;
    }
}

void moveLeftDList(dList **ptr) //двигаем указатель начала списка левее на один элемент
{
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
    if((*ptr)->previous)
    {
        *ptr = (*ptr)->previous;
    }
}

void moveRightDList(dList **ptr) //двигаем указатель начала списка правее на один элемент
{
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
    if((*ptr)->next)
    {
        *ptr = (*ptr)->next;
    }
}

/* 
 * Очищает весь список
 * Указатель на список устанавливается в NULL
 */
void purgeDList(dList **ptr)
{
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
    //Сдвинемся влево до конца
    if((*ptr)->previous)
    {
        *ptr = (*ptr)->previous;
    }
    
    //Удаляем поэлементно
    dList *tempPtr;
    
    while((*ptr)->next)
    {
        tempPtr = *ptr;
        *ptr = (*ptr)->next;
        free(tempPtr);
    }
    
    free(*ptr); //удаляем последний оставшийся элемент
    *ptr = NULL;
}

/*
 * Удаляет элемент, на который указывает текущий указаль списка, из списка
 * Если в списке был один элемент, 
 * то этот элемент будет удален и указатель на список будет равен NULL
 */
 void deleteElementInDlist(dList **ptr)
 {
    if (ptr==NULL) return;
    if (*ptr==NULL) return;
      
    //Единственный элемент
    if(((*ptr)->next==NULL) && ((*ptr)->previous==NULL))
    {
         free(*ptr);
         *ptr = NULL;
         return;
    }
    
    dList *tempPtr;
    tempPtr = *ptr;
    
    if((*ptr)->previous!=NULL)
    {
        
        *ptr = (*ptr)->previous;
        (*ptr)->next = tempPtr->next;
        free(tempPtr);
        return;
    }

    //next на равенство null проверять уже не нужно, 
    //так как предыдущие условия этого исключают
    *ptr = (*ptr)->next;
    (*ptr)->previous = tempPtr->previous;
    free(tempPtr);
    return;
}
    
/*
 * Функция печати элемента списка
 * Выводит в удобной форме значения записи с температурой
 */
void presentationTime(dList *d)
{  
    if (d){
    printf("year:%4u  month:%2u  day:%2u  hour:%2u  minute:%2u  temperature:%3d  key field:%s\n", \
     d->year, d->month, d->day, d->hour, d->minute, d->temperature, d->key);
    }
    else printf("На печать передана пустая ссылка на элемент списка (NULL)!\n");
}


/* 
* Печатает список
* Не изменяет указатель на элемент списка
* Для универсальности воспользуемся указателем на функцию
* Т.е. считаем, это элемент "знает" как печатать сам себя
*/
void printDList(dList *ptr, void (*presentation)(dList*))
{
    //Отмотаем влево до конца
    moveToStartDList(&ptr);
    if (ptr==NULL) return;
   
    //Распечатаем с помощью указателя на функцию каждый элемент.
    do{
        presentation(ptr);
        ptr = ptr->next;
    } while (ptr);
}

/*
 * Функция сравнения двух элементов двухсвязного списка.
 * Возвращает ИСТИНА, если параметр el1 больше, чем параметр el2, иначе ЛОЖЬ.
 * Если один ключ короче другого и в общих частях
 * ключи сходятся, то большим считается тот, который длиннее.
 * Сами элементы не изменяются
 */
bool isGreaterDList(dList *el1, dList *el2)
{
    for (int i=0; i<MAX_RECORD_LENGTH; i++)
    {
        if (el1->key[i]>el2->key[i]) return true;
        if (el1->key[i]<el2->key[i]) return false;
    }
    return false;
}

void printHelp(char *filename)
{
    printf("Использование программы статистики температуры\n\n");
    printf("Запуск: %s [-h | --help] -f ""filename.csv"" | --file ""filename.csv"" \
[-m <номер_месяца> | --month <номер_месяца> ]\n\n", filename);
    printf("-h или --help -- печатает эту справку по использованию программы.\nПараметр не является обязательным.\n\n");
    printf("-f ""filename.csv"" | --file ""filename.csv"" -- печатает статистику по указанному в файлу.\n\
Параметр является обязательным, если нет параметров -h или --help.\n\n");
    printf("-m <номер_месяца> | --month <номер_месяца> -- печатает статистику только по указанному месяцу.\n\
Параметр не является обязательным.\n");
}

