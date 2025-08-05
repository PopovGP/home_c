#include <stdio.h>
#include <getopt.h>

int main(int argc, char *argv[])
{
    /*
     * @MacBook-Air home_c % ./test_params --myvalue "sadfa" -f -v -x par1 -zpar2
     * Номер параметра: 0, значение параметра: ./test_params
     * Номер параметра: 1, значение параметра: --myvalue
     * Номер параметра: 2, значение параметра: sadfa
     * Номер параметра: 3, значение параметра: -f
     * Номер параметра: 4, значение параметра: -v
     * Номер параметра: 5, значение параметра: -x
     * Номер параметра: 6, значение параметра: par1
     * Номер параметра: 7, значение параметра: -zpar2
     */
    for (size_t i=0; i<argc; i++)
    {
        printf("Номер параметра: %zu, значение параметра: %s\n", i, argv[i]);
    }
    
    
    /* 
     * @MacBook-Air home_c % ./test_params  -f -v -x par1 -zpar2
     * Использование функции getopt:
     * res:f optarg: (null), opterr: 1, optopt as dec: 102, optopt as char: f, optind: 2
     * res:v optarg: (null), opterr: 1, optopt as dec: 118, optopt as char: v, optind: 3
     * res:x optarg: par1, opterr: 1, optopt as dec: 120, optopt as char: x, optind: 5
     * res:z optarg: par2, opterr: 1, optopt as dec: 122, optopt as char: z, optind: 6
     */
    printf("Использование функции getopt:\n");
    //opterr = 0;
    char *optstr = "fvx:z:";
    unsigned int res;
    while((res=getopt(argc, argv, optstr))!=-1)
    {
        printf("res:%c optarg: %s, opterr: %d, optopt as dec: %d, optopt as char: %c, optind: %d\n", res, optarg, opterr, optopt, optopt, optind);
    }
    
    printf("Использование функции getopt_long:\n");
    int longindex;
    int flag1 = 0;
    struct option null_option = {NULL, 0, NULL, 0};
    struct option params[]={
        {"mavalue", required_argument, &flag1, 10},
   
        null_option
    };
    
    
    while((res=getopt_long(argc, argv, optstr, params, &longindex))!=-1)
    {
        printf("res:%c optarg: %s, opterr: %d, optopt as dec: %d, optopt as char: %c, optind: %d, *longindex: %d\n", res, optarg, opterr, optopt, optopt, optind, longindex);
   
   
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
    
    return 0;
}
