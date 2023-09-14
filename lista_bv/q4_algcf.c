#include <stdio.h>

int senha = 0;

int main() {

  while(senha!=2002){  
    scanf("%d", &senha);
    if(senha == 2002){
      printf("Acesso Permitido\n");
      break;
    }
    if(senha != 2002){
      printf("Senha Invalida\n");
      }    
  }
  
    return 0;
}
