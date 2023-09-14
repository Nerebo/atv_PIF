#include <stdio.h>
#include <math.h>

int x, y, r1, b1, c1, test, i;

int r(x,y){
  r1 = pow((3*x), 2) + pow(y, 2);
  
  return r1;
}

int b(x,y){
  b1 = 2 * pow(x, 2) + pow((5*y), 2);
  return b1;
}

int c(x,y){
  c1 = -(100*x) + pow(y, 3);

  return c1;
}

int main(void) {
  scanf("%d", &test);
   for(i = 0; i < test; i++){
  scanf("%d %d", &x, &y);

  
  r(x,y);
  b(x,y);
  c(x,y);

     if(b1 > c1 && b1 > r1){
       printf("Beto ganhou\n");
     }
     if(c1 > b1 && c1 > r1){
       printf("Carlos ganhou\n");
     }
     if(r1 > b1 && r1 > c1){
       printf("Rafael ganhou\n");
     }
   }
}
