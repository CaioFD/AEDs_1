/*
 Exercicios01 - v0.0. - 16 / 08 / 2023
 Author: Caio Faria Diniz

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exercicios01 Exercicios01.c
 Windows: gcc -o Exercicios01 Exercicios01.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exercicios01
 Windows: Exercicios01
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// definicao de PI
#define PI ( 3.14159265358979323846 )

// declaracao das funcoes secundarias
void identificacao();
void menuOpcoes();
void exercicio0111();
void exercicio0112();
void exercicio0113();
void exercicio0114();
void exercicio0115();
void exercicio0116();
void exercicio0117();
void exercicio0118();
void exercicio0119();
void exercicio0120();
void exercicio01E1();
void exercicio01E2();

// funcao principal
int main (void)
{
    int opcao = 0;
    // mostrar identificacao do autor e programa
    identificacao();

    do{
        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        printf("\n Opcao = ");
        scanf( "%d" , &opcao ); 
        getchar(); // limpar entrada de dados

        // estetica
        printf( "\n======== Opcao %d ========\n", opcao );

        // executar a opcao escolhida
        switch (opcao)
        {
        case  0:                  break;
        case  1: exercicio0111(); break;
        case  2: exercicio0112(); break;
        case  3: exercicio0113(); break;
        case  4: exercicio0114(); break;
        case  5: exercicio0115(); break;
        case  6: exercicio0116(); break;
        case  7: exercicio0117(); break;
        case  8: exercicio0118(); break;
        case  9: exercicio0119(); break;
        case 10: exercicio0120(); break;
        case 11: exercicio01E1(); break;
        case 12: exercicio01E2(); break;
        default:
            printf( "\nERRO: OPCAO INVALIDA\n" );
            break;
        } // fim switch
        
        // estetica
        if( opcao == 0 ){
            printf("\n     Programa Encerrado     \n\n");
        }

        // estetica
        printf( "====== Fim Opcao %d ======\n\n", opcao );

    }while (opcao != 0);

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();

    return (0);
}

// definicao das funcoes secundarias

void identificacao()
{
    printf("\n");
    printf("%s\n", "Exercicios01 - Programa - v0.0");
    printf("%s\n", "Autor: Vinicius Miranda de Araujo - 812839");
    printf("\n");
} // fim identificacao()

void menuOpcoes()
{
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0111\n");
    printf("  2 - Exercicio 0112\n");
    printf("  3 - Exercicio 0113\n");
    printf("  4 - Exercicio 0114\n");
    printf("  5 - Exercicio 0115\n");
    printf("  6 - Exercicio 0116\n");
    printf("  7 - Exercicio 0117\n");
    printf("  8 - Exercicio 0118\n");
    printf("  9 - Exercicio 0119\n");
    printf(" 10 - Exercicio 0120\n");
    printf(" 11 - Exercicio 01E1\n");
    printf(" 12 - Exercicio 01E2\n");
} // fim menuOpções()

void exercicio0111(){

int x,y ;
float area;

printf("Digite o valor de um lado do quadrado: \n");
scanf("%d",&x);

y = x*6;
area = y*y;

printf("O valor da area do segundo quadrado e: %.2f", area);

}
void exercicio0112()
{
    int l, lnovo, perimetro, area;

    printf("Digite um lado do quadrado: \n");
    scanf("%d", &l);

    lnovo = l/3;
 
 area = lnovo * lnovo;
 perimetro = lnovo*4;

 printf("O perimetro e a area do quadrado tendo os novos lados e de: %d %d\n", perimetro, area);

}
void exercicio0113()
{

}
void exercicio0114()
{

}
void exercicio0115()
{

}
void exercicio0116()
{

}
void exercicio0117()
{

}
void exercicio0118()
{

}
void exercicio0119()
{

}
void exercicio0120()
{

}
void exercicio01E1()
{

}
void exercicio01E2()
{

}
