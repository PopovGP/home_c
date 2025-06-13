void func2(int  a[])
{
}

void func5(int  *a)
{
}

void func4(int  a[][10][10][10][10])
{
}

void func1_1(int  a[][3])
{
}


void func1_2(int  **a)
{
}




int main(int argc, char **argv)
{
    int a4[10][10][10][10][10] = {0};
    
    int a1[3][3] = {0};
    
    int a2[10]={0};
    
    int a3[]={1,2,3};
    
    func2(a2);
    func5((int *)a4);
    
    func4(a4);
    
    func1_1(a1);
    func1_2(a1);
  
    
    return 0;
}
