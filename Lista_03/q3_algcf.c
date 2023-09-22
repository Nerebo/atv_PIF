#include <stdio.h>
#include <math.h>

int C, N, i, j, x_0, x_1, y_1, y_0, resp, mp, indice_menor;


int main(void) {
  scanf("%d", &C);
  for(i = 0; i < C; i++){
    scanf("%d", &N);
    for(j = -1; j < N; j++){
      scanf("%d %d", &x_1, &y_1);
      if(j == -1){
        x_0 = x_1;
        y_0 = y_1;
      }
      
      if(j != -1 || i != 0){
        resp = sqrt(pow((x_1 - x_0), 2) + pow((y_1 - y_0), 2));
        if(resp < mp || mp == 0){
          mp = resp;
          indice_menor = j+1;
        }
      }
    }
    printf("%d\n", indice_menor);
  }
  return 0;
}
