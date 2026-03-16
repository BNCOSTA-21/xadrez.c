#include <stdio.h>

// FUNÇÃO RECURSIVA DA TORRE
void moverTorre(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    moverTorre(casas - 1);
}


// FUNÇÃO RECURSIVA DA RAINHA
void moverRainha(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


// FUNÇÃO DO BISPO (RECURSIVO + LOOPS ANINHADOS)
void moverBispo(int casas) {

    if (casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    for (vertical = 0; vertical < 1; vertical++) {

        for (horizontal = 0; horizontal < 1; horizontal++) {

            printf("Cima Direita\n");

        }

    }

    moverBispo(casas - 1);
}


int main() {

    // DECLARAÇÃO DAS VARIÁVEIS

    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    int movimentos_cavalo_vertical = 2;
    int movimentos_cavalo_horizontal = 1;

    int i, j;

    // MOVIMENTO DA TORRE

    printf("Movimento da Torre:\n");

    moverTorre(casas_torre);


    // MOVIMENTO DO BISPO

    printf("\nMovimento do Bispo:\n");

    moverBispo(casas_bispo);


    // MOVIMENTO DA RAINHA

    printf("\nMovimento da Rainha:\n");

    moverRainha(casas_rainha);


    // MOVIMENTO DO CAVALO
    // LOOPS COMPLEXOS

    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < movimentos_cavalo_vertical; i++) {

        printf("Cima\n");

        if (i == movimentos_cavalo_vertical - 1) {

            for (j = 0; j < movimentos_cavalo_horizontal; j++) {

                if (j > 1) {
                    break;
                }

                printf("Direita\n");

            }

        }

    }

    return 0;
}