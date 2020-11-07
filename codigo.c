
#include <stdio.h>
#include <stdbool.h>

int main()
{

  int lado1r1, lado2r1;
  int lado1r2, lado2r2;
  int area1, area2;

  bool verificar;

  printf("\n CÁLCULO ÁREA \n");

  printf("\n Primeiro lado do retângulo 1: " );
  scanf("%i", &lado1r1);

  printf("\n Segundo lado do retângulo 1: " );
  scanf("%i", &lado2r1);

  printf("\n Primeiro lado do retângulo 2: " );
  scanf("%i", &lado1r2);

  printf("\n Segundo lado do retângulo 2: " );
  scanf("%i", &lado2r2);

  area1 = lado1r1 * lado2r1;
  area2 = lado1r2 * lado2r2;
  verificar = area1 == area2;

  printf("\n Resultado: %d", verificar);
  printf("\n 1 para verdadeiro.\n 0 para falso.");

}
