#include <stdio.h>
#include <stdlib.h>

int main(){
   int a, b, c, mult;
   printf("\nDigite 3 numeros inteiros: ");
   scanf("%d %d %d", &a, &b, &c);
   mult = a * b * c;
   printf("\nResultado da multiplicacao dos 3 digitos eh: %d", mult);
   return 0;
}