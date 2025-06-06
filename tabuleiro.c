#include <stdio.h>

int main() {
    char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //1. Criando o tabuleiro (Matriz 10x10)
        printf("Tabuleiro Batalha Naval\n");
        printf("A B C D E F G H I J\n");
    int tabuleiro[10][10] = {(0)};
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
         printf("%d ", tabuleiro[i][j]);
    } 
    printf("\n");
     }
    
    }



