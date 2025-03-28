#include <stdio.h>

void moverTorre(int num){
    if(num > 0){
        printf("Direita\n");
        moverTorre(num - 1);
    }
}
void moverBispo(int num){
    if(num > 0){
        for(int i = 0; i < 1; i++){
            printf("Cima\n");
            for(int j = 0; j < 1; j++){
                printf("Direita\n");
            }
        }
        moverBispo(num - 1);
    }
}
void moverRainha(int num){
    if(num > 0){
        printf("Esquerda\n");
        moverRainha(num - 1);
    }
}
void moverCavalo(int num){
    if(num > 0){
        if(num == 1){
            printf("Esquerda\n");
        }else{
            printf("Baixo\n");
            moverCavalo(num - 1);
        }
        
    }
}

int main() {
    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimentação do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimentação do Cavalo: 2 casa para baixo e uma para esquerda
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(3);

    return 0;
}

