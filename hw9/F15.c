int abs(int a)
{
    return a<0?a*-1:a;
}

int count_bigger_abs(int n, int a[])
{
    int max=a[0];
    int count = 0;
    
    //Найдем максимальный элемент
    for (int i=1; i<n; i++)
    {
        max = a[i]>max?a[i]:max;
    }
    
  
    for (int i=0; i<n; i++)
    {
        count += (abs(a[i])>max?1:0);
    }
    
    return count;
}
    
int main(int argc, char **argv)
{
    return 0;
}
    
    
    
    
    
    
    
