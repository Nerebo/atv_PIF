#include <stdio.h>
#include <string.h>
#include <ctype.h>

char teste[201];
char alfabeto[26] = "abcdefghijklmnopqrstuvwxyz";
int N, i, j, k, iguais = 0;

int main(void){
  scanf("%d", &N);
  for(i=0; N > i; i++){
    char repetir[26] = {0};
  scanf(" %200[^\n]", teste);
  for(j=0; j < strlen(teste) ; j++){
  teste[j] = tolower(teste[j]);
  }
    
    for(j = 0; j < 26; j++){
      for(k = 0; strlen(teste) > k; k++){
        if (alfabeto[j] == teste[k]){
          repetir[j]++;
        }
      }
    }
    
   for(j = 0; j < 26; j++){
     if (0 == j){
       iguais = repetir[j];
     }
     if(repetir[j] > iguais){
       iguais = repetir[j];
     }
   }
  for(j = 0; j < 26; j++){
    if(iguais == repetir[j]){
      printf("%c", alfabeto[j]);
    }
  }
  printf("\n");
  }
  
  return 0;
}  
