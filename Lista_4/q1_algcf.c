#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N_Viagem, M_Prods, P_prods;
int* ptr1, ptr2;

struct compras_val{

 float preco;
 char nome1[50];

};

struct compras_qtd{

 int qtd;
 char nome2[50];

};

int main(void) {

  struct compras_val *ptr1;
  struct compras_qtd *ptr2;
  
  
 scanf("%d", &N_Viagem);
  for(int i =0; i < N_Viagem; i++){
    float total = 0;
    
    scanf("%d", &M_Prods);
    ptr1 = (struct compras_val *)malloc(M_Prods * sizeof(struct compras_val));
    
    for(int j=0; j < M_Prods; j++){
    scanf("%s", ptr1[j].nome1);
    scanf("%f", &ptr1[j].preco);
      
    }
    
    scanf(" %d", &P_prods);
    ptr2 = (struct compras_qtd *)malloc(P_prods * sizeof(struct compras_qtd));

    
  for(int j = 0; j < P_prods; j++){
  scanf("%s", ptr2[j].nome2);
  scanf("%d", &ptr2[j].qtd);
    
  }
    for(int k = 0; k < M_Prods; k++){
      for(int j = 0; j < P_prods; j++){
        
        if(strcmp(ptr1[j].nome1, ptr2[k].nome2) == 0){
          total += ptr1[j].preco * ptr2[k].qtd;
          
        }
      }
    }
    
    printf("R$ %.2f\n", total);
    free(ptr1);
    free(ptr2);

  }
  return 0;
}
