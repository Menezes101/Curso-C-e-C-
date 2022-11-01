#include <stdio.h>
#include <stdlib.h>>

void main(){

   //Definindo uma variável
   int a = 5, b;

   //Imprimindo a variável
   printf("\n%d", a);

   //Concatenando
   printf("\nO valor de var a eh: %d", a);

   //Mudando o valor da variável
   a = 15;
   printf("\nO valor de var a eh: %d\n", a);

   //Lendo valores
   scanf("%d", &b);
   printf("\nO valor de var b eh: %d", b);
}