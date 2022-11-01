#include <stdio.h>
#include <stdlib.h>

void main(){
   float lado1, lado2, lado3;
   
   printf("\nDigite o primeiro valor: ");
   scanf("%f", &lado1);
   printf("\nDigite o segundo valor: ");
   scanf("%f", &lado2);
   printf("\nDigite o terceiro valor: ");
   scanf("%f", &lado3);
   
   if((lado1 == lado2) && (lado2 == lado3)){
      printf("\nVoce possui um triangulo equilatero!");
   }else if((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){
      printf("\nVoce possui um triangulo isosceles!");
   }else{
      printf("\nVoce possui um triangulo escaleno!");
   }

   return 0;
}