#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

   //Responsável por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2)
   int aleatorio = rand() % 3;

   printf("%d", aleatorio);
   
   //Variável que recebe o resto da divisão do número por 5 (aleatório entre 1 e 5)
   int aleatorio2 = (rand() % 5) + 1;

   printf("\n%d", aleatorio2);
   return 0;
}