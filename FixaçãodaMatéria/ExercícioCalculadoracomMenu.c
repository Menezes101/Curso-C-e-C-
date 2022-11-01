#include <stdio.h>
#include <stdlib.h>

void main(){
   int opcao;
   float a, b, soma, sub, div, mult;
   printf("\n\n\n----------------------BEM-VINDO----------------------\n\n\n\n");
   printf("\n    Digite a opcao para iniciarmos a calculadora:\n\n     1-Somar\n     2-Subtrair\n     3-Dividir\n     4-Multiplicar\n");
   scanf("%d", &opcao);
   printf("\nDigite o primeiro valor: ");
   scanf("%f", &a);
   printf("\nDigite o segundo valor: ");
   scanf("%f", &b);
   switch (opcao){
      case 1:
         soma = a + b;
         printf("O resultado da soma = %.2f", soma);
         break;
      case 2:
         sub = a - b;
         printf("O resultado da substracao = %.2f", sub);
         break;
      case 3:
         div = a / b;
         printf("O resultado da divisao = %.2f", div);
         break;
      case 4:
         mult = a * b;
         printf("O resultado da multiplicacao = %.2f", mult);
         break;
      default:
         printf("Operacao invalida!");
         break;
   }
   return 0;
}