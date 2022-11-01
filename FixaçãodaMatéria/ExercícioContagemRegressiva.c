#include <stdio.h>
#include <stdlib.h>

void main(){

   int i = 10;
   printf("Contagem regressiva:");  
   //Utilizando FOR
   for(i; i >= 0; i--){
      printf("\n%d", i);
   }

   //Utilizando WHILE
   while(i >= 0){
      printf("\n%d", i);
      i--;
   }

   //Utilizando DO WHILE  
   do{
      printf("\n%d", i);
      i--;
   }while(i >= 0);
   
}