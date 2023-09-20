#include <stdio.h>
#include <string.h>

int N, K, i, j, diferentes, iguais;
char s[20];
char ln[20];

int main(void) {
  
scanf("%d", &N);
  for(i=0; i < N; i++){
    scanf("%d", &K);

    scanf("%s", ln);
      
      for(j=1; j < K; j++){
      scanf("%s", s);
      iguais++;
      if(strcmp(s,ln) == 0){
          }
        
        else{
          iguais = -1;
          diferentes = 1;
        memset(ln, 0, 20);
        strcpy(ln, s);
            }
          }
    
    if(diferentes != 1 && iguais > 0){
      printf("%s\n", ln);
    }
    else{  
      printf("ingles\n");
    }
      }
   return 0;
  }
