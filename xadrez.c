#include <stdio.h>

int main() {
    
    int casasTorre = 5;
    printf("**Movimento da Torre**\n");
    for (int i = 1; i <= casasTorre; i++ ) {
        printf("Direita\n");
    }
    
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\n**Movimento do Bispo**\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\n**Movimento da Rainha**\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\n**Movimento do Cavalo**\n");
    
    for(int i = 1; i <= casasBaixo; i++){
        printf("Baixo\n");
        
        int contadorEsquerda = 1;
        while (contadorEsquerda <= casasEsquerda && i == casasBaixo){
            printf("Esquerda\n");
            contadorEsquerda++;
        }
    }
    

    return 0;
}