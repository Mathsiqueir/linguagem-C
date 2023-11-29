#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3], int meta) {
    int matrizTotal[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTotal[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    printf("Matriz Total:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizTotal[i][j]);
        }
        printf("\n");
    }

    printf("Setores que alcançaram a meta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrizTotal[i][j] >= meta) {
                printf("Setor %d de %d\n", (i + 1), (j + 1));
            }
        }
    }
}

int main() {
    int dia1[3][3];
    int dia2[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d \n", (i + 1), (j + 1));
            scanf("%d", &dia1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d \n", (i + 1), (j + 1));
            scanf("%d", &dia2[i][j]);
        }
    }

    int meta = 0;
    printf("Digite a meta por setor \n");
    scanf("%d", &meta);

    validarMeta(dia1, dia2, meta);

    return 0;
}

