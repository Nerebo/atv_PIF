#include <stdio.h>
#include <string.h>

int N, K, i, j;
char s[20];
char pt[] = "portugues";
char es[] = "espanhol";
char en[] = "ingles";
char ch[] = "chines";

int main(void) {
scanf("%d", &N);
  for(i=0; i<= N; i++){
    scanf("%d", &K);
    if(K > 1 && K <= 20){
    for(j=0; j<N; j++){
      
      scanf("%s \n", s);
      
      if(strcmp(s, pt) == 0){
      printf("A \n");  
        
      }
      if(strcmp(s, es) == 0){
      printf("B \n");
        
      }
      if(strcmp(s, en) == 0){
      printf("C \n");  
        
      }
      if(strcmp(s, ch) == 0){
       printf("D \n");
        
        }
      } 
    }
  }
  return 0;
}
