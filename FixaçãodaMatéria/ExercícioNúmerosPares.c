#include <stdio.h>
#include <stdlib.h>

void main(){
   int i = 10;
   
   //Utilizando WHILE
   while(i % 2 == 0 && i <=20){
      printf("\n%d\n", i);
      i = i + 2;
   }
   
   //Utilizando FOR
   for(i; i % 2 == 0 && i <= 20; i++){
      printf("\n%d\n", i);
      i++;
   }
   
   //OU, utilizando FOR
   for(i; i <= 20; i++){
      if(i % 2 == 0){
         printf("\n%d\n", i);
      }
   }
   
   //Utilizando DO WHILE
   do{
      if(i % 2 ==0){
         printf("\n%d eh par\n", i);
      }else{
         printf("\n%d eh impar\n", i);
      }
      i++;
   }while(i <= 20);
   
   return 0;
}
