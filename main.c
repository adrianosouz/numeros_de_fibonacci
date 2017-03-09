#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
/*A serie de Fibonacci e: 1; 1; 2; 3; 5; 8; 13; : : :
Ou seja, o n-esimo termo e a soma dos dois anteriores
F(n) = F(n - 1) + F(n - 2)
tal que F(1) = 1 e F(2) = 1.*/
int main() {
int n, atual = 1, proximo = 1, temp, i;
printf("Digite um numero inteiro positivo: ");
n = GetInt();
for (i = 1; i <= n; i++) {
printf("%d\n", atual);
temp = atual + proximo;
atual = proximo;
proximo = temp;
}
    return 0;
}
