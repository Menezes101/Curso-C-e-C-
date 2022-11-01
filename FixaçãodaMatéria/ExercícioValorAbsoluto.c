#include <stdio.h>
#include <stdlib.h>

int main(){
   float a, b;
   int resultado;
   printf("\nDigite a primeira nota: ");
   scanf("%f", &a);
   printf("\nDigite a segunda nota: ");
   scanf("%f", &b);
   resultado = a - b;
   printf("\nO resultado absoluto da diferenca entre as duas notas eh %d", abs(resultado));
   return 0;
}