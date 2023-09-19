#include <stdio.h>
#include <ctype.h>
#include <string.h>

char teste[50], teste1[50];
int i;

int main(void) {

   scanf("%[^\n]%*c", teste);

  for(i=0; i < strlen(teste) ; i++){
  teste1[i] = tolower(teste[i]);
  }

  printf("%s %s", teste, teste1);
  return 0;
}
