#include <stdio.h>

// Function that starts the code
int main()
{
  // Print our game header
  printf("************************\n");
  printf("Bem vindo ao jogo de advinhação\n");
  printf("************************\n");

  int secretNumber = 42;
  int numberOfAttempts = 1;
  int kick;
  int win = 0; 

  // Loop para o número de rodadas jogadas
  while (1)
  {
    /* code */
    printf("O número secreto é %d. Não conta pra ninguém!\n", secretNumber);

    printf("Tentativa %d de \n", numberOfAttempts);
    printf("Qual é o seu chute? ");
    scanf("%d", &kick);
    printf("Seu chute foi %d\n", kick);

    printf("%d, %d", kick, secretNumber);

    if(kick < 0){
      printf("Você não pode chutar número negativo\n");

      continue;
    }

    int acertou = (kick == secretNumber);
    int maior = kick > secretNumber;

    printf("%d Acertou: \n", acertou);

    if (acertou)
    {
      printf("Parabéns você acertou!\n");
      printf("Jogue Novamente!\n");

      break;
    }
    else if (maior)
    {
      printf("Você errou! Seu chute foi maior que o número secreto\n");
    }
    else
    {
      printf("Você errou! Seu chute foi menor que o número secreto\n");
    }

    numberOfAttempts++;
  }
  printf("Fim de jogo");
  printf("Você acertou em %d. de tentativas", numberOfAttempts-1);
}