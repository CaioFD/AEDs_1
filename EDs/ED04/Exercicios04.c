/*
 * -------------------------- Documentacao
 * Pontificia Universidade Catolica de Minas Gerais
 * Curso de Ciencia da Computacao
 * Algoritmos e Estruturas de Dados I
 * 
 * Exercicios04 - v0.0. - 28 / 08 / 2023
 * Author: Caio Faria Diniz
 * 
 * Para compilar em terminal (janela de comandos):
 *      Linux : gcc -o Exercicios04 Exercicios04.c
 *      Windows: gcc -o Exercicios04 Exercicios04.c
 * 
 * Para executar em terminal (janela de comandos):
 *      Linux : ./Exercicios04
 *      Windows: Exercicios04
 * 
*/

// -------------------------- lista de dependencias

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

const   int  STR_SIZE     =  80 ;   // definir tamanho padrao para caracteres

// -------------------------- definicao de variaveis globais

// -------------------------- definicao de prototipos

void identificacao();
void menuOpcoes();
void exercicio0411();
void exercicio0412();
void exercicio0413();
void exercicio0414();
void exercicio0415();
void exercicio0416();
void exercicio0417();
void exercicio0418();
void exercicio0419();
void exercicio0420();
void exercicio04E1();
void exercicio04E2();

// -------------------------- definicao do metodo principal

int main (void)
{
  int opcao = 0;
  // mostrar identificacao do autor e programa
  identificacao();

  do{
    // mostrar menu de opcoes
    menuOpcoes();

    // ler opcao do teclado
    printf( "\n %s" , "Opcao = ");
    scanf( "%d" , &opcao ); 
    getchar(); // limpar entrada de dados

    // estetica
    printf( "\n======== Opcao %d ========\n", opcao );

    // executar a opcao escolhida
    switch (opcao)
    {
      case  0:                  break;
      case  1: exercicio0411(); break;
      case  2: exercicio0412(); break;
      case  3: exercicio0413(); break;
      case  4: exercicio0414(); break;
      case  5: exercicio0415(); break;
      case  6: exercicio0416(); break;
      case  7: exercicio0417(); break;
      case  8: exercicio0418(); break;
      case  9: exercicio0419(); break;
      case 10: exercicio0420(); break;
      case 11: exercicio04E1(); break;
      case 12: exercicio04E2(); break;
      default:
        printf( "\n   %s\n\n" , "ERRO: opcao invalida" );
        break;
    } // fim switch
        
    // estetica
    if( opcao == 0 ){
        printf( "\n%s\n\n" , "     Programa Encerrado     ");
    }

    // estetica
    printf( "====== Fim Opcao %d ======\n\n", opcao );

  }while (opcao != 0);

  // encerrar
  printf( "\n%s\n" , "Aperte ENTER para terminar!" );
  getchar();

  return (0);
}

// -------------------------- definicao de metodos

/**
  * Identificacao do Autor e Programa
  */
void identificacao()
{
  printf("\n");
  printf("%s\n", "Exercicios04 - Programa - v0.0");
  printf("%s\n", "Autor: Caio Faria Diniz - 793605");
  printf("\n");
} // fim identificacao()

/**
  * Menu de opcoes
  */
void menuOpcoes()
{
  printf( "%s\n\n" , "Escolha alguma das opcoes a seguir:");
  printf( "%s\n" , "  0 - Encerrar programa");
  printf( "%s\n" , "  1 - Exercicio 0411");
  printf( "%s\n" , "  2 - Exercicio 0412");
  printf( "%s\n" , "  3 - Exercicio 0413");
  printf( "%s\n" , "  4 - Exercicio 0414");
  printf( "%s\n" , "  5 - Exercicio 0415");
  printf( "%s\n" , "  6 - Exercicio 0416");
  printf( "%s\n" , "  7 - Exercicio 0417");
  printf( "%s\n" , "  8 - Exercicio 0418");
  printf( "%s\n" , "  9 - Exercicio 0419");
  printf( "%s\n" , " 10 - Exercicio 0420");
  printf( "%s\n" , " 11 - Exercicio 04E1");
  printf( "%s\n" , " 12 - Exercicio 04E2");
} // fim menuOpcoes()
