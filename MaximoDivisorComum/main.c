#include <stdio.h>

int mdc(int a, int b);

int main () {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Resultado: %d\n", mdc(a,b));
    return 0;
}

int mdc(int a, int b) {
    if (b > a) {
        return a;
    }
    return mdc((a - b), b);
}