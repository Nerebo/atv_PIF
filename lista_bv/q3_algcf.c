#include <stdio.h>

float salario, reajuste;
int porcentagem;

int main(void) {

  scanf("%f", &salario);

  if(salario>2000.0){
    reajuste = (salario/100)*4;
    salario = salario + reajuste;
    porcentagem = 4;
    
  }
  else if (salario>1200.01 && salario <= 2000.0){
    reajuste = (salario/100)*7;
    salario = salario + reajuste;
    porcentagem = 7;
    
  }

  else if (salario>800.01 && salario<1200.01){
    reajuste = (salario/100)*10;
    salario = salario + reajuste;
    porcentagem = 10;
    

  }

  else if (salario>400.01 && salario<800.01){
    reajuste = (salario/100)*12;
    salario = salario + reajuste;
    porcentagem = 12;
    
  }

  else if (salario>0.0 && salario<400.01){
    reajuste = (salario/100)*15;
    salario = salario + reajuste;
    porcentagem = 15;
    
  }
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);
  return 0;
}
