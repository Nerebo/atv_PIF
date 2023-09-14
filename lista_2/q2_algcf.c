#include <stdio.h>

int h1, h2, m1, m2, r1, r2, r3;

int calc(h1, m1, h2, m2){
  
  r1 = (h1*60) + m1;
  r2 = (h2*60) + m2;

  if(r2 > r1){
    r3 = r2 - r1;
  }
  else{
   r3 = 1440 - (r1-r2);
  }

  
  printf("%d\n", r3);

  return 0;
}

int main(void) {
  while(1){
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
      break;
    }
    else{
      calc(h1, m1, h2, m2);
    }
  }
  return 0;
}
