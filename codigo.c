
#include <stdio.h>
#include <stdbool.h>

int main(){

  int lado1r1, lado2r1;
  int lado1r2, lado2r2;
  int area1, area2;

  bool verificar;

  printf("CÁLCULO ÁREA\n");

  printf("\nPrimeiro lado do retângulo 1:" );
  scanf("%i", &lado1r1);

  printf("\nSegundo lado do retângulo 1:" );
  scanf("%i", &lado2r1);

  printf("\nPrimeiro lado do retângulo 2:" );
  scanf("%i", &lado1r2);

  printf("\nSegundo lado do retângulo 2:" );
  scanf("%i", &lado2r2);

  area1 = lado1r1 * lado2r1;
  area2 = lado1r2 * lado2r2;
  verificar = area1 == area2;

  printf("\nResultado: %d", verificar);
  printf("\n1 para verdadeiro.\n0 para falso.");

}
