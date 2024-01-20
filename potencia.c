#include <stdio.h>

// void potencia(int a, int b) {
//     int resultado = 1;
//     for(int i = 0; i < b; i++) {
//         resultado = resultado * a;
//     }

//     printf("O resultado é %d", resultado);
// }

void potencia(int base, int elevado) {

  int basePrincipal = base;

  for(int i = 2; i <= elevado; i++){
    base = base * basePrincipal;
    printf("%d\n", base);
  }
}
int main() {

  int base = 5;
  int elevado = 3;

  potencia(base, elevado);
}