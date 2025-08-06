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
   

   // Movimentação de cada peça do Xadrez
    printf("Torre\n");
    andarTorre(5);             // Torre utilizando o FOR, andando em linha reta pra direita.
  
   printf("Bispo\n");
   andarBispo(5);
   
   printf("Rainha\n");
     andarRainha(8);


   
  printf("\nCavalo\n");
  
    for (int i = 0; i < 2; i++) { 
     printf("Cima!\n");    
     for (int j = 0; j < 1; j++) {   
    if (i == 1 && j == 0) 
        printf("Direita!\n");  
        break;  
     }
   }
           
    
    
   return 0;

   }


     

  
   