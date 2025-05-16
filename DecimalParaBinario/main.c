#include <stdio.h>

void dec2bin(int dec);

int main() {
    int dec;
    // Entrada de dados (valor do numero em decimal)
    printf("Digite um numero inteiro: ");
    scanf("%d", &dec);

    printf("Resultado: ");
    // Chamada da função que realiza a conversão
    dec2bin(dec);
    
    printf("\n");
    return 0;
}

void dec2bin(int dec) {
    // Verifica se o número ainda é divisivel por 2, se não for retorna 1
    if (dec < 2) {
        printf("%d", 1);
        return ;
    }
    // Chamada recursiva passando o valor da divisão inteira como parametro
    dec2bin(dec / 2);
    // Impressão do número e seu valor binário
    printf("%d", dec % 2);
    return ;
}