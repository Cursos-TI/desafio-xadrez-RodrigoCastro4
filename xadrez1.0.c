#include <stdio.h>
#include <stdlib.h>

int main(){

    int menu, movbispo, movtorre, movrainha, i;

    printf("\n\n- - - - - BEM-VINDO AO XADREZ 1.0 - - - - -\n\n\n");

    do {
        printf("Escolha qual peça irá ser movimentada:\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        scanf("%d", &menu);

        switch (menu){
            case 1:
                printf("Escolha em qual direção você quer se mover\n\n");
                printf("1 - Diagonal superior direita\n");
                printf("2 - Diagonal superior esquerda\n");
                printf("3 - Diagonal inferior direita\n");
                printf("4 - Diagonal inferior esquerda\n");
                scanf("%d", &movbispo);
                switch (movbispo){
                    case 1:
                        for (i = 0; i < 5; i++){
                            printf("O bispo se moveu para Diagonal superior direita\n");
                        }
                        break;
                    case 2:
                        for (i = 0; i < 5; i++){
                            printf("O bispo se moveu para Diagonal superior esquerda\n");
                        }
                        break;
                    case 3:
                        for (i = 0; i < 5; i++){
                            printf("O bispo se moveu para Diagonal inferior direita\n");
                        }
                        break;
                    case 4:
                        for (i = 0; i < 5; i++){
                            printf("O bispo se moveu para Diagonal inferior esquerda\n");
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                        break;
                }
                break;

            case 2:
                printf("Escolha em qual direção você quer se mover\n\n");
                printf("1 - Cima\n");
                printf("2 - Baixo\n");
                printf("3 - Esquerda\n");
                printf("4 - Direita\n");
                scanf("%d", &movtorre);
                switch (movtorre){
                    case 1:
                        for (i = 0; i < 5; i++){
                            printf("A torre se moveu para cima\n");
                        }
                        break;
                    case 2:
                        for (i = 0; i < 5; i++){
                            printf("A torre se moveu para baixo\n");
                        }
                        break;
                    case 3:
                        for (i = 0; i < 5; i++){
                            printf("A torre se moveu para esquerda\n");
                        }
                        break;
                    case 4:
                        for (i = 0; i < 5; i++){
                            printf("A torre se moveu para direita\n");
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                        break;
                }
                break;

            case 3:
                printf("Escolha em qual direção você quer se mover\n\n");
                printf("1 - Cima\n");
                printf("2 - Baixo\n");
                printf("3 - Esquerda\n");
                printf("4 - Direita\n");
                printf("5 - Diagonal superior direita\n");
                printf("6 - Diagonal superior esquerda\n");
                printf("7 - Diagonal inferior direita\n");
                printf("8 - Diagonal inferior esquerda\n");
                scanf("%d", &movrainha);
                switch (movrainha){
                    case 1:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para cima\n");
                        }
                        break;
                    case 2:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para baixo\n");
                        }
                        break;
                    case 3:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para esquerda\n");
                        }
                        break;
                    case 4:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para direita\n");
                        }
                        break;
                    case 5:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para Diagonal superior direita\n");
                        }
                        break;
                    case 6:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para Diagonal superior esquerda\n");
                        }
                        break;
                    case 7:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para Diagonal inferior direita\n");
                        }
                        break;
                    case 8:
                        for (i = 0; i < 5; i++){
                            printf("A rainha se moveu para Diagonal inferior esquerda\n");
                        }
                        break;
                    default:
                        printf("Opção inválida!\n");
                        break;
                }
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (menu != 1 && menu != 2 && menu != 3);

    return 0;
}