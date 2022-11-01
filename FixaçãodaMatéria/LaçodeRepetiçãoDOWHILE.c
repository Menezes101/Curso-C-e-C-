#include <stdio.h>
#include <stdlib.h>

void main(){
   int a = 1;

   //Primeiro confere a condição, depois executa o laço de repetição
   //Contando até a 10
   while(a <= 10){
      printf("\n%d\n", a);

      //Incremento de a
      a++; //a = a + 1;
   }
   
   a = 20;

   //Primeiro executa uma vez, depois confere a condição
   do{
      printf("\n%d\n", a);
      a++;
   }while(a <= 10);
}