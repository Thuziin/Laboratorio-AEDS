#include <stdio.h>

int Digitos(int n);

int main () {
    int n;
    // Valor de entrada
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    // Impressão da quantidade de dígitos do número digitado
    printf("Resultado: %d\n", Digitos(n));
    return 0;
}

int Digitos(int n) {
    // Verifica se o número é maior ou igual a 10
    if (n <= 10) {
        return 1;
    }
    // Adiciona 1 e realiza a divisão do número para realizar a contagem
    return 1 + Digitos(n/10);
}