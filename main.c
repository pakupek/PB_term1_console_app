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
    printf("1. Napisz funkcje void pole_obwod(float a, float b, float c, float *pole, float *R), ktora obliczy...\n2. Napisz funkcje, ktora dla tablicy liczb calkowitych danej jako parametr obliczy i zwroci...\n");
    printf("3. Napisz funkcje void mins(int ar[], int n, int *m1, int *m2, int *m3), ktora przyjmuje...\n4. Napisz funkcje void wypelnijLosowo(int t[], int n, int a, int b) wypelniajaca...\n");
    printf("5. Napisz funkcje void odwroc(char p[]), ktora bedzie odwracala...\n6. Napisz funkcje, ktora w lancuchu danym jako...\n7. Napisz funkcje void fill(float ar[], int n, float a, float b), ktora wypelni...\n");
    printf("8. Napisz funkcje void roundArray(float in[], int out[], int n), ktora przyjmuje jako...\n9. Napisz funkcje bool someEven(int ar[], int n), ktora przyjmuje jako...\n");
    printf("10. Napisz funkcje void pole_obwod(float R, float *p, float *o), ktora obliczy i...\n11. Napisz funkcje void min_max(int t[], int n, int *min, int *max), ktora dla tablicy o...\n");
    printf("12. Napisz funkcje, ktora dla lancucha danego...\n13. Napisz funkcje int min(int ar[], int n, int *count), ktora przyjmuje jako...\n14. Napisz funkcje int pierwiastki(float a, float b, float c, float *x1, float *x2), ktora przyjmuje jako parametry...\n");
    printf("15. Napisz funkcje bool read(char str[], int *value), ktora wczytuje od...\n16. Napisz funkcje void wypisz(float *ar, int n), ktora wypisuje zawartosc...\n");
    printf("17. Napisz funkcje void wypelnijB(int A[], int B[], int n), ktora na podstawie tablicy...\n18. Napisz funkcje void skaluj(float t[], int n), ktora przeskaluje...\n");
    printf("19. Napisz funkcje ktora sortuje metoda babelkowa...\n20. Napisz funkcje implementujaca sortowanie przez...\n21. Napisz funkcje int crop(float ar[], int n, float a, float b), ktora przyjmuje jako parametr...\n");
    printf("22. Napisz funkcje void removeRepeats(int in[], int out[], int n), ktora przyjmuje jako argumenty...\n23. Napisz funkcje void doubleEven(int in[], int out[], int n), ktora przyjmuje jako argumenty...\n");
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
                if(number == 3)
                {
                    printf("Zadanie 6.3: ");
                    fpp3();
                    printf("\n\n");
                }
                if(number == 4)
                {
                    printf("Zadanie 6.4: ");
                    fpp4();
                    printf("\n\n");
                }
                if(number == 5)
                {
                    printf("Zadanie 6.5: ");
                    fpp5();
                    printf("\n\n");
                }
                if(number == 6)
                {
                    printf("Zadanie 6.6: ");
                    fpp6();
                    printf("\n\n");
                }
                if(number == 7)
                {
                    printf("Zadanie 6.7: ");
                    fpp7();
                    printf("\n\n");
                }
                if(number == 8)
                {
                    printf("Zadanie 6.8: ");
                    fpp8();
                    printf("\n\n");
                }
                if(number == 9)
                {
                    printf("Zadanie 6.9: ");
                    fpp9();
                    printf("\n\n");
                }
                if(number == 10)
                {
                    printf("Zadanie 6.10: ");
                    fpp10();
                    printf("\n\n");
                }
                if(number == 11)
                {
                    printf("Zadanie 6.11: ");
                    fpp11();
                    printf("\n\n");
                }
                if(number == 12)
                {
                    printf("Zadanie 6.12: ");
                    fpp12();
                    printf("\n\n");
                }
                if(number == 13)
                {
                    printf("Zadanie 6.13: ");
                    fpp13();
                    printf("\n\n");
                }
                if(number == 14)
                {
                    printf("Zadanie 6.14: ");
                    fpp14();
                    printf("\n\n");
                }
                if(number == 15)
                {
                    printf("Zadanie 6.15: ");
                    fpp15();
                    printf("\n\n");
                }
                if(number == 16)
                {
                    printf("Zadanie 6.16: ");
                    fpp16();
                    printf("\n\n");
                }
                if(number == 17)
                {
                    printf("Zadanie 6.17: ");
                    fpp17();
                    printf("\n\n");
                }
                if(number == 18)
                {
                    printf("Zadanie 6.18: ");
                    fpp18();
                    printf("\n\n");
                }
                if(number == 19)
                {
                    printf("Zadanie 6.19: ");
                    fpp19();
                    printf("\n\n");
                }
                if(number == 20)
                {
                    printf("Zadanie 6.20: ");
                    fpp20();
                    printf("\n\n");
                }
                if(number == 21)
                {
                    printf("Zadanie 6.21: ");
                    fpp21();
                    printf("\n\n");
                }
                if(number == 22)
                {
                    printf("Zadanie 6.22: ");
                    fpp22();
                    printf("\n\n");
                }
                if(number == 23)
                {
                    printf("Zadanie 6.23: ");
                    fpp23();
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
