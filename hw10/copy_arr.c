void copy_arr(char *dest, char *src)
{
    char *psrc = src;
    char *pdest = dest;
    while(*src)
    {
        *pdest = *psrc;
        psrc++;
        pdest++;
    }
}
   
   
