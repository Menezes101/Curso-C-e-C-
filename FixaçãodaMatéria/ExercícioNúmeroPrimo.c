#include <stdio.h>
#include <stdlib.h>

void main(){
   int i, valor, aux = 0;

   printf("\nDigite um numero: ");
   scanf("%d", &valor);
   
   for(i = 1; i <= valor; i++){
      if(valor % i == 0){
         aux++;
      }
   }
   if(aux == 2){
      printf("%d eh primo", valor);
   }else{
      printf("%d nao eh primo pois ele tem %d divisores", valor, aux);
   
   }
   
   return 0;
   
}