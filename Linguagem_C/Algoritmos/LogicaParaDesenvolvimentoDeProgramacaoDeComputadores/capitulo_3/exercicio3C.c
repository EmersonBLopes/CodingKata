#include <stdio.h>
#include <math.h>

double calculaVolume(double raio,double altura){
  return 3.14159*pow(raio,2)*altura;
}

int main(void){
  
  double raio,altura;

  printf("Digite o raio da lata de oleo:");
  scanf("%lf",&raio);

  printf("Digite a altura da lata de oleo:");
  scanf("%lf",&altura);
  
  printf("O volume da lata de oleo é: %.2fL\n",calculaVolume(raio,altura));
  return 0;
}
