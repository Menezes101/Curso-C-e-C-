#include <stdio.h>
#include <stdlib.h>>

void main(){
   //Definindo variáveis
   int a = 6, b = 3;

   //Soma
   printf("\nA soma de %d e %d eh: %d", a, b, a + b);

   //Subtração
   printf("\nA subtracao de %d e %d eh: %d", a, b, a - b);

   //Divisão
   printf("\nA divisao de %d e %d eh: %d", a, b, a / b);

   //Multiplicação
   printf("\nA multiplicacao de %d e %d eh: %d", a, b, a * b);

   //Resto da divisão
   printf("\nO resto da divisao de %d e %d eh: %d", a, b, a % b);

   //Valor absoluto (valor positivo)
   printf("\nO valor absoluto de -3 = %d\n", abs(-3));

   //Pausa o programa após executar
   system("pause");
}
