#include <stdio.h>
#include "lib_funkcje.h"
#include "lib_funkcje_pp.h"
#include "funkcje_pp.h"
#include "funkcje.h"


void print_function_header()
{
    printf("Funkcje\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n");
    printf("Wybierz zadanie(1-17):\n");
    printf("1. Napisz funkcje, ktora zwroci pole trojkata. Dlugosci bokow trojkata...\n2. Napisz funkcje, int maks(int x, int y, int z), zwracajaca wartosc maksymalna sposrod...\n");
    printf("3. Napisz funkcje, long int suma(int n), ktora wyznaczy sume szeregu...\n4. Napisz funkcje, long int suma(int min, int max), ktora obliczy sume liczb...\n");
    printf("5. Napisz funkcje, int wartoscMaks(int granica) ktora znajdzie...\n6. Napisz funkcje, int min(int t[], int n), ktora dla tablicy...\n");
    printf("7. Napisz funkcje, ktora obliczy liczbe wystapien...\n8. Napisz funkcje, ktora wyswietla wzor rownania kwadratowego (np. x^2+2x-3=0) dla zadanych wartosci...\n");
    printf("9. Napisz funkcje, ktora wyswietli na ekranie dwojkowa reprezentacje...\n10. Napisz funkcje, int ktoraCwiartka(float x, float y) ktora dla punktu o wspolrzednych (x, y) zwroci wartosc...\n");
    printf("11. Napisz funkcje, float suma(float x, int n), ktora wyznaczy sume szeregu: (x+1)-(x2-2)+(x3+3)-...±(xn±n).\n12. Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: x+2x2+3x3+...+nxn.\n");
    printf("13. Napisz funkcje, float suma(float x, float epsilon), ktora dla x z przedzialu (0, 1)...\n14. Napisz funkcje, sprawdzajaca, czy jej argument jest liczba pierwsza.\n");
    printf("15. Napisz funkcje, ktora wypisze na ekranie zawartosc...\n16. Napisz funkcje, ktora zliczy i wypisze...\n");
    printf("17. Napisz funkcje, ktora bedzie odwracala kolejnosc znakow...\n18. Napisz funkcje, ktora wyznaczy liczbe slow w...\n");
    printf("\n\n0 - Exit\n");
}

void print_header()
{
    printf("\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n\n");
    printf("1. Dzial: Funkcje\n2. Dzial: Funkcje,przekazywanie parametrow.\n");
    printf("\n\n0 - Exit\n");
}

void print_funkcje_parametry_header()
{
    printf("Funkcje przekazywanie parametrow\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n");
    printf("Wybierz zadanie (1-23):\n");
    printf("1. Napisz funkcje void pole_obwod(float a, float b, float c, float *pole, float *R), ktora obliczy...\n2. Napisz funkcje, ktora dla tablicy liczb calkowitych danej jako parametr obliczy i zwroci...");
    printf("\n\n0 - Exit\n");
}



int main()
{
    int number;
    int dzial;
    int wyjscie = -1;

    do
    {
        print_header();
        scanf("%d",&dzial);

        if(dzial == 1)
        {
            do
            {
                print_function_header();
                scanf("%d",&number);

                if(number == 1)
                {
                    f1();
                    printf("\n\n");
                }

                if(number == 2)
                {
                    f2();
                    printf("\n\n");
                }

                if(number == 3)
                {
                    f3();
                    printf("\n\n");
                }

                if(number == 4)
                {
                    f4();
                    printf("\n\n");
                }

                if(number == 5)
                {
                    f5();
                    printf("\n\n");
                }

                if(number == 6)
                {
                    f6();
                    printf("\n\n");
                }

                if(number == 7)
                {
                    f7();
                    printf("\n\n");
                }

                if(number == 8)
                {
                    f8();
                    printf("\n\n");
                }

                if(number == 9)
                {
                    f9();
                    printf("\n\n");
                }

                if(number == 10)
                {
                    f10();
                    printf("\n\n");
                }

                if(number == 11)
                {
                    f11();
                    printf("\n\n");
                }

                if(number == 12)
                {
                    f12();
                    printf("\n\n");
                }

                if(number == 13)
                {
                    f13();
                    printf("\n\n");
                }

                if(number == 14)
                {
                    f14();
                    printf("\n\n");
                }

                if(number == 15)
                {
                    f15();
                    printf("\n\n");
                }

                if(number == 16)
                {
                    f16();
                    printf("\n\n");
                }

                if(number == 17)
                {
                    f17();
                    printf("\n\n");
                }

                if(number == 18)
                {
                    f18();
                    printf("\n\n");
                }

                if(number == 0)
                    break;

            }while(number != 0);
        }
        //funkcje przekazywanie parametrow
        if(dzial == 2)
        {
            do
            {
                print_funkcje_parametry_header();
                scanf("%d",&number);
                if(number == 1)
                {
                    printf("Zadanie 6.1: Napisz funkcje void pole_obwod(float a, float b, float c, float *pole, float *R), ktora obliczy i zwroci poprzez parametry pole i dlugosc promienia okregu opisanego na trojkacie o bokach a, b, c.\n");
                    fpp1();
                    printf("\n\n");
                }
                if(number == 2)
                {
                    printf("Zadanie 6.2: Napisz funkcje, ktora dla tablicy liczb calkowitych danej jako parametr obliczy i zwroci informacje ile razy w tablicy wystepuje wartosc maksymalna i ile razy wystepuje wartosc minimalna.");
                    fpp2();
                    printf("\n\n");
                }
            } while (number != 0);

        }

        if(dzial == 0)
        {
            printf("Wychodzenie z programu");
            wyjscie = 0;
        }

    }while(wyjscie != 0);

    return 0;
}
