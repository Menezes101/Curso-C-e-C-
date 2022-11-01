#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
   bool a = true, b = false;
   //Se a for verdadeira
   if(a){
      printf("A eh verdadeiro\n");
   }

   //Comparando b
   if(b){
      printf("\nB eh verdadeiro\n");
   }else{
      printf("\nB eh falso\n");
   }

   //Comparando uma falsidade
   if(!b){
      printf("\nB eh falso\n");
   }

   return 0;
}