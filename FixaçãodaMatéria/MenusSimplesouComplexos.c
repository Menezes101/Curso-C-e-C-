#include <stdio.h>
#include <stdlib.h>

void main(){
   int opcao;

   //Confere e valida a 'opcao'
   while (opcao < 1 || opcao > 3){
      //Interface de menu
      printf("Escolha uma opcao: \n");
      printf("\n1-Opcao 1\n");
      printf("\n2-Opcao 2\n");
      printf("\n3-Opcao 3\n\n");

      scanf("%d", &opcao);

      //Resultado de acordo com a opção escolhida
      switch (opcao){
      case 1:
         printf("\nOpcao 1 escolhida!");
         break;
      case 2:
         printf("\nOpcao 2 escolhida!");
         break;
      case 3:
         printf("\nOpcao 3 escolhida!");
         break;   
      default:
         printf("\nOpcao invalida! ");
         break;
      }
   }
}