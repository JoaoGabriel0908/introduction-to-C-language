#include <stdio.h>

// Function that starts the code
int main()
{
  // Print our game header
  printf("************************\n");
  printf("Bem vindo ao jogo de advinhação\n");
  printf("************************\n");

  int secretNumber = 42;

  int kick;

  int x;

  int y;

  printf("O número secreto é %d. Não conta pra ninguém!\n", secretNumber);

  printf("Qual é o seu chute? ");
  scanf("%d", &kick);
  printf("Seu chute foi %d\n", kick);

  printf("%d, %d", kick, secretNumber);

  printf("Digite um número X: ");
  scanf("%d", &x);
  printf("\nAgora digite outro número Y: ");
  scanf("%d", &y);

  int mult = x * y;

  printf("A multiplicação dos dois números deu %d", mult);
}