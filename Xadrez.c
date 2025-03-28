#include <stdio.h>

int main() {
    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);

    // Movimentação do Cavalo: 2 casa para baixo e uma para esquerda
    printf("\nMovimento do Cavalo\n");
    int k,l = 0;
    for(k = 0; k < 1; k++){
        while(l < 2){
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda");
    }

    return 0;
}

