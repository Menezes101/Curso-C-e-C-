#include <stdio.h>
#include <stdlib.h>

void main(){
   int i;

   //Tabuada do 5
   for(i = 1; i <= 10; i++){
      printf("\n5 x %d = %d\n", i, 5 * i);
   }

   //Contando de 2 em 2
   for(i = 0; i <= 10; i = i +2){
      printf("\n%d\n", i);
   }

   //Contagem regressiva
   for(i = 10; i > 0; i--){
      printf("\n%d\n", i);
   }
}   