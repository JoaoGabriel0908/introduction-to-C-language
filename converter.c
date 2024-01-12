#include <stdio.h>
#include <stdlib.h>

// Function that starts the code
int main()
{
  int a = 3;
  int b = 2;

  double pontos = (double)a /(double)b;
  printf("%.1f", pontos);

  double pi = 3.1415;
  int convertion = (int) pi;

  printf("%.1f, %d\n", pi, convertion);

  int testeA = 3;
  int testeB = abs(-3);

  printf("%d, %d\n", testeA, testeB);

  int testeC = abs(testeA * testeB);

  printf("%d", testeC);
}