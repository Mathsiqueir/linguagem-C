#include <stdio.h>

int main()
{
   int i = 0;
   int total1 = 0;
   int total2 = 0;
 
   i = 11;
   while(i >= 0){
       i--;
       total1 = total1 + 1;
    }
 
   i = 11;
   do{
       total2 = total2 + 1;
       i--;
   }while(i > 0);
 
   printf("%i %i ", total1, total2);
}
