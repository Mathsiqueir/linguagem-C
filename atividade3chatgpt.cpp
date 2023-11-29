#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3], int meta) {
    // Step 2: Sum the values of the two matrices
    int matrizTotal[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTotal[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    // Step 3: Show the total matrix in matrix format
    printf("Matriz Total:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizTotal[i][j]);
        }
        printf("\n");
    }

    // Step 4: Write to the screen the sectors that reached the goal
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

    // Reading matrix on the first day
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d \n", (i + 1), (j + 1));
            scanf("%d", &dia1[i][j]);
        }
    }

    // Reading matrix on the second day
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d \n", (i + 1), (j + 1));
            scanf("%d", &dia2[i][j]);
        }
    }

    // Input for the goal (meta)
    int meta = 0;
    printf("Digite a meta por setor \n");
    scanf("%d", &meta);

    // Call the function to validate the goal and perform the other steps
    validarMeta(dia1, dia2, meta);

    return 0;
}
