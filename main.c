#include <stdio.h>
#include "lib_funkcje.h"
#include "lib_funkcje_pp.h"



void f1()
{
    int b1,b2,b3;
    char wybor;
    getchar();
    printf("Zadanie 1. Napisz funkcje, ktora zwroci pole trojkata. Dlugosci bokow trojkata przekaz jako parametry funkcji.\n");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=7)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby wywolac funkcje wprowadz boki trojkata: ");
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
}

void f2()
{
    int a1,a2,a3;
    char wybor;
    getchar();
    printf("Zadanie 2. Napisz funkcje int maks(int x, int y, int z), zwracajaca wartosc maksymalna sposrod jej argumentow.\n");
    printf("Czy wyswietlic kod funkcji(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=25)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("\nAby uruchomic funkcje, podaj 3 argumenty do funkcji.\n");
            scanf("%d%d%d",&a1,&a2,&a3);
            maks(a1,a2,a3);
            break;
        }

        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje, podaj 3 argumenty do funkcji.\n");
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
}

void f3()
{
    char wybor;
    int szer;
    getchar();
    printf("Zadanie 3. Napisz funkcje long int suma(int n), ktora wyznaczy sume szeregu: 1-2+3-...+-n.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=35)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj dlugosc szeregu: ");
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
}

void f4()
{
    char wybor;
    int a,b;
    getchar();
    printf("Zadanie 4. Napisz funkcje long int suma(int min, int max), ktora obliczy sume liczb podzielnych przez 3 mieszczacych sie w przedziale <min, max>.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=48)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj przedzial <a,b>: ");
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
}

void f5()
{
    char wybor;
    int granica;
    getchar();
    printf("Zadanie 5. Napisz funkcje int wartoscMaks(int granica) ktora znajdzie najwieksza liczbe calkowita n taka, ze 1 + 2 + ... + n < granica.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=61)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj granice: ");
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
    printf("Zadanie 6. Napisz funkcje int min(int t[], int n), ktora dla tablicy o wymiarze n danej jako parametr zwroci wartosc elementu minimalnego.\n");
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=75)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby wywoloac funkcje musisz stworzyc tablice o zadanym wymiarze i wprowadzic do funkcji jako parametr:\n");
            do
            {
                printf("Podaj rozmiar tablicy: ");
                scanf("%d",&n);
                if(n>0)
                {
                    int tab[n],i,liczba;
                    printf("Teraz wypelnij tablice liczbami...\n");
                    for(i =0;i<n;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    printf("Wypelniono tablice...\n");
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
}

void f7()
{
    char wybor;
    getchar();
    printf("Zadanie 7. Napisz funkcje, ktora obliczy liczbe wystapien danego znaku w lancuchu.Lancuch oraz znak przekaz jako parametry funkcji.\n");
    printf("Czy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=96)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje musisz utworzyc lancuch oraz wprowadzic szukany znak:\n");
            char str[30],znak;
            getchar();
            do
            {
                printf("Utworz lancuch: ");
                gets(str);
                if(strlen(str)!= 0)
                {
                    printf("\nSzukany znak: ");
                    znak = getchar();
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
            printf("Aby uruchomic funkcje musisz utworzyc lancuch oraz wprowadzic szukany znak:\n");
            getchar();
            char str[30],znak;
            do
            {
                printf("Utworz lancuch: ");
                gets(str);

                if(strlen(str)!= 0)
                {
                    printf("\nSzukany znak: ");
                    znak = getchar();
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
}

void f8()
{
    char wybor;
    int a,b,c;
    getchar();
    printf("Zadanie 8. Napisz funkcje, ktora wyswietla wzor rownania kwadratowego (np. x^2+2x-3=0) dla zadanych wartosci wspolczynnikow a, b oraz c. Uwzglednij rozne wartosci oraz znaki wspolczynnikow (aby np. nie wyswietlac 0x^2+-1x+0=0).");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=110)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj wspolczynniki wzoru kwadratowego(a,b,c): ");
            scanf("%d%d%d",&a,&b,&c);
            wzor_kwadratowy(a,b,c);
            break;
        }

        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj wspolczynniki wzoru kwadratowego(a,b,c): ");
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
}

void f9()
{
    char wybor;
    int liczba;
    getchar();
    printf("Zadanie 9. Napisz funkcje, ktora wyswietli na ekranie dwojkowa reprezentacje liczby calkowitej danej jako parametr.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=205)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj liczbe do zamiany: ");
            scanf("%d",&liczba);
            dwojkowa_reprezentacja(liczba);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj liczbe do zamiany: ");
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
}

void f10()
{
    char wybor;
    float x,y;
    getchar();
    printf("Zadanie 10. Napisz funkcje, int ktoraCwiartka(float x, float y) ktora dla punktu o wspolrzednych (x, y) zwroci wartosc 1, 2, 3 lub 4, identyfikujaca jedna z cwiartek ukladu wspolrzednych wewnatrz ktorej lezy ten punkt. W przypadku, gdy punkt lezy na ktorejkolwiek osi wspolrzednych funkcja powinna zwrocic 0.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=225)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj wspolrzedne punktu(x,y): ");
            scanf("%f%f",&x,&y);
            ktoraCwiartka(x,y);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj wspolrzedne punktu(x,y): ");
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
}

void f11()
{
    char wybor;
    float x;
    int n;
    getchar();
    printf("Zadanie 11. Napisz funkcje, float suma(float x, int n), ktora wyznaczy sume szeregu: (x+1)-(x2-2)+(x3+3)-...+-(xn+-n).");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=239)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj x i n: ");
            scanf("%f%d",&x,&n);
            suma3(x,n);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj x i n: ");
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
}

void f12()
{
    char wybor;
    float x;
    int n;
    getchar();
    printf("Zadanie 12. Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: x+2x2+3x3+...+nxn.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=253)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj x i n: ");
            scanf("%f%d",&x,&n);
            suma4(x,n);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj x i n: ");
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
}

void f13()
{
    char wybor;
    float x;
    float epsilon;
    getchar();
    printf("Zadanie 13. Napisz funkcje float suma(float x, float epsilon), ktora dla x z przedzialu (0, 1) wyznaczy sume szeregu: 1 + x + x2/2 + ... + xi/i. Sumowanie przerwij jezeli kolejny skladnik bedzie mniejszy od zadanej dokladnosci epsilon.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=266)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj x z przedzialu(0,1) i dokladnosc: ");
            scanf("%f%f",&x,&epsilon);
            suma5(x,epsilon);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj x z przedzialu(0,1) i dokladnosc: ");
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
}

void f14()
{
    char wybor;
    int liczba;
    getchar();
    printf("Zadanie 14. Napisz funkcje sprawdzajaca, czy jej argument jest liczba pierwsza.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=285)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj dowolna liczbe naturalna: ");
            scanf("%d",&liczba);
            czy_pierwsza(liczba);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj dowolna liczbe naturalna: ");
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
}

void f15()
{
    char wybor;
    int wielkosc;
    float liczba;
    getchar();
    printf("Zadanie 15. Napisz funkcje, ktora wypisze na ekranie zawartosc danej jako parametr jednowymiarowej tablicy liczb rzeczywistych.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=302)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych: ");
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
                    wypisz_tab(wielkosc,tab);
                    break;
                }
                printf("Tablica nie moze byc ujemna!\n");
            }while(wielkosc<0);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych: ");
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
                    wypisz_tab(wielkosc,tab);
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
}

void f16()
{
    char wybor;
    int wielkosc,liczba;
    getchar();
    printf("Zadanie 16. Napisz funkcje, ktora zliczy i wypisze liczbe wystapien elementow tablicy o rozmiarze N.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=309)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice:");
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
            }while(wielkosc<0);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice:");
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
            }while(wielkosc<0);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
}

void f17()
{
    char wybor;
    char napis[30];
    getchar();
    printf("Zadanie 17. Napisz funkcje, ktora bedzie odwracala kolejnosc znakow w przekazanym jej napisie. Po jej wykonaniu ostatni znak napisu bedzie pierwszym, przedostatni drugim, itd.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=344)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            getchar();
            printf("Aby uruchomic funkcje stworz napis do odwrocenia:");
            printf("\nWprowadz napis: ");
            gets(napis);
            odwroc(napis);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz napis do odwrocenia:");
            gets(napis);
            odwroc(napis);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }while(wybor != 'N' || wybor != 'n');
}

void f18()
{
    char wybor;
    char napis[30];
    getchar();
    printf("Zadanie 18. Napisz funkcje, ktora wyznaczy liczbe slow w danym jako parametr lancuchu. Slowo definiujemy jako ciag znakow oddzielony bialym znakiem lub znakiem przestankowym.");
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    do
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=357)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj ciag znakow: ");
            getchar();
            gets(napis);
            liczba_slow(napis);
            break;
        }
        else if(wybor == 'N' || wybor == 'n')
        {
            printf("\nAbu uruchomic funkcje podaj ciag znakow: ");
            getchar();
            gets(napis);
            liczba_slow(napis);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }

    }while(wybor != 'N' || wybor != 'n');
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

    }while(wyjscie != 0);

    return 0;
}
