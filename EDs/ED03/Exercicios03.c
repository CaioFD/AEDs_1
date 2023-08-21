/*
 Exercicios02 - v0.0. - 21/ 08 / 2023
 Author: Caio Faria Diniz

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exercicios02 Exercicios02.c
 Windows: gcc -o Exercicios02 Exercicios02.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exercicios02
 Windows: Exercicios02
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// declaracao das funcoes secundarias
void identificacao();
void menuOpcoes();
void exercicio0311();
void exercicio0312();
void exercicio0313();
void exercicio0314();
void exercicio0315();
void exercicio0316();
void exercicio0317();
void exercicio0318();
void exercicio0319();
void exercicio0320();
void exercicio03E1();
void exercicio03E2();

// funcao principal
int main(void)
{
    int opcao = 0;
    // mostrar identificacao do autor e programa
    identificacao();

    do
    {
        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        printf("\n Opcao = ");
        scanf("%d", &opcao);
        getchar(); // limpar entrada de dados

        // estetica
        printf("\n======== Opcao %d ========\n", opcao);

        // executar a opcao escolhida
        switch (opcao)
        {
        case 0:
            break;
        case 1:
            exercicio0311();
            break;
        case 2:
            exercicio0312();
            break;
        case 3:
            exercicio0313();
            break;
        case 4:
            exercicio0314();
            break;
        case 5:
            exercicio0315();
            break;
        case 6:
            exercicio0316();
            break;
        case 7:
            exercicio0317();
            break;
        case 8:
            exercicio0318();
            break;
        case 9:
            exercicio0319();
            break;
        case 10:
            exercicio0320();
            break;
        case 11:
            exercicio03E1();
            break;
        case 12:
            exercicio03E2();
            break;
        default:
            printf("\nERRO: OPCAO INVALIDA\n\n");
            break;
        } // fim switch

        // estetica
        if (opcao == 0)
        {
            printf("\n     Programa Encerrado     \n\n");
        }

        // estetica
        printf("====== Fim Opcao %d ======\n\n", opcao);

    } while (opcao != 0);

    // encerrar
    printf("\nAperte ENTER para terminar!\n");
    getchar();

    return (0);
}

// definicao das funcoes secundarias

void identificacao()
{
    printf("\n");
    printf("%s\n", "Exercicios03 - Programa - v0.0");
    printf("%s\n", "Autor: Caio Faria Diniz - 793605");
    printf("\n");
} // fim identificacao()

void menuOpcoes()
{
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0311\n");
    printf("  2 - Exercicio 0312\n");
    printf("  3 - Exercicio 0313\n");
    printf("  4 - Exercicio 0314\n");
    printf("  5 - Exercicio 0315\n");
    printf("  6 - Exercicio 0316\n");
    printf("  7 - Exercicio 0317\n");
    printf("  8 - Exercicio 0318\n");
    printf("  9 - Exercicio 0319\n");
    printf(" 10 - Exercicio 0320\n");
    printf(" 11 - Exercicio 03E1\n");
    printf(" 12 - Exercicio 03E2\n");
} // fim menuOpcoes()

void exercicio0311()
{
    char palavra[50];
    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    printf("Letras maiusculas na palavra:  \n");
    for (int i = 0; i < palavra[i] != '\0'; i++)
    {
        if (isupper(palavra[i])) {
            printf("%c ", palavra[i]);
        }
    }
    printf("\n");
}
void exercicio0312()
{
    char palavra[50];
    int cont = 0;
    printf("Digite uma palavra: \n");
    scanf("%s", palavra);

    printf("A quantidade de letras maiusculas na palavra e de: \n");
    for (int i = 0; i < palavra; i++)
    {
       if (isupper(palavra[i])) {
            printf("%c ", palavra[i]);
            cont++;
        }
        printf("A quantidade de letras maiusculas na palavra e de: %d\n",cont);
    }
    
}
void exercicio0313(){}
void exercicio0314(){}
void exercicio0315(){}
void exercicio0316(){}
void exercicio0317(){}
void exercicio0318(){}
void exercicio0319(){}
void exercicio0320(){}
void exercicio03E1(){}
void exercicio03E2(){}