#include <stdio.h>
#include <stdbool.h>

void f1()
{
    int b1,b2,b3;
    char wybor;
    getchar();
    printf("Czy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f2()
{
    int a1,a2,a3;
    char wybor;
    getchar();
    printf("Czy wyswietlic kod funkcji(Y/N): ");
    while(1)
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
    }
}

void f3()
{
    char wybor;
    int szer;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
    }
}

void f4()
{
    char wybor;
    int a,b;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
    }
}

void f5()
{
    char wybor;
    int granica;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
    }
}

void f6()
{
    char wybor;
    int n;
    getchar();
    printf("Czy wyswietlic kod funkcji?(Y/N):\n");
    while(1)
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
    }
}

void f7()
{
    char wybor;
    getchar();
    printf("Czy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f8()
{
    char wybor;
    int a,b,c;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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

        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f9()
{
    char wybor;
    int liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f10()
{
    int ktoraCwiartka(float x, float y);
    char wybor;
    float x,y;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f11()
{
    char wybor;
    float x;
    int n;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f12()
{
    float suma4(float x, int n);
    char wybor;
    float x;
    int n;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f13()
{
    float suma5(float x, float epsilon);
    char wybor;
    float x;
    float epsilon;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f14()
{
    char wybor;
    int liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f15()
{
    char wybor;
    int wielkosc;
    float liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
                if(l>=307)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f16()
{
    char wybor;
    int wielkosc,liczba;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
                if(l>=314)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f17()
{
    char wybor;
    char napis[30];
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
                if(l>=349)
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
        if(wybor == 'N' || wybor == 'n')
        {
            getchar();
            printf("Aby uruchomic funkcje stworz napis do odwrocenia:");
            printf("\nWprowadz napis: ");
            gets(napis);
            odwroc(napis);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void f18()
{
    char wybor;
    char napis[30];
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
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
        if(wybor == 'N' || wybor == 'n')
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
    }
}

void f19()
{
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N):\n");
    while(1)
    {
        scanf("%c",&wybor);
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=377)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj dwa ciagi znakow...\nPodaj dwa ciagi (max 100 znakow)...\n");
            char znak1[100],znak2[100];
            getchar();
            printf("Podaj ciag #1: ");
            gets(znak1);
            while(strlen(znak1)<0)
            {
                printf("Ciag znakow nie moze byc pusty!\nPopraw dane: ");
                gets(znak1);
            }
            printf("Podaj ciag #2: ");
            gets(znak2);
            while(strlen(znak2)<0)
            {
                printf("Ciag znakow nie moze byc pusty!\nPopraw dane: ");
                gets(znak2);
            }
            int c1=strlen(znak1),c2=strlen(znak2);
            if(czy_ciag(znak1,znak2,c1,c2))
                printf("Ciag '%s' jest podciagiem '%s'\n",znak1,znak2);
            else
                printf("Ciag '%s' nie jest podciagiem '%s'\n",znak1,znak2);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj dwa ciagi znakow...\nPodaj dwa ciagi (max 100 znakow)...\n");
            char znak1[100],znak2[100];
            getchar();
            printf("Podaj ciag #1: ");
            gets(znak1);
            while(strlen(znak1)<0)
            {
                printf("Ciag znakow nie moze byc pusty!\nPopraw dane: ");
                gets(znak1);
            }
            printf("Podaj ciag #2: ");
            gets(znak2);
            while(strlen(znak2)<0)
            {
                printf("Ciag znakow nie moze byc pusty!\nPopraw dane: ");
                gets(znak2);
            }
            int c1=strlen(znak1),c2=strlen(znak2);
            if(czy_ciag(znak1,znak2,c1,c2))
                printf("Ciag '%s' jest podciagiem '%s'\n",znak1,znak2);
            else
                printf("Ciag '%s' nie jest podciagiem '%s'\n",znak1,znak2);
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

