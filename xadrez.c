 #include <stdio.h>
 
 
 void moverTorre(int casasRestantes){
     if (casasRestantes <= 0) return;
     printf("Direita\n");
     moverTorre(casasRestantes - 1);
 }
 
 void moverBispo(int casasVerticais, int casasHorizontais){
     if(casasVerticais <= 0) return;
     
     for(int i = 1; i <= 1; i++){
         printf("Cima\n");
         
     for(int j = 1; j <= casasHorizontais; j++){
         printf("Direita\n");
     }
     }
     moverBispo(casasVerticais - 1, casasHorizontais);
 }
  
  void moverRainha(int casasRestantes){
      if(casasRestantes <= 0) return;
      printf("Esquerda\n");
      moverRainha(casasRestantes - 1);
  }
  void moverCavalo() {
      int cima = 0, direita = 0;
      int limiteCima = 2, limiteDireita = 1;
      
      printf("\n**Movimento do Cavalo**\n");
      
      for (int i = 1, j = limiteCima; i <= limiteCima && j >= 0; i++, j--) {
          cima++;
          printf("Cima\n");
          
          if (cima < limiteCima) {
              continue;
          }
          while (direita < limiteDireita) {
              printf("Direita\n");
              direita++;
              
              if (direita == limiteDireita) {
                  break;
              }
          }
      }
  }
  int main(){
      
      printf("\n***Movimento da Torre***\n");
      moverTorre(5);
      
      printf("\n***Movimento do Bispo***\n");
      moverBispo(3, 1);
      
      printf("\n***Movimento Rainha***\n");
      moverRainha(8);
      
      moverCavalo();
      
      return 0;
  }