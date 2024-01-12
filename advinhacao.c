#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function that starts the code
int main()
{
  // Print our game header
  printf("************************\n");
  printf("Bem vindo ao jogo de advinhação\n");
  printf("************************\n");

  int seg = time(0);
  srand(seg);

  int bigNumber = rand();

// Calculando o número gerado por 100 para o resto ser entre 0 a 99  
  int secretNumber = bigNumber % 100;
  int numberOfAttempts = 1;
  int kick;
  int win = 0; 

  double pontos = 1000;

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
    
    double pontosPerdidos = abs(kick - secretNumber) / (double) 2;
    pontos = pontos - pontosPerdidos;
  }
  printf("Fim de jogo");
  printf("Você acertou em %d. de tentativas", numberOfAttempts-1);
  printf("Total de ponto: %.2f", pontos);
}