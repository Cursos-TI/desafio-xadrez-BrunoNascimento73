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

    // Implementação de Movimentação do cavalo
    printf("Irei mover meu cavalo\n");
    // While
    int movimentocompleto = 1 ;
    while (movimentocompleto--) {
      for (int i = 0; i < 2; i++) {
        printf("Cima\n");
      }
      printf("esquerda\n");
    }
   
    
    // Do while
    int i = 0;
    printf("Irei Mover meu cavalo\n");
    do // vai ser executado
    {
      printf("Baixo\n");
      i++;
    } while ( i < 2); //enquanto condição for verdadeira
    printf("direita\n");
    
    

    printf("--------------------------\n");    


return 0;
}