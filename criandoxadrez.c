#include <stdio.h>
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_Cavalo_PRIMEIRA_PARTE 2

int main() {
   
   int contadorBispo = 0, contadorRainha = 0;
   int i, j;

   printf("**Jogo de Xadrez**\n\n");
  
   // direção das peças abaixo
  
   printf("Torre\n");
   for (int i = 0; i < MOV_TORRE; i++) {  // A torre andando 5 casas acima
      printf("Direita\n");
   } 
   printf("Bispo\n");
   while (contadorBispo < MOV_BISPO) {       // O bispo andando a 5 casas na diagonal
      printf("Cima e direita\n");
      contadorBispo++;
   }
   printf("Rainha\n");
   
   do {
      printf("Esquerda\n");
      contadorRainha++;                      // A rainha seguindo 8 casas a esquerda
   } while (contadorRainha < MOV_RAINHA); 
   
   printf("\nCavalo\n");

  for (i = 1; i < MOV_Cavalo_PRIMEIRA_PARTE; i++)                // Utilizado um loop dentro do loop.
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