  // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Funções Recursivas

// Movimento Recursivo da Torre (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento Recursivo da Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento Recursivo do Bispo (Diagonal Cima Direita)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função principal 
int main() {
    // Movimento da Torre 
    printf("Movimento da Torre:\n");
    moverTorre(5);  // move 5 casas para a direita

    // Movimento do Bispo - Recursivo 
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(5);  // move 5 casas na diagonal "Cima Direita"

    // Movimento do Bispo - Loops Aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    int passos = 5;
    for (int i = 0; i < passos; i++) { // movimento vertical (cima)
        for (int j = 0; j < 1; j++) {   // movimento horizontal (direita)
            printf("Cima Direita\n");
        }
    }

    // Movimento da Rainha 
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);  // move 8 casas para a esquerda

    // Movimento do Cavalo (duas casas para cima e uma para a direita)
    printf("\nMovimento do Cavalo:\n");
    // Loops aninhados com múltiplas condições e controle de fluxo
    int movimentosRealizados = 0;
    for (int vertical = 2; vertical >= 1; vertical--) {
        int casas = 0;
        while (casas < 3) {
            if (vertical == 2 && casas == 0) {
                printf("Cima\n");  // primeira casa para cima
                movimentosRealizados++;
            } else if (vertical == 1 && casas == 1) {
                printf("Cima\n");  // segunda casa para cima
                movimentosRealizados++;
            } else if (vertical == 1 && casas == 2) {
                printf("Direita\n"); // último movimento
                movimentosRealizados++;
                break; // finaliza movimento em L
            }
            casas++;
            continue;
        }
    }

    return 0;
}
