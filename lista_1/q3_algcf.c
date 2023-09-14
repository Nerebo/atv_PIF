#include <stdio.h>
#include <math.h>

int apoio = 1, i, j, T = 1, v = 1, maior, espaco = 0, caso;

int main(void) {
while(T != 0){

scanf("%d", &T);

int mtx[T][T];

for(i = 0; i < T; i++){
  for(j = 0; j < T; j++){
  mtx[i][j] = pow(2, (i+j));
  }
}
  maior = pow(2, (T+T-2));
  while(maior /=10){
    espaco++;
    }
  
for(i = 0; i < T; i++){ 
  for(j = 0; j < T; j++){
  if(j> 0){
    printf(" ");
  }
  
  printf("%*d",espaco, mtx[i][j]);    
  }
  printf("\n");  
}
  printf("\n");
}
}
