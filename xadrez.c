#include <stdio.h>

int main() {
    // Quantidade de casas a se mover para cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // Movimento da TORRE: 5 casas para a direita (usando FOR)
  
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");
   
    // Movimento do BISPO: 5 casas na diagonal para cima e à direita (usando WHILE)

    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); 
   
    // Movimento da RAINHA: 8 casas para a esquerda (usando DO-WHILE)
   
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}
