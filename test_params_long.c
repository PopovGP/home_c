#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[])
{
    
 
    opterr = 0; 
    /*
     * Проверка функции getopt_long
     * В переменной optarg хранится указатель на строку с аргументом как 
     * короткого, так и длинного параметра.
     * Если аргумента нет, то optarg == NULL.
     * Если аргумент короткий, то в переменной res находится короткий параметр
     * (т.е. один символ).
     * В переменной optind находится порядковый номер параметра, начинаюшийся с нуля.
     * При этом параметрами считаются все строки, разделенные пробельным символом.
     * Если же res==0, то значит это длинный параметр. В optarg хранится аргумент этого параметр,
     * а в longindex устанавливается индекс этого параметра в массиве option.
     * Если поставить opterr == 1 (по умолчанию), то программа сама выдать предупреждение,
     * если будет указана неверная опция. Пример:
     * 'test_params_long: invalid option -- d'
     * */


    printf("Использование функции getopt_long:\n");
    char *optstr = "fvx:z:";
    unsigned int res;
    int longindex = -1;
    int flag1 = 0;
    int flag2 = 0;
    struct option null_option = {NULL, 0, NULL, 0};
    struct option params[]={
        {"firstoption", required_argument, &flag1, 10},
        {"secondoption", required_argument, &flag2, 10},
   
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
        printf("Длинный параметр №%d: name: %s, has_arg: %d, *flag: %d, val: %d\n", count, 
        params[count].name,
        params[count].has_arg,
        *(params[count].flag),
        params[count].val);

        count++;
    }
    /* Результат выполнения
     * @MacBook-Air home_c % ./test_params_long --firstoption   firstvalue -f -v -x par1 -zpar2 --secondoption=secondvalue -zpar3
     * Использование функции getopt_long:
     * res as char:, res as dec:0, optarg: firstvalue, opterr: 0, optopt as dec: 0, optopt as char: , optind: 3, *longindex: 0
     * res as char:f, res as dec:102, optarg: (null), opterr: 0, optopt as dec: 0, optopt as char: , optind: 4, *longindex: -1
     * res as char:v, res as dec:118, optarg: (null), opterr: 0, optopt as dec: 0, optopt as char: , optind: 5, *longindex: -1
     * res as char:x, res as dec:120, optarg: par1, opterr: 0, optopt as dec: 0, optopt as char: , optind: 7, *longindex: -1
     * res as char:z, res as dec:122, optarg: par2, opterr: 0, optopt as dec: 0, optopt as char: , optind: 8, *longindex: -1
     * res as char:, res as dec:0, optarg: secondvalue, opterr: 0, optopt as dec: 0, optopt as char: , optind: 9, *longindex: 1
     * res as char:z, res as dec:122, optarg: par3, opterr: 0, optopt as dec: 0, optopt as char: , optind: 10, *longindex: -1
     * Длинный параметр №0: name: firstoption, has_arg: 1, *flag: 10, val: 10
     * Длинный параметр №1: name: secondoption, has_arg: 1, *flag: 10, val: 10
     */ 
    
    return 0;
}
