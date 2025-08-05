#include <stdio.h>

void andarTorre(int casas) {
if (casas > 0){
   printf("Direita!\n");
   andarTorre(casas - 1);
}
}
void andarRainha(int casas) {
if (casas > 0) {
  printf("Esquerda!\n");
  andarRainha(casas - 1);
}
}
void andarBispo(int casas) {
   if (casas > 0) {
      printf("Cima, Direita\n");
      andarBispo(casas - 1);
   }
   
}

int main() {

   int  i, j;
   

   // Movimentação de cada peça do Xadrez
    printf("Torre\n");
    andarTorre(5);             // Torre utilizando o FOR, andando em linha reta pra direita.
  
   printf("Bispo\n");
   andarBispo(5);
   
   printf("Rainha\n");
     andarRainha(8);


   
  printf("\nCavalo\n");
  for (int i = 1, j = 5; i < 3 && j > 2; i++, j--)
  {
   
   if (i == 3) continue;
      if (i == 5) break;
    printf("Cima, Direita\n", i, j);      
   
   
  }
  



  return 0;
    
}