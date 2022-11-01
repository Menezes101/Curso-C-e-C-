#include <stdio.h>
#include <locale.h>

void main(){

   //Permite usar acentos
   setlocale(LC_ALL,"");

   //Imprime "olá" com acento
   printf("Olá");
}