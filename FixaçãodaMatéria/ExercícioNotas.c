#include <stdio.h>
#include <stdlib.h>

int main(){
   float a, b, media;
   printf("\nDigite a nota 1: ");
   scanf ("%f", &a);
   fflush(stdin);
   printf("Digite a nota 2: ");
   scanf ("%f", &b);
   media = (a + b) / 2;
   printf("Media: %.2f", media);
   return 0;
}