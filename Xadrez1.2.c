#include <stdio.h>
#include <stdlib.h>

// ====================== TORRE (RECURSIVA) ======================
void moverTorre(int casas, int direcao){
    if (casas == 0) return; // condição de parada

    switch(direcao){
        case 1: printf("Cima\n"); break;
        case 2: printf("Baixo\n"); break;
        case 3: printf("Esquerda\n"); break;
        case 4: printf("Direita\n"); break;
    }

    moverTorre(casas - 1, direcao); // chamada recursiva
}

// ====================== RAINHA (RECURSIVA) ======================
void moverRainha(int casas, int direcao){
    if (casas == 0) return;

    switch(direcao){
        case 1: printf("Cima\n"); break;
        case 2: printf("Baixo\n"); break;
        case 3: printf("Esquerda\n"); break;
        case 4: printf("Direita\n"); break;
        case 5: printf("Cima\nDireita\n"); break;
        case 6: printf("Cima\nEsquerda\n"); break;
        case 7: printf("Baixo\nDireita\n"); break;
        case 8: printf("Baixo\nEsquerda\n"); break;
    }

    moverRainha(casas - 1, direcao);
}

// ====================== BISPO ======================
// Parte 1: recursividade
void moverBispoRec(int casas, int direcao){
    if (casas == 0) return;

    switch(direcao){
        case 1: printf("Cima\nDireita\n"); break;
        case 2: printf("Cima\nEsquerda\n"); break;
        case 3: printf("Baixo\nDireita\n"); break;
        case 4: printf("Baixo\nEsquerda\n"); break;
    }

    moverBispoRec(casas - 1, direcao);
}

// Parte 2: loops aninhados (vertical + horizontal)
void moverBispoLoop(int casas){
    int i, j;

    for(i = 0; i < casas; i++){ // vertical
        for(j = 0; j < 1; j++){ // horizontal (1 casa por passo)
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// ====================== CAVALO (LOOPS COMPLEXOS) ======================
void moverCavalo(){
    int i, j;

    printf("Movimento do Cavalo:\n");

    for(i = 0; i < 3; i++){ // loop maior
        for(j = 0; j < 3; j++){ // loop interno

            // duas casas para cima
            if(i < 2 && j == 0){
                printf("Cima\n");
                continue;
            }

            // uma casa para direita
            if(i == 2 && j == 1){
                printf("Direita\n");
                break;
            }
        }
    }
}

// ====================== MAIN ======================
int main(){

    int menu, mov, casas = 5;

    printf("\n--- XADREZ 2.0 AVANÇADO ---\n\n");

    printf("Escolha a peça:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &menu);

    switch(menu){

        case 1:
            printf("\nDireção do Bispo:\n");
            printf("1 - Diagonal superior direita\n");
            printf("2 - Diagonal superior esquerda\n");
            printf("3 - Diagonal inferior direita\n");
            printf("4 - Diagonal inferior esquerda\n");
            scanf("%d", &mov);

            printf("\n--- Bispo (Recursivo) ---\n");
            moverBispoRec(casas, mov);

            printf("\n--- Bispo (Loops Aninhados) ---\n");
            moverBispoLoop(casas);
            break;

        case 2:
            printf("\nDireção da Torre:\n");
            printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
            scanf("%d", &mov);

            printf("\n--- Torre (Recursiva) ---\n");
            moverTorre(casas, mov);
            break;

        case 3:
            printf("\nDireção da Rainha:\n");
            printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
            printf("5 - Diagonal superior direita\n6 - Diagonal superior esquerda\n");
            printf("7 - Diagonal inferior direita\n8 - Diagonal inferior esquerda\n");
            scanf("%d", &mov);

            printf("\n--- Rainha (Recursiva) ---\n");
            moverRainha(casas, mov);
            break;

        case 4:
            printf("\n--- Cavalo (Loops Complexos) ---\n");
            moverCavalo();
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}