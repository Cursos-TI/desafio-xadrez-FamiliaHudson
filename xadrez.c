#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Criada por Hudson

void movimentar_torre(){
    char lado[10];//Campo onde guarda os movimentos para ambos os lados
    int vezes;//Guarda a quantidade de vezes que foi selecionada! 

    printf("movimentar torre para qual lado?\n");
    scanf("%s", lado);

    printf("movimentar torre quantas vezes? (maximo 5 casas) \n");
    scanf("%d", &vezes);

    for (int i = 0;i < vezes; i++){
        printf("(%d)Torre para %s\n", i + 1, lado);
    }
}


int main() {
    int escolha;//Campo que recebe a escolha do usuario;

    printf("Bem vindo ao Xadrez - Hudson Mate\n\n");

    do{  
    printf("\n[1] Movimentar torre\n");
    printf("[2] Movimentar bispo\n");
    printf("[3] Movimentar rainha\n");
    printf("[4] sair do jogo\n");
    scanf("%d", &escolha);

    //Função escolha do usuario!
    switch(escolha){
        case 1:
            movimentar_torre();
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("invalido");
            break;
    }

    } while (escolha !=4);

    return 0;
}
