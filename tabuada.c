#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void abertura(int numeroEscolhido) {
  printf("A tabuada do número %d é:\n", numeroEscolhido);
}
// Function that starts the code
int main()
{
  int numeroEscolhido = 5;

  abertura(numeroEscolhido);

  for(int i = 1; i <= 10; i++){
    int result = numeroEscolhido * i;
    printf("O resultado de %d x %d é: %d\n",numeroEscolhido, i, result);
  }
}