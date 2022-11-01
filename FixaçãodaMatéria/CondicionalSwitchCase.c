#include <stdio.h>
#include <stdlib.h>

void main(){
   int a = 2;
   char b = 'x';

   switch (a){
      case 1:
         printf("\nOpcao escolhida: 1");
         break;
      case 2:
         printf("\nOpcao escolhida: 2");
         break;
      case 3:
         printf("\nOpcao escolhida: 3");
         break;
   
      default:
         printf("\nOpcao invalida");
         break;
   }
      switch (b){
      case 'x':
         printf("\nA letra e x");
         break;
      default:
         printf("\nOpcao invalida");
         break;
   }
   return 0;
}