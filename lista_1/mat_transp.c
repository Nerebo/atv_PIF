#include <stdio.h>

int tam_a, tamb_b, i, j, c;

int main(void) {

scanf("%d %d", &tam_a, &tamb_b);

int mat[tam_a][tamb_b];
  
for(i = 0; i < tam_a; i++){
  for(j = 0; j < tamb_b; j++){
    scanf("%d", &c);
    mat[i][j] = c;
      }
}

for(i = 0; i < tam_a; i++){
  for(j = 0; j < tamb_b; j++){
  printf("%d ", mat[i][j]);
      }
  printf("\n");
}

for(j = (tamb_b-1); j > -1; j--){
  for(i = (tam_a-1); i > -1; i--){
    printf("%d ", mat[i][j]);
      }
  printf("\n");
}

  
  return 0;
}
