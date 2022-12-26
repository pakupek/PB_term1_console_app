#include <stdio.h>
#include "lib_funkcje.h"
#include "lib_funkcje_pp.h"
#include "lib_prnt.h"


void f1()
{
    int b1,b2,b3;
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf1();
            scanf("%d%d%d",&b1,&b2,&b3);
            pole(b1,b2,b3);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby wywolac funkcje wprowadz boki trojkata: ");
            scanf("%d%d%d",&b1,&b2,&b3);
            pole(b1,b2,b3);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f2()
{
    int a1,a2,a3;
    char wybor;
    getchar();
    printf("Czy wyswietlic kod funkcji(Y/N): ");
    do
    {
        scanf("%c",&wybor);

        if(wybor == 'Y' || wybor == 'y')
        {
            pf2();
            scanf("%d%d%d",&a1,&a2,&a3);
            maks(a1,a2,a3);
            break;
        }

        if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje, podaj 3 argumenty do funkcji.\n");
            scanf("%d%d%d",&a1,&a2,&a3);
            maks(a1,a2,a3);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor !='n');

    return;
}

void f3()
{
    char wybor;
    int szer;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf3();
            scanf("%d",&szer);
            suma1(szer);
            break;
        }
        if(wybor == 'N' || wybor =='n')
        {
            printf("\nAby uruchomic funkcje podaj dlugosc szeregu: ");
            scanf("%d",&szer);
            suma1(szer);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f4()
{
    char wybor;
    int a,b;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf4();
            scanf("%d%d",&a,&b);
            suma2(a,b);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj przedzial <a,b>: ");
            scanf("%d%d",&a,&b);
            suma2(a,b);
            break;
        }
        else
        {
            printf("Niepoprawna warosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return ;

}

void f5()
{
    char wybor;
    int granica;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf5();
            scanf("%d",&granica);
            wartoscMaks(granica);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj granice: ");
            scanf("%d",&granica);
            wartoscMaks(granica);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');

}

void f6()
{
    char wybor;
    int n;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf6();
            do
            {
                printf("Podaj rozmiar tablicy: ");
                scanf("%d",&n);
                if(n>0)
                {
                    int tab[n],i,liczba;
                    printf("Teraz wypelnij tablice liczbami\n");
                    for(i =0;i<n;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    printf("Wypelniono tablice\n");
                    printf("Wykonywanie funkcji...\n");
                    minis(tab,n);
                    break;
                }
                else
                    printf("Tablica nie moze byc ujemna!\n");
            }while(n<0);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("\n\nAby wywoloac funkcje musisz stworzyc tablice o zadanym wymiarze i wprowadzic do funkcji jako parametr!!\n");
            do
            {
                printf("Podaj rozmiar tablicy: ");
                scanf("%d",&n);
                if(n>0)
                {
                    int tab[n],i,liczba;
                    printf("Teraz wypelnij tablice liczbami\n");
                    for(i =0;i<n;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    printf("Wypelniono tablice\n");
                    printf("Wykonywanie funkcji...\n");
                    minis(tab,n);
                    break;
                }
                else
                    printf("Tablica nie moze byc ujemna!\n");
            }while(n<0);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }while(wybor != 'N' || wybor != 'n');
    return ;
}

void f7()
{
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf7();
            char str[30],znak;
            do
            {
                printf("Utworz lancuch: ");
                scanf("%s",&str);

                if(str != '\0')
                {
                    getchar();
                    printf("\nSzukany znak: ");
                    scanf("%c",&znak);
                    wystapienia(str,znak);
                    break;
                }
                else
                    printf("Lancuch nie moze byc pusty!\n");

            }while(str == NULL);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje musisz utworzyc lancuch oraz wprowadzic szukany znak\n");
            char str[30],znak;
            do
            {
                printf("Utworz lancuch: ");
                scanf("%s",&str);

                if(str != '\0')
                {
                    getchar();
                    printf("\nSzukany znak: ");
                    scanf("%c",&znak);
                    wystapienia(str,znak);
                    break;
                }
                else
                    printf("Lancuch nie moze byc pusty!\n");

            }while(str == NULL);
            break;
        }
        else
        {
            printf("Nieporawna wartosc!\n");
            getchar();
        }
    }while(wybor != 'N' && wybor != 'n' && wybor != 'Y' && wybor != 'y');
    return ;
}

void f8()
{
    char wybor;
    int a,b,c;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf8();
            scanf("%d%d%d",&a,&b,&c);
            wzor_kwadratowy(a,b,c);
            break;
        }

        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj wspolczynniki wzoru kwadratowego(a,b,c): ");
            scanf("%d%d%d",&a,&b,&c);
            wzor_kwadratowy(a,b,c);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f9()
{
    char wybor;
    int liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf9();
            scanf("%d",&liczba);
            dwojkowa_reprezentacja(liczba);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj liczbe do zamiany: ");
            scanf("%d",&liczba);
            dwojkowa_reprezentacja(liczba);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f10()
{
    char wybor;
    float x,y;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf10();
            scanf("%f%f",&x,&y);
            ktoraCwiartka(x,y);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj wspolrzedne punktu(x,y): ");
            scanf("%f%f",&x,&y);
            ktoraCwiartka(x,y);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f11()
{
    char wybor;
    float x;
    int n;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf11();
            scanf("%f%d",&x,&n);
            suma3(x,n);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj x i n: ");
            scanf("%f%d",&x,&n);
            suma3(x,n);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;

}

void f12()
{
    char wybor;
    float x;
    int n;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf12();
            scanf("%f%d",&x,&n);
            suma4(x,n);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj x i n: ");
            scanf("%f%d",&x,&n);
            suma4(x,n);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f13()
{
    char wybor;
    float x;
    float epsilon;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf13();
            scanf("%f%f",&x,&epsilon);
            suma5(x,epsilon);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj x z przedzialu(0,1) i dokladnosc: ");
            scanf("%f%f",&x,&epsilon);
            suma5(x,epsilon);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');

    return;
}

void f14()
{
    char wybor;
    int liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf14();
            scanf("%d",&liczba);
            czy_pierwsza(liczba);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje podaj dowolna liczbe naturalna: ");
            scanf("%d",&liczba);
            czy_pierwsza(liczba);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');

    return;
}

void f15()
{
    char wybor;
    int wielkosc;
    float liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf15();
            do
            {
                scanf("%d",&wielkosc);
                if(wielkosc>0)
                {
                    float tab[wielkosc];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i =0;i<wielkosc;i++)
                    {
                        scanf("%f",&liczba);
                        tab[i] = liczba;
                    }
                    wypisz_tab(tab);
                    break;
                }
                printf("Tablica nie moze byc ujemna!\n");
            }while(wielkosc<0);
            
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje stworz tablice liczb rzeczywistych: ");
            printf("\nPodaj wielkosc tablicy: ");
            do
            {
                scanf("%d",&wielkosc);
                if(wielkosc>0)
                {
                    float tab[wielkosc];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i =0;i<wielkosc;i++)
                    {
                        scanf("%f",&liczba);
                        tab[i] = liczba;
                    }
                    wypisz_tab(tab);
                    break;
                }
                printf("Tablica nie moze byc ujemna!\n");
            }while(wielkosc<0);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f16()
{
    char wybor;
    int wielkosc,liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf16();
            do
            {
                scanf("%d",&wielkosc);
                if(wielkosc > 0)
                {
                    int tab[wielkosc];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i =0;i<wielkosc;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    zlicz(tab,wielkosc);
                }
            } while (wielkosc<0);

            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje stworz tablice:");
            printf("\nPodaj wielkosc tablicy: ");
            do
            {
                scanf("%d",&wielkosc);
                if(wielkosc > 0)
                {
                    int tab[wielkosc];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i =0;i<wielkosc;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    zlicz(tab,wielkosc);
                }
            } while (wielkosc<0);

            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');

    return;
}

void f17()
{
    char wybor;
    char napis[30];
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf17();
            getchar();
            fgets(napis, sizeof(napis), stdin);
            odwroc(napis);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAby uruchomic funkcje stworz napis do odwrocenia:");
            scanf("%s",&napis);
            odwroc(napis);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void f18()
{
    char wybor;
    char napis[30];
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            pf18();
            getchar();
            fgets(napis, sizeof(napis), stdin);
            liczba_slow(napis);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAbu uruchomic funkcje podaj ciag znakow: ");
            getchar();
            fgets(napis, sizeof(napis), stdin);
            liczba_slow(napis);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

//ostanie zadanie z funkcji do zrobienia!
void f19()
{
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            printf("void czy_ciag( char *ciag_1, char *ciag_2)\n{\n  int n=strlen(ciag_1),m=strlen(ciag_2),i,j;\n  char wynik[i][j];");
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
    return;
}

void fpp1()
{
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            printf("bool pole_obwod(float a, float b, float c, float *pole, float *R)\n{\n  if(a<=0 || b<=0 || c<=0)\n    return false;\n  float p2=(a+b+c)/2;\n  float p=sqrt(p2*(p2-a)*(p2-b)*(p2-c));\n");
            printf("  (*R) = (a*b*c)/(4*p);\n  (*pole) = 3.14 * (*R) * (*R);\n  return true;\n}");
            printf("\nAby uruchomic funkcje");
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
}
int main()
{
    int number;
    int dzial;
    int wyjscie = -1;

    do
    {
        printf("\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n\n");
        printf("1. Dzial: Funkcje\n2. Dzial: Funkcje,przekazywanie parametrow.\n");
        printf("\n\n0 - Exit\n");
        scanf("%d",&dzial);

        if(dzial == 1)
        {
            do
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
                scanf("%d",&number);

                if(number == 1)
                {
                    printf("Zadanie 1. Napisz funkcje, ktora zwroci pole trojkata. Dlugosci bokow trojkata przekaz jako parametry funkcji.\n");
                    f1();
                    printf("\n\n");
                }

                if(number == 2)
                {
                    printf("Zadanie 2. Napisz funkcje int maks(int x, int y, int z), zwracajaca wartosc maksymalna sposrod jej argumentow.\n");
                    f2();
                    printf("\n\n");
                }

                if(number == 3)
                {
                    printf("Zadanie 3. Napisz funkcje long int suma(int n), ktora wyznaczy sume szeregu: 1-2+3-...±n.");
                    f3();
                    printf("\n\n");
                }

                if(number == 4)
                {
                    printf("Zadanie 4. Napisz funkcje long int suma(int min, int max), ktora obliczy sume liczb podzielnych przez 3 mieszczacych sie w przedziale <min, max>.");
                    f4();
                    printf("\n\n");
                }

                if(number == 5)
                {
                    printf("Zadanie 5. Napisz funkcje int wartoscMaks(int granica) ktora znajdzie najwieksza liczbe calkowita n taka, ze 1 + 2 + ... + n < granica.");
                    f5();
                    printf("\n\n");
                }

                if(number == 6)
                {
                    printf("Zadanie 6. Napisz funkcje int min(int t[], int n), ktora dla tablicy o wymiarze n danej jako parametr zwroci wartosc elementu minimalnego.\n");
                    f6();
                    printf("\n\n");
                }

                if(number == 7)
                {
                    printf("Zadanie 7. Napisz funkcje, ktora obliczy liczbe wystapien danego znaku w lancuchu.Lancuch oraz znak przekaz jako parametry funkcji.\n");
                    f7();
                    printf("\n\n");
                }

                if(number == 8)
                {
                    printf("Zadanie 8. Napisz funkcje, ktora wyswietla wzor rownania kwadratowego (np. x^2+2x-3=0) dla zadanych wartosci wspolczynnikow a, b oraz c. Uwzglednij rozne wartosci oraz znaki wspolczynnikow (aby np. nie wyswietlac 0x^2+-1x+0=0).");
                    f8();
                    printf("\n\n");
                }

                if(number == 9)
                {
                    printf("Zadanie 9. Napisz funkcje, ktora wyswietli na ekranie dwojkowa reprezentacje liczby calkowitej danej jako parametr.");
                    f9();
                    printf("\n\n");
                }

                if(number == 10)
                {
                    printf("Zadanie 10. Napisz funkcje, int ktoraCwiartka(float x, float y) ktora dla punktu o wspolrzednych (x, y) zwroci wartosc 1, 2, 3 lub 4, identyfikujaca jedna z cwiartek ukladu wspolrzednych wewnatrz ktorej lezy ten punkt. W przypadku, gdy punkt lezy na ktorejkolwiek osi wspolrzednych funkcja powinna zwrocic 0.");
                    f10();
                    printf("\n\n");
                }

                if(number == 11)
                {
                    printf("Zadanie 11. Napisz funkcje, float suma(float x, int n), ktora wyznaczy sume szeregu: (x+1)-(x2-2)+(x3+3)-...±(xn±n).");
                    f11();
                    printf("\n\n");
                }

                if(number == 12)
                {
                    printf("Zadanie 12. Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: x+2x2+3x3+...+nxn.");
                    f12();
                    printf("\n\n");
                }

                if(number == 13)
                {
                    printf("Zadanie 13. Napisz funkcje float suma(float x, float epsilon), ktora dla x z przedzialu (0, 1) wyznaczy sume szeregu: 1 + x + x2/2 + ... + xi/i. Sumowanie przerwij jezeli kolejny skladnik bedzie mniejszy od zadanej dokladnosci epsilon.");
                    f13();
                    printf("\n\n");
                }

                if(number == 14)
                {
                    printf("Zadanie 14. Napisz funkcje sprawdzajaca, czy jej argument jest liczba pierwsza.");
                    f14();
                    printf("\n\n");
                }

                if(number == 15)
                {
                    printf("Zadanie 15. Napisz funkcje, ktora wypisze na ekranie zawartosc danej jako parametr jednowymiarowej tablicy liczb rzeczywistych.");
                    f15();
                    printf("\n\n");
                }

                if(number == 16)
                {
                    printf("Zadanie 16. Napisz funkcje, ktora zliczy i wypisze liczbe wystapien elementow tablicy o rozmiarze N.");
                    f16();
                    printf("\n\n");
                }

                if(number == 17)
                {
                    printf("Zadanie 17. Napisz funkcje, ktora bedzie odwracala kolejnosc znakow w przekazanym jej napisie. Po jej wykonaniu ostatni znak napisu bedzie pierwszym, przedostatni drugim, itd.");
                    f17();
                    printf("\n\n");
                }

                if(number == 18)
                {
                    printf("Zadanie 18. Napisz funkcje, ktora wyznaczy liczbe slow w danym jako parametr lancuchu. Slowo definiujemy jako ciag znakow oddzielony bialym znakiem lub znakiem przestankowym.");
                    f18();
                    printf("\n\n");
                }

                if(number == 0)
                    break;

            }while(number != 0);
        }

        if(dzial == 2)
        {
            do
            {
                printf("Funkcje,przekazywanie parametrow\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n");
                scanf("%d",&number);
                if(number == 1)
                {
                    printf("Zadanie 6.1: Napisz funkcje void pole_obwod(float a, float b, float c, float *pole, float *R), ktora obliczy i zwroci poprzez parametry pole i dlugosc promienia okregu opisanego na trojkacie o bokach a, b, c.\n");
                    fpp1();
                    printf("\n\n");
                }
            } while (number != 0);
            
        }

        if(dzial == 0)
        {
            printf("Wychodzenie z programu");
            wyjscie = 0;
        }

    }while(dzial != 0);

    return 0;
}
