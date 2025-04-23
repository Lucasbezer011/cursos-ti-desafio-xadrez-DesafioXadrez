#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
     // Nível Novato - Movimentação das Peças
     // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     // Movimento da Torre - 5 casas para a Direita (usando for)
     printf("Movimento da Torre:\n");
     for (int i = 0; i < 5; i++) {
         printf("Direita\n");
     }
 
     // Movimento do Bispo - 5 casas na Diagonal para Cima e Direita (usando while)
     printf("\nMovimento do Bispo:\n");
     int j = 0;
     while (j < 5) {
         printf("Cima Direita\n");
         j++;
     }
 
     // Movimento da Rainha - 8 casas para a Esquerda (usando do-while)
     printf("\nMovimento da Rainha:\n");
     int k = 0;
     do {
         printf("Esquerda\n");
         k++;
     } while (k < 8);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // Movimento do Cavalo - "L" (2 casas para Baixo e 1 para Esquerda)
    printf("\nMovimento do Cavalo:\n");

    // Laço externo (for) para o número de vezes que o Cavalo fará o movimento completo em "L"
    for (int movimentos = 0; movimentos < 1; movimentos++) { // apenas um movimento em "L"

        // Laço interno (while) para mover 2 casas para Baixo
        int passos_baixo = 0;
        while (passos_baixo < 2) {
            printf("Baixo\n");
            passos_baixo++;
        }

        // Após mover para baixo, mover 1 casa para a Esquerda
        printf("Esquerda\n");
    }

    return 0;
}

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
