// Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura
// em graus Celsius. C = 5 * ((F-32) / 9).

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int f, c;

  printf("Insira temperatura em graus Fahrenheit: \n");
  scanf("%d", &f);

  c = 5 * ((f - 32) / 9);

  printf("A temperatura %d em graus Fahrenheit representa %d em graus Celsius.", f, c);
  return 0;
}