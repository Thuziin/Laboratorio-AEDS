#include <stdio.h>

int mult(int base, int exp);

int main () {
    // Variáveis de entrada
    int base, exp;
    printf("Digite a base e o expoente inteiros: ");
    scanf("%d %d", &base, &exp);
    // Saída pós calculo do valor
    printf("Resultado: %d\n", mult(base, exp));
    return 0;
}

int mult(int base, int exp) {
    // Verifica caso o expoente seja 0
    if (exp == 0) {
        return 1;
    }
    // Multiplicação é realizada até que o valor do expoente seja 0
    return base * mult(base, (exp - 1));
}