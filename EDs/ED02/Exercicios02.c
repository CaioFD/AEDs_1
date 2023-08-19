/*
 Exercicios02 - v0.0. - 19/ 08 / 2023
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
void exercicio0211();
void exercicio0212();
void exercicio0213();
void exercicio0214();
void exercicio0215();
void exercicio0216();
void exercicio0217();
void exercicio0218();
void exercicio0219();
void exercicio0220();
void exercicio02E1();
void exercicio02E2();

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
            exercicio0211();
            break;
        case 2:
            exercicio0212();
            break;
        case 3:
            exercicio0213();
            break;
        case 4:
            exercicio0214();
            break;
        case 5:
            exercicio0215();
            break;
        case 6:
            exercicio0216();
            break;
        case 7:
            exercicio0217();
            break;
        case 8:
            exercicio0218();
            break;
        case 9:
            exercicio0219();
            break;
        case 10:
            exercicio0220();
            break;
        case 11:
            exercicio02E1();
            break;
        case 12:
            exercicio02E2();
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
    printf("%s\n", "Exercicios02 - Programa - v0.0");
    printf("%s\n", "Autor: Caio Faria Diniz - 793605");
    printf("\n");
} // fim identificacao()

void menuOpcoes()
{
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0211\n");
    printf("  2 - Exercicio 0212\n");
    printf("  3 - Exercicio 0213\n");
    printf("  4 - Exercicio 0214\n");
    printf("  5 - Exercicio 0215\n");
    printf("  6 - Exercicio 0216\n");
    printf("  7 - Exercicio 0217\n");
    printf("  8 - Exercicio 0218\n");
    printf("  9 - Exercicio 0219\n");
    printf(" 10 - Exercicio 0220\n");
    printf(" 11 - Exercicio 02E1\n");
    printf(" 12 - Exercicio 02E2\n");
} // fim menuOpcoes()

void exercicio0211()
{
    int x = 0;
    printf(" Digite um numero inteiro: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("O numero %d eh par \n", x);
    }
    else
    {
        printf("O numero %d eh impar \n", x);
    }
}

void exercicio0212()
{

    int x = 0;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x % 2 == 0 && x > 15)
    {
        printf("O numero %d e par e maior que 15\n", x);
    }
    else if (x % 2 == 0 && x < 15)
    {
        printf("O numero %d e par e menor que 15 \n", x);
    }

    if (x % 2 == 1 && x < -15)
    {
        printf("O numero %d e impar e menor que -15\n", x);
    }
    else if (x % 2 == 1 && x > -15)
    {
        printf("O numero %d e impar e maior que -15\n", x);
    }
}
void exercicio0213()
{
    int x;

    printf("Digite um numero para ver se estar no valor aberto entre (25:65): \n");
    scanf("%d", &x);

    if (25 < x && x < 65)
    {
        printf(" O numero %d esta entre o valor aberto de (25:65) \n", x);
    }
    else
    {
        printf(" O numero %d NAO esta entre o valor aberto de (25:65) \n", x);
    }
}
void exercicio0214()
{

    int x;

    printf("Digite um numero para ver se estar no valor fechado entre [20:60]: \n");
    scanf("%d", &x);

    if (20 <= x && x <= 60)
    {
        printf(" O numero %d esta entre o valor fechado de [20:60] \n", x);
    }
    else
    {
        printf(" O numero %d NAO esta entre o valor fechado de [20:60] \n", x);
    }
}
void exercicio0215()
{
    int x;

    printf("Digite um numero para ver se estar no intervalos fechados [15:30] e (25:50): \n");
    scanf("%d", &x);

    if (25 < x && x < 50)
    {
        if (15 <= x && x <= 30)
        {
            printf("O numero (%d) esta dentro do intervalo (25:50) e do intervalo [15:30]\n", x);
        }
        else
        {
            printf("O numero (%d) esta dentro do intervalo (25:50)\n", x);
        }
    }
    else
    {
        if (15 <= x && x <= 30)
        {
            printf("O numero (%d) esta dentro do intervalo [15:30]\n", x);
        }
        else
        {
            printf("O numero (%d) nao esta dentro de nenhum intervalo\n", x);
        }
    }
}
void exercicio0216()
{
    int x, y;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);

    if (x % 2 == 0)
    {
       if (y % 2 == 1)
       {
          printf( "O %d e par e %d e impar\n" , x , y );
       }
     else 
        {
            printf("O %d e par e %d e par\n" , x , y );
        }
    }else {
        if (y % 2 == 1)
        {
            printf( "O %d e impar e %d e impar\n" , x , y );
        }
        else {
            if (x % 2 == 0)
            {
                printf( "O %d e impar e %d e par\n" , x , y );
            } 
        }
    }
    
}
void exercicio0217() {}
void exercicio0218() {}
void exercicio0219() {}
void exercicio0220() {}
void exercicio02E1() {}
void exercicio02E2() {}