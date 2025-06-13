#include <stdio.h>



//Первый элемент - значение цифры, второй элемент - ссылка на предыдущую структуру
struct my_arr {
        unsigned int num;
        struct my_arr * ptr;
};


    
void func (int *counter, unsigned int n, struct my_arr *prevArr)
{
    
 
    
    unsigned int number;
    scanf("%d" , &number);
    
   
    
 
    
    if(number==0)
    {
        //Делаем цикл по структурам, упорядочивая их
      
        int i=0;
        struct my_arr *ptrArr = prevArr;
        
        

        i=0;

        ptrArr = prevArr;
        struct my_arr *ptrArr_i = prevArr;
        struct my_arr *ptrArr_j = prevArr;

        unsigned int number_i, number_j;
   
        
        
        while(1)
        {
            i++;
 
            number_i = (*ptrArr_i).num;
          
            
           
            ptrArr_j = (*ptrArr_i).ptr;
            
            if (ptrArr_j == NULL) break;
            
            ptrArr = ptrArr_i;

            
            while(1)
            {
               
                
                number_j = (*ptrArr_j).num;
               
                
                if (number_i > number_j)
                {
                  
                    (*ptrArr_j).num = (*ptrArr_i).num;
                    (*ptrArr_i).num = number_j;
           
                    
                    
                    
                }
                
                
     
                ptrArr_i =  ptrArr_j;
                number_i = (*ptrArr_i).num;
                ptrArr_j = (*ptrArr_j).ptr;
                
                if (ptrArr_j == NULL) break;
            

                
            }
            
            
            ptrArr_i = prevArr; 
         
            if (i==*counter) break;
         
         
            
            
            
         
        }
     
        
       ptrArr = prevArr;
       i=prevArr->num;
        while(1)
        { 
            number = (*ptrArr).num;
            if (i!=number)
            { 
                printf("%d", i);
                return;
            }
            i++;
            number = (*ptrArr).num;
            
       
            
            ptrArr = (*ptrArr).ptr;
            
            
            if (ptrArr == NULL) break;
            
         
        }
        
        
     
            
        return;
        
    }
    
    struct my_arr arr;
    
    arr.num=number;
    arr.ptr=prevArr;
    
    (*counter)++;

    
    func (counter, number, &arr);
}


int main(int argc, char **argv)
{
   
  
    
    struct my_arr arr;
    


    unsigned int number;
    scanf("%d",&number);

    int counter=0;
    
    arr.num=number;
    arr.ptr=(struct my_arr *)NULL;

    func(&counter, number, &arr);
    return 0;

}
