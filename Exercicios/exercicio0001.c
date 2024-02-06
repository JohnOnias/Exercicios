#include <stdio.h> 

int troca(int *a, int *b){
  int aux; 
  aux = *a;
  *a = *b;
  *b = aux;
}
int main(){
      int numero1, numero2, numero3; 
      printf("Digite o primeiro numero: \n");
      scanf("%d", &numero1);
      printf("Digite o segundo numero: \n");
      scanf("%d", &numero2);  
      printf("Digite o terceiro numero: \n");
      scanf("%d", &numero3);
      if(numero1 > numero2){
        troca(&numero1, &numero2);
      }
      if(numero1 > numero3)
      {
        troca(&numero1, &numero3);
      }
      if(numero2 > numero3){
        troca(&numero2, &numero3);
      }

      printf("A ordem crescente e: %d, %d, %d", numero1, numero2, numero3);

    return 0; 
  
}

  
