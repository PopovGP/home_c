#include "temp_functions.h"
/* 
 * Задача:
 * Необходимо вывести статистику по каждому месяцу, с учетом исходных данных:
 * • среднемесячная температура
 * • минимальная температура в текущем месяце
 * • максимальная температура в текущем месяце
 * Также необходимо вывести статистику за год:
 * • среднегодовая температура
 * • минимальная температура
 * • максимальная температура
 */
int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    char *fname = NULL;
    unsigned short int selectedMonth;
    _Bool monthProvided = false;
    _Bool filenameProvided = false;
    size_t fnameLength;
    
    //int fnameLength = 0;
    
    /*
     * Приложение должно обрабатывать аргументы командной строки:
     * минимальный набор поддерживаемых ключей:
     * -h Описание функционала приложения. Список ключей, которые
     * обрабатывает данное приложение и их назначение.
     * -f <filename.csv> входной файл csv для обработки.
     * -m <номер месяца> если задан данный ключ, то выводится
     * только статистика за указанный месяц.
     */
    if (argc==1)
    {
        printHelp(argv[0]);
        return 1;
    }
     
    /* 
     * Сделаю возможность и для длинных опций
     */
    opterr = 0; 
    char *optstr = "hf:m:";
    unsigned int res;
    int longindex = -1;

    struct option null_option = {NULL, 0, NULL, 0};
    struct option params[]={
        {"help", no_argument, NULL, 1},
        {"filename", required_argument, NULL, 2},
        {"month", required_argument, NULL, 3},
        null_option
    };

    while((res=getopt_long(argc, argv, optstr, params, &longindex))!=-1)
    {
                   
        if (longindex!=-1) //длинная опция
        {
            switch(longindex)
            {
                case 0:  //help
                    printHelp(argv[0]);
                    if (fname) free(fname);
                    return 1;
                case 1: // filename, в optarg указано имя файла
                    fnameLength = strlen(optarg);
                    
                    if (fnameLength==0)
                    {
                        fprintf(stderr, "Не указано имя файла!\n\n");
                        return 2;
                    }
                        
                    fname =(char *)malloc(fnameLength+1);
                    strcpy(fname, optarg);
                    fname[fnameLength] = 0;
                    filenameProvided = true;
                    break;
                case 2: //mounth
                    monthProvided = true;
                    sscanf(optarg, "%hd", &selectedMonth);
                    break;
                    
        
            };
        }
        else //короткая опция
        {
            switch(res)
            {
                case 'h':
                    printHelp(argv[0]);//help
                    if (fname) free(fname);
                    return 1;
                case 'f': // filename, в optarg указано имя файла
                    fnameLength = strlen(optarg);
                    if (fnameLength==0)
                    {
                        fprintf(stderr, "Не указано имя файла!\n\n");
                        return 2;
                    }
                    
                    fname =(char *)malloc(fnameLength+1);
                    strcpy(fname, optarg);
                    fname[fnameLength] = 0;
                    filenameProvided = true;
                    
                    break;
                case 'm': //месяц
                    monthProvided = true;
                    sscanf(optarg, "%hd", &selectedMonth);
                    break;
                
                case '?': //Какая-либо ошибка
                    
                    switch(optopt)
                    {
                        case 'f':
                            fprintf(stderr, "Не указано имя файла!\n\n");
                            printHelp(argv[0]);
                            if (fname) free(fname);
                            return 2;
  
                        case 'm':
                            fprintf(stderr, "Не указан месяц!\n\n");
                            printHelp(argv[0]);
                            if (fname) free(fname);
                            return 2;
                        
          
                        default:
                            switch (optopt)
                            {
                                case 2:
                                    fprintf(stderr, "Не указано имя файла!\n\n");
                                    printHelp(argv[0]);
                                    if (fname) free(fname);
                                    return 2;
                                case 3:
                                    fprintf(stderr, "Не указан номер месяца!\n\n");
                                    printHelp(argv[0]);
                                    if (fname) free(fname);
                                    return 2;
                                default:
                                    fprintf(stderr, "Не указан обязательный аргумент или указан неправильный параметр (%c)! \n\n", optopt);
                                    printHelp(argv[0]);
                                    if (fname) free(fname);
                                    return 2;
                            }
                    }
                    break;
                default:
                    fprintf(stderr, "Нераспознанная опция!\n\n");
                    printHelp(argv[0]);
                    return 2;
                
            };
            longindex = -1;
                
        }
        longindex = -1;
    }
     
    if (!filenameProvided)
    {
        fprintf(stderr, "Не указано имя файла!\n\n");
        printHelp(argv[0]);
        return 2;
    }
    
    FILE *fin;
    fin = fopen(fname, "r");
    if (fin==NULL)
    {
        fprintf(stderr, "Ошибка: невозможно открыть файл '%s'!\n", fname);
        free(fname);
        return 2;
    }
    
    dList *valueList = NULL;
    
    //Переберём построчно
    int lineNumber = 1;

    while(1)
    {
        unsigned short int year;
        unsigned short int month;
        unsigned short int day;
        unsigned short int hour;
        unsigned short int minute;
        signed short int temperature;
        
        char str[MAX_RECORD_LENGTH];
        
        char *s = fgets(str, MAX_RECORD_LENGTH, fin);
        #ifdef DEBUG
        printf("Считанная строка: %s", str);
        #endif
        if (s==NULL)
        {
            break;
        }
        
       int rez = sscanf(str, "%hu;%hu;%hu;%hu;%hu;%hd", &year,&month,&day, &hour, &minute, &temperature); 
       if (rez!=NUMBER_OF_FIELDS)
       {
           printf("Ошибка: строка №%d '%s', несоответствует формату, пропущена\n", lineNumber, str);
       }
       else
       {
           /* 
            * К задаче вывода статистики только за указанный месяц подойде следующим образом:
            * Нужно считывать из исходного файла данные только нужного месяца. В этом случае не
            * потребуется фильтровать что-то из исходного списка, да и программа займет меньше памяти
            */
           if (monthProvided)
           {
                if (month==selectedMonth) 
                    addToDListAsc(&valueList, year,month,day,hour,minute,temperature, isGreaterDList); 
           }
           else
           {
                addToDListAsc(&valueList, year,month,day,hour,minute,temperature, isGreaterDList); 
           }
               
        #ifdef DEBUG   
        printf("Результат обработки: %u;%u;%u;%u;%u;%d\n\n", year,month,day,hour,minute,temperature); 
        #endif
        }
       lineNumber ++;
    }
   
    fclose(fin);
    free(fname);

    #ifdef DEBUG
    printf("Печатаем весь список:\n");
    printDList(valueList, presentationTime);
    #endif
    
     //Отмотаем влево до конца
    moveToStartDList(&valueList);
    if (valueList==NULL) return 1;
    
    //Далее считаем что в списке есть хотя бы один элемент.
    
    int min = valueList->temperature;
    int max = valueList->temperature;
    int mean = 0;
    int counter = 0;
    dList *tmpPtr = valueList;
        
    if (!monthProvided)
    {
        /* 
         * Считаем и печатаем статистику за год
         */
        unsigned int year;
        //Обработаем список с помощью указателя на каждый элемент.
        do{
            counter++;
            if (tmpPtr->temperature>max) max = tmpPtr->temperature;
            if (tmpPtr->temperature<min) min = tmpPtr->temperature;
            mean += tmpPtr->temperature;
            year = tmpPtr->year;
            tmpPtr = tmpPtr->next;
        
        } while (tmpPtr);
        
        printf("Статистика за год: %d мин.темп-ра: %d, макс.темп-ра: %d, ср.темп-ра: %.2f \n", year, min, max, mean/(float)counter);
        
    }
    
    //Теперь сделаем статистику за каждый месяц
    min = valueList->temperature;
    max = valueList->temperature;
    mean = 0;
    counter = 0;
    int monthNumber = valueList->month;
    
    if (monthProvided)
        printf("Статистика за месяц №%d\n",  selectedMonth);
    else 
        printf("Статистика по месяцам:\n");
        
    tmpPtr = valueList;
    do{
        
        if (monthNumber!=tmpPtr->month) //Сменился месяц
        {
            printf("Месяц №%2d: мин.темп-ра: %3d, макс.температура: %3d, ср.темп-ра: %3.2f \n",
            monthNumber, min, max, mean/(float)counter);
            
            min = tmpPtr->temperature;
            max = tmpPtr->temperature;
            monthNumber = tmpPtr->month; 
            mean = 0;
            counter = 0;
        }
        
        counter++;
        
        if (tmpPtr->temperature>max) max = tmpPtr->temperature;
        if (tmpPtr->temperature<min) min = tmpPtr->temperature;
        
        mean += tmpPtr->temperature;
        
        tmpPtr = tmpPtr->next;
    } while (tmpPtr);
    
    //Выведем итого последнего месяца в списке
    printf("Месяц №%2d: мин.темп-ра: %3d, макс.температура: %3d, ср.темп-ра: %3.2f \n",
    monthNumber, min, max, mean/(float)counter);
    
    purgeDList(&valueList);
    return 0;
}
