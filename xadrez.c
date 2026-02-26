#include <stdio.h>


void movimentodiagnalD(){
  for (int i = 0; i < 6; i++) {
    printf("direita\n");
    printf("Cima\n");
  }
}

void movimentodiagnale(){
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++)
      {
        printf("esquerda\n");
      }
      printf("cima\n");
      
    }
}

void movimentohorizontal(){ // função recursiva
  for (int i = 0; i < 5; i++) {
    printf("Direita!\n");
  }
}

void MovimentoCavaloWhile(){
  int movimentocompleto = 1 ;
    while (movimentocompleto--) {
      for (int i = 0; i < 2; i++) {
        printf("Cima\n");
      }
      printf("esquerda\n");
    }
}

void MovimentoCavaloDo(){
    int i = 0;
    do // vai ser executado
    {
      printf("Baixo\n");
      i++;
    } while ( i < 2); //enquanto condição for verdadeira
    printf("direita\n");
}

int main() {
    // Implementação de Movimentação da Torre
    printf("--------------------------\n");
    printf("Moverei minha torre!\n");
    movimentohorizontal();
    printf("\n");

    // Implementação de Movimentação do Bispo
    printf("Irei mover meu bispo!\n");
    movimentodiagnalD();
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("irei mover meu minha rainha\n");
    movimentodiagnale();
    printf("\n");

    // Implementação de Movimentação do cavalo
    printf("Irei mover meu cavalo\n");
    // While
    MovimentoCavaloWhile();
    printf("\n");
   
    
    // Do while
    printf("Irei Mover meu cavalo\n");
    MovimentoCavaloDo(); 
    printf("\n");
    
    

    printf("--------------------------\n");    


return 0;
}