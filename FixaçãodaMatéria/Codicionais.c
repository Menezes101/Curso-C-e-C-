#include <stdio.h>
#include <stdlib.h>

void main(){
   int a = 5, opcao = 6;
   float b = 2.5;
   char c = 'x';

   //Condicional if
   if(a == 5){
      printf("A variavel a eh igual a 4\n");
   }if(b == 2.5){
      printf("\nA variavel b eh igual a 2.5\n");
   }if(c == 'x'){
      printf("\nA variavel c eh igual a x\n");
   }

   //Número par ou ímpar
   if(a % 2 == 1){
      printf("\nA variavel a eh impar\n");
   }else{
      printf("\nA variavel a eh par\n");
   }

   printf("\n"); 

   //Condicional composta
   if(opcao == 1){
      printf("Opcao 1");
   }else if(opcao == 2){
      printf("Opcao 2");
   }else{
      printf("A opcao nao eh igual a 1 nem 2");
   }
}