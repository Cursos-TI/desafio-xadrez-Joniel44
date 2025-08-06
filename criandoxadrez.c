#include <stdio.h>

// utilizado o void para simplificar o código

void andarTorre(int casas) {
if (casas > 0){
   printf("Direita!\n");
   andarTorre(casas - 1);
}
}
void andarRainha(int casas) {
if (casas > 0) {
  printf("Esquerda!\n");               // código para cada peça do xadrez
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
    andarTorre(5);             
  
   printf("Bispo\n");                      // Nesta área onde fica a contagem das casas de cada peça
   andarBispo(5);
   
   printf("Rainha\n");
     andarRainha(8);


   
  printf("\nCavalo\n");
  
    for (int i = 0; i < 2; i++) { 
     printf("Cima!\n");                      // Neste, onde me deu o maior trabalho, foi utilizado loops aninhados com múltiplas variáveis.
     for (int j = 0; j < 1; j++) {   
    if (i == 1 && j == 0) 
        printf("Direita!\n");  
        break;                           
     }
   }
           
    
    
   return 0;

   }


     

  
   