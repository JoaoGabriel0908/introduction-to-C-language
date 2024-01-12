#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function that starts the code
int main()
{

// Lógica que gera o números de segundos atual, desde 1/1/1970 até agora e coloca na função srand pra gerar um numero aleatorio
  int seg = time(0);
  srand(seg);

  int numberRandom = rand();
  int numberRandom2 = rand();

  printf("%d, %d", numberRandom, numberRandom2);
}