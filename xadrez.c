#include <stdio.h>


int main() {
    // Implementação de Movimentação da Torre
    printf("--------------------------\n");
    printf("Moverei minha torre!\n");
    for (int i = 0; i < 5; i++) {
      printf("Direita!\n");
    }
    printf("\n");

    // Implementação de Movimentação do Bispo
    printf("Irei mover meu bispo!\n");
    for (int i = 0; i < 6; i++) {
      printf("direita\n");
      printf("Cima\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("irei mover meu minha rainha\n");
    for (int i = 0; i < 4; i++) {
      printf("cima\n");
      printf("esquerda\n");
    }
    printf("\n");
    printf("--------------------------\n");    


return 0;
}