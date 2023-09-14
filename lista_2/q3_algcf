#include <stdio.h>

int a, b, c, i, j, iguaisa, iguaisb, iguaist, iguaisl, trocas, resultado_a, resultado_b;

int trade(a, b) {
  int vet_a[a], aux_a[a];
  int vet_b[b], aux_b[b];

  iguaisa = 0;
  iguaisb = 0;
  
  for (i = 0; i < a; i++) {
    scanf("%d", &c);
    vet_a[i] = c;
  }

  for (i = 0; i < b; i++) {
    scanf("%d", &c);
    vet_b[i] = c;
  }
  if(a > 0){
    for (i = 0; i < a; i++) {
        if (vet_a[i] == vet_a[i - 1]) {
          iguaisa++;
          aux_a[i] = 0;
        }else{
          aux_a[i] = vet_a[i];
        }
      }
  }else{
    aux_a[0] = vet_a[0];
  }
  if(b > 0){
    for (j = 0; j < b; j++) {
        if(vet_b[j] == vet_b[j-1]){
          iguaisb++;
          aux_b[j] = 0;
        }
        else{
          aux_b[j] = vet_b[j];

        }
      }
    }else{
      aux_b[0] = vet_b[0];
    }
  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      if (aux_a[i] > 0 && aux_a[i] == aux_b[j]) {
        iguaisa++;
        iguaisb++;
      }
    }
  }


  resultado_a = a - iguaisa;
  resultado_b = b - iguaisb;
  
  if(resultado_a < resultado_b){
    return resultado_a;
  }
    else{
    return resultado_b;
  }
}


int main(void){
  while (1) {
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0) {
      printf("%d\n", trade(a, b));
    } else {
      break;
    }
  }
  return 0;
}
