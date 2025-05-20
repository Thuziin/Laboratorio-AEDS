#include <stdio.h>

int main () {
    int pesoMaxMochila, qtdItens;
    scanf("%d\n%d", &pesoMaxMochila, &qtdItens);
    int mochila[qtdItens][2];

    for (int i = 0; i < qtdItens; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mochila[i][j]);
        }
    }

    int selecionados[qtdItens];
    for (int i = 0; i < qtdItens; i++) {
        scanf("%d", &selecionados[i]);
    }
    
    // Tabela para possiveis soluções
    int itensEscolhidos[qtdItens+1][pesoMaxMochila+1];
    int incluir, naoIncluir;

    for (int i = 0; i <= qtdItens; i++) {
        for (int j = 0; j <= pesoMaxMochila; j++) {
            if (i == 0) {
                // Inserindo a primeira linha da tabela com 0's
                itensEscolhidos[i][j] = 0;
            } else if (mochila[i - 1][0] > j) {
                // Caso o peso do item atual, seja maior que a capacidade da mochila, pego a linha anterior
                itensEscolhidos[i][j] = itensEscolhidos[i-1][j]; // Correto!;
            } else {
                // Verifico qual item devo ou não incluir na tabela
                incluir = mochila[i - 1][1] + itensEscolhidos[i - 1][j - mochila[i - 1][0]];
                naoIncluir = itensEscolhidos[i - 1][j];
                
                if (incluir > naoIncluir)
                    itensEscolhidos[i][j] = incluir;
                else 
                    itensEscolhidos[i][j] = naoIncluir;
            }
        }
    }

    // Recebo qual seria a solução otima para o problema
    int valorMaximo = itensEscolhidos[qtdItens][pesoMaxMochila];

    // Calculo o valor total da sugestão do usuário
     int sugestaoValor = 0;
    int sugestaoPeso = 0;
    for (int i = 0; i < qtdItens; i++) {
        if (selecionados[i] == 1) {
            sugestaoPeso += mochila[i][0];
            sugestaoValor += mochila[i][1];
        }
    }

    // Identifico qual caso a solução do usuário se encaixa

    if (sugestaoPeso > pesoMaxMochila)
        printf("Solucao inviavel.\n");
    else if (sugestaoValor < valorMaximo)
        printf("Solucao viavel mas nao otima.\n");
    else
        printf("Solucao otima.\n");

    return 0;
}