#include <stdio.h>
#include <stdlib.h>

void main(){
   int a = 1, b = 10;

   //Contando até a 10
   while(a <= 10){
      printf("\n%d\n", a);

      //Incremento de a
      a++; //a = a + 1;
   }

   //Contagem regressiva
   while(b >= 1){
      printf("\n%d\n", b);

      //Decremento de b
      b--; //b = b - 1;
   }
}