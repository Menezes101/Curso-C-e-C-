#include <stdio.h>
#include <stdlib.h>

void main(){
   float n1, n2, n3, media;
   printf("Digite a primeira nota: \n");
   scanf("%f", &n1);
   printf("Digite a segunda nota: \n");
   scanf("%f", &n2);
   printf("Digite a terceira nota: \n");
   scanf("%f", &n3);

   media = (n1 + n2 + n3) / 3;

   printf("Media Final = %.2f", media);

   if(media >= 7){
      printf("\nO aluno foi aprovado!");
   }else{
      printf("\nO aluno foi reprovado.");
   }
   return 0;
}