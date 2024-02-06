#include <stdio.h>

int main() {
    int numero, Invertido = 0, digito;

    printf("numero: ");
    scanf("%d", &numero);
  
    while (numero != 0) {
        digito = numero % 10;
        Invertido = Invertido * 10 + digito;
        numero /= 10;
    }
  
    printf("invertido: %d\n", Invertido);
  
    return 0;
  
}

