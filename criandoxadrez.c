#include <stdio.h>

int main() {
   
   int torre = 5, bispo = 5, rainha = 8;
   int contadorBispo = 0;
   int contadorRainha = 0;

   printf("**Jogo de Xadrez**\n\n");
   for (int i = 0; i < torre; i++) {
      printf("Torre 5 casas a frente!\n");
   } 
   printf("Bispo\n");
   while (contadorBispo < bispo) {
      printf("Diagonal 5 casas a Cima Direita\n");
      contadorBispo++;
   }
   printf("Rainha\n");
   
   do {
      printf(" 8 casas a Esquerda\n");
      contadorRainha++;
   } while (contadorRainha < rainha);     

  
  return 0;
    
}