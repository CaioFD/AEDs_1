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
int L1, L2, area;

printf("Digite dois lados de um retangulo: \n");
scanf("%d %d", &L1, &L2);

area = L1 * L2;
printf("\nO valor da area normal e de : %d\n", area);

area = area * 4;
printf("\nO valor da area quatro vezes maior e de: %d\n", area);
}

void exercicio0114()
{
int L1,ladoN1, L2, ladoN2, area, perimetro;

printf("Digite dois lados de um retangulo: \n");
scanf("%d %d", &L1, &L2);
 ladoN1 = L1/5;
 ladoN2 = L2/5;

 area = ladoN1 * ladoN2;
printf("\nO valor da area e de : %d\n", area);

perimetro = ladoN1+ladoN2+ladoN1+ladoN2;
printf("\nO valor do perimetro e de : %d\n", perimetro);
}

void exercicio0115()
{
int Base, Altura, area, NovaAlt;
printf("Digite a base do triangulo: \n");
scanf("%d", &Base);
printf("Digite a altura do triangulo: \n");
scanf("%d", &Altura);

NovaAlt = Altura/2;

area = (Base*NovaAlt)/2;
printf("A area do trinagulo com a altura pela metade e de: %d\n", area);

}

void exercicio0116()
{

double lado = 0.0, ladoNovo = 0.0, area = 0.0, perimetro = 0.0, altura = 0.0;

    printf( "Insira o valor do lado de um triangulo equilatero: " );
    scanf( "%lf" , &lado );
    getchar();
    printf( "\n" );

    ladoNovo = 2 * lado;

    altura = ( ladoNovo * sqrt(3) )/2;

    area = ( pow(ladoNovo,2) * sqrt(3) )/4;
    
    perimetro = ladoNovo * 3;

    printf( "A altura, area e o perimetro do triangulo com o dobro do lado: altura = %lf, area = %lf, perimetro = %lf\n" , altura , area , perimetro );


}

void exercicio0117()
{
float lado, volume;
printf("Digite o tamanho da aresta do cubo(lado): \n");
scanf("%f", &lado);

volume = 3 * (pow ( (lado * 3), 3 ) );

 printf( "O volume de um cubo com 7x a medida do lado: %.2f\n" , volume );
}

void exercicio0118()
{
float comprimento, largura, altura, volume;
printf("Digite o valor do comprimento de um paralelepipedo: \n");
scanf("%f", &comprimento);
printf("Digite o valor da largura de um paralelepipedo: \n");
scanf("%f", &largura);
printf("Digite o valor da altura de um paralelepipedo: \n");
scanf("%f", &altura);

volume = ((comprimento/6 )* (largura/6) * (altura/6));
printf("O valor do volume de um paralelepipedo com 1/6 dos valores e de: %f\n", volume);

}

void exercicio0119()
{
double raio = 0.0, area = 0.0;

    printf( "Insira o valor do raio de um circulo: " );
    scanf( "%lf" , &raio );
    getchar();
    printf( "\n" );

    area = ( PI * ( ( pow( raio,2 ) / 2 ) ) ) / 2;

    printf( "A area de um semicirculo com metade do raio e: %lf\n" , area );

}

void exercicio0120()
{
float raio, volume;
printf("Digite o valor do raio de uma esfera: \n");
scanf("%f", &raio);

volume = PI * pow(((3*raio)/8),3) * 4/3;
printf( "O volume de uma esfera com 3/8 do raio e: %f\n" , volume );

}

void exercicio01E1()
{
float area , raio ;

    printf( "Insira o valor da area de uma circunferencia: " );
    scanf( "%f" , &area );

    raio = sqrt( (area / 3 ) / PI );

    printf( "O raio de uma circunferencia com 1/3 dessa area e: %f\n" , raio );
}

void exercicio01E2()
{
float volume , novoVolume , raio , area ;

    printf( "Insira o valor do volume de uma esfera: " );
    scanf( "%f" , &volume );
    
    novoVolume = ( 3 * volume ) / 4;

    raio = cbrt( (novoVolume * 3 * PI) / 4 );

    area = 4 * PI * pow( raio, 2 );

    printf( "O raio de 3/4 do volume da esfera e: %f\n" , raio ); 

    printf( "A area da superficie da esfera e: %f\n" , area ); 
}
