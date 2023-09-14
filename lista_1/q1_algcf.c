#include <stdio.h>

double a, b, c, apoio;

int main(void) {
scanf("%lf %lf %lf", &a, &b, &c);
  if (b > a){
    apoio = b;
    b = a;
    a = apoio;
  }
  if (c > a){
    apoio = c;
    c = a;
    a = apoio;
  }
  
if(a >= b + c){
printf("NAO FORMA TRIANGULO\n");  
}
else{
  if((a*a) == (b*b) + (c*c)){
    printf("TRIANGULO RETANGULO\n");
  }
  if((a*a) > (b*b) + (c*c)){
    printf("TRIANGULO OBTUSANGULO\n");
  }
  if((a*a) < (b*b) + (c*c)){
    printf("TRIANGULO ACUTANGULO\n");
  }
  if(a == b && b == c){
    printf("TRIANGULO EQUILATERO\n");
  }
  else{
    if(a == b || b == c || a == c){
    printf("TRIANGULO ISOSCELES\n");
  }
  }
}
  
  return 0;
}
