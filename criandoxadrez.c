#include <stdio.h>

int main() {
   
   int torre = 5, bispo = 5, rainha = 8;
   int contadorBispo = 0, contadorRainha = 0, contadorCavalo = 1;
   int i, j;

   printf("**Jogo de Xadrez**\n\n");
  
   // direção das peças abaixo
  
   printf("Torre\n");
   for (int i = 0; i < torre; i++) {  // A torre andando 5 casas acima
      printf("Cima\n");
   } 
   printf("Bispo\n");
   while (contadorBispo < bispo) {       // O bispo andando a 5 casas na diagonal
      printf("Cima e direita\n");
      contadorBispo++;
   }
   printf("Rainha\n");
   
   do {
      printf("Esquerda\n");
      contadorRainha++;                      // A rainha seguindo 8 casas a esquerda
   } while (contadorRainha < rainha); 
   
   printf("\nCavalo\n");

  for (i = 0; i < contadorCavalo; i++)                // Utilizado um loop dentro do loop.
   {  j = 0;
   while (j < 2) {
      printf("baixo\n");
       j++;
                           // Cavalo anda em L, seria duas linhas abaixo e uma coluna a esquerda.
   }
   printf("Esquerda\n");
  }

  
  return 0;
    
}