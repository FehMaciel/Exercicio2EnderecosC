#include <stdio.h>

int main() {
   int vetor[7];
   int i;
   int matricula = 202202578771; 


   for (i = 0; i < 7; i++) {
      printf("Digite um número inteiro para a posição %d do vetor: ", i);
      scanf("%d", &vetor[i]);
   }


   printf("Endereços do vetor %d%d%d%d:\n", (matricula/1000)%10, (matricula/100)%10, (matricula/10)%10, matricula%10);
   for (i = 0; i < 7; i++) {
      printf("Endereço da posição %d: %p\n", i, &vetor[i]);
   }

   return 0;
}