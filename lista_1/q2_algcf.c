#include <stdio.h>

int g, a, m, c, custo = 0;

int main() {
    scanf("%d %d %d %d", &g, &a, &m, &c);
    printf("\n");
  
    int cur[g][a];
    int atv[a][m];
    int mat[m][c];


    for (int i = 0; g > i; i++) {
        for (int j = 0; a > j; j++) {
            scanf("%d", &cur[i][j]);
        }
    }
    printf("\n");
  
    for (int i = 0; a > i; i++) {
        for (int j = 0; m > j; j++) {
            scanf("%d", &atv[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; m > i; i++) {
        for (int j = 0; c > j; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");


    for (int i = 0; g > i; i++) {
        for (int j = 0; c > j; j++) {
            for (int k = 0; a > k; k++) {
                for (int l = 0; m > l; l++) {
                    custo += cur[i][k] * atv[k][l] * mat[l][j];
                }
            }
            printf("%d ", custo);
        }
      printf("\n");
    }
    return 0;
}
