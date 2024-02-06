#include <stdio.h>

int main() {
    int numero, numero_dobro, *pntnumero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    pntnumero = &numero;

    numero_dobro = *pntnumero * 2;

    printf("Numero: %d\n", *pntnumero);
    printf("O dobro do numero: %d\n", numero_dobro);

    return 0;
}
