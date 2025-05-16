#include <stdio.h>

void preencheCaixas(int camadas, int caixa, int jogoDasCaixas[camadas][caixa]) {
    for (int i = 0; i < camadas; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &jogoDasCaixas[i][j]);
        }
    }
}

void melhorCaixa(int camada, int caixa, int jogoDasCaixas[camada][caixa]) {
    int somaAtual = 0;
    
    int melhorCaixa = 0, melhorCamada = 0;
    
    int maiorSoma = 0;
    
    for (int i = 0; i < camada; i++) {
        for (int j = 0; j <= i; j++) {
            
            somaAtual = jogoDasCaixas[i][j];

            for (int k = 0; k < i; k++) {
                for (int l = 0; l <= k; l++) {
                    somaAtual += jogoDasCaixas[k][l];
                }
            }

            if (somaAtual > maiorSoma) {
                maiorSoma = somaAtual;
                melhorCaixa = j + 1;
                melhorCamada = i + 1;
            }
        }
        somaAtual = jogoDasCaixas[camada][caixa];
    }

    printf("Resposta: camada %d, caixa %d.\n", melhorCamada, melhorCaixa);
}

int main () {
    int camadas;
    scanf("%d", &camadas);
    
    if (camadas > 20) return -1;
    
    int jogoDasCaixas[camadas][camadas];

    preencheCaixas(camadas, camadas, jogoDasCaixas);
    melhorCaixa(camadas, camadas, jogoDasCaixas);

    return 0;
}