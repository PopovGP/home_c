#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[])
{
    
 
    opterr = 0; 
    /*
     * Проверка функции getopt_long
     * 
     * 
     * Если все в порядке - есть нужный короткий или длинный параметр, есть необходимые аргументы
     * или их нет, и не должно быть, то res=getopt_long(..) равен:
     * -- ASCII-коду параметра, если параметр короткий. В переменной optarg хранится указатель на строку 
     *    с аргументом этого параметра, если он должен быть или опционален, и null, если параметра быть не должно.
     * -- заданному ранее значению val из структуры option (можно задать любой номер)
     *    struct option {
     *    const char *name;
     *    int has_arg;
     *    int *flag;
     *    int val;
     *    };
     *    и одновременно переменная longindex != -1, а равна порядковому номеру элемента option из массива params
     *    В переменной optarg хранится указатель на строку с аргументом этого параметра, 
     *    если он должен быть или опционален, и null, если параметра быть не должно.
     * Если что-то не в порядке
     *    и для длинной опции не указан обязательный параметр, то 
     *      res = 63 '?' и одновременно переменная optopt равна заданному ранее значению val из структуры option (можно задать любой номер) 
     * 
     * Если поставить opterr == 1 (по умолчанию), то программа сама выдать предупреждение,
     * если будет указана неверная опция. Пример:
     * 'test_params_long: invalid option -- d'
     * 
     * 
     * 
     * */


    printf("Использование функции getopt_long:\n");
    char *optstr = "fvx:z:q:";
    unsigned int res;
    int longindex = -1;

    struct option null_option = {NULL, 0, NULL, 0};
    struct option params[]={
        {"firstoption", required_argument, NULL, 8},
        {"secondoption", required_argument, NULL, 1},
        {"fourthoption", required_argument, NULL, 2},
   
        null_option
    };
    
    
    while((res=getopt_long(argc, argv, optstr, params, &longindex))!=-1)
    {
        printf("res as char:%c, res as dec:%d, optarg: %s, opterr: %d, optopt as dec: %d, optopt as char: %c, optind: %d, *longindex: %d\n", res, res, optarg, opterr, optopt, optopt, optind, longindex);
        longindex = -1;
   
    }
    
    int count = 0;
    while(1)
    {
        if (params[count].name == NULL) break;
        printf("Длинный параметр №%d: name: %s, has_arg: %d, flag=NULL, val: %d\n", count, 
        params[count].name,
        params[count].has_arg,
       // *(params[count].flag),
        params[count].val);

        count++;
    }
    /* Результат выполнения
    * @MacBook-Air misc % ./test_params_long2 --firstoption   firstvalue  -f -v -x par1 -zpar2 --secondoption=secondvalue -zpar3
    * Использование функции getopt_long:
    * res as char:, res as dec:0, optarg: firstvalue, opterr: 0, optopt as dec: 0, optopt as char: , optind: 3, *longindex: 0
    * res as char:f, res as dec:102, optarg: (null), opterr: 0, optopt as dec: 0, optopt as char: , optind: 4, *longindex: -1
    * res as char:v, res as dec:118, optarg: (null), opterr: 0, optopt as dec: 0, optopt as char: , optind: 5, *longindex: -1
    * res as char:x, res as dec:120, optarg: par1, opterr: 0, optopt as dec: 0, optopt as char: , optind: 7, *longindex: -1
    * res as char:z, res as dec:122, optarg: par2, opterr: 0, optopt as dec: 0, optopt as char: , optind: 8, *longindex: -1
    * res as char:, res as dec:1, optarg: secondvalue, opterr: 0, optopt as dec: 0, optopt as char: , optind: 9, *longindex: 1
    * res as char:z, res as dec:122, optarg: par3, opterr: 0, optopt as dec: 0, optopt as char: , optind: 10, *longindex: -1
    * Длинный параметр №0: name: firstoption, has_arg: 1, flag=NULL, val: 0
    * Длинный параметр №1: name: secondoption, has_arg: 1, flag=NULL, val: 1
     */ 
    
    return 0;
}
