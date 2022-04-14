#include <stdio.h>

int main () {
  
  /* Primeiro programa em C */
  
  /* declarações: todas as variáveis utilizadas precisam ser declaras */
  
  int idade;
  
  /* início do programa */
  
  printf ("Quantos anos voce tem?: ");
  scanf ("%d", &idade);
  
  printf ("%d? Puxa, voce parece que tem soh %d anos! \n", idade, idade * 2);
  
  /* fim do programa */
  
  return 0;
  }
