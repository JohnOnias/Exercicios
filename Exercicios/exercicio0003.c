#include <stdio.h>

int main(){

  int variavel1; 
  int variavel2;
  int *v1; 
  int *v2;

  v1 = &variavel1;
  v2 = &variavel2;

  printf("Digite o primeiro numero: \n");

  scanf("%d", &variavel1);

  printf("Digite o segundo numero: \n");

  scanf("%d", &variavel2);

    *v1 = *v1 + *v2; 
    *v2 = *v1 - *v2;
    *v1 = *v1 - *v2;

  printf("os valores sao: %d, %d", variavel1, variavel2);

  return 0; 

}