#include <stdio.h>
#include <locale.h>

void main(){
   int a = 20;

   //Conectivo Lógico "e" (AND). Se UMA comparação for falsa, não entra no bloco.
   if(a > 5 && a < 15){
      printf("\nA variavel 'a' esta entre 5 e 15");
   }

   //Conectivo Lógico "ou" (OR)
   if(a > 5 || a > 15){
      printf("\nA variavel 'a' eh maior que 5 ou 15");
   }

   //Misturando conectivos
   if((a > 5 && a > 15) || a == 20){
      printf("\nA variavel 'a' esta entre 5 e 15 ou vale 20");
   }
   return 0;
}
