#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void fpp1()
{
    void pole_obwod(float a, float b, float c, float *pole, float *R);
    char wybor;
    float a,b,c;
    float p,r;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=5)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj wymiary trojkata (a,b,c): ");

            while(1)
            {
                scanf("%f%f%f",&a,&b,&c);
                //boki trojkata nie moga byc ujemne
                if(a>0 && b>0 && c>0)
                {
                    //warunek na powstanie trojkata: dlugosc dowolnego boku musi byc mniejsza od sumy 2 pozostalych
                    if(a<b+c && b<a+c && c<b+c)
                    {
                        pole_obwod(a,b,c,&p,&r);
                        printf("Pole okregu opisanego na trojkacie (%.2f,%.2f,%.2f) wynosi: %f\nPromien okregu wynosi: %f\n",a,b,c,p,r);
                        break;

                    }
                    //jesli nie da sie utworzyc to popraw dane
                    else
                    {
                        printf("Z podanych bokow nie mozna utworzyc trojkata\nPopraw dane!\n");
                        continue;
                    }
                }
                //jezeli wprowadzone boki sa ujemne to popraw dane
                else
                    printf("Boki trojkata nie moga byc ujemne!\nPopraw dane!\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj wymiary trojkata (a,b,c): ");
            while(1)
            {
                scanf("%f%f%f",&a,&b,&c);
                //boki trojkata nie moga byc ujemne
                if(a>0 && b>0 && c>0)
                {
                    //warunek na powstanie trojkata: dlugosc dowolnego boku musi byc mniejsza od sumy 2 pozostalych
                    if(a<b+c && b<a+c && c<b+c)
                    {
                        pole_obwod(a,b,c,&p,&r);
                        printf("Pole okregu opisanego na trojkacie (%.2f,%.2f,%.2f) wynosi: %f\nPromien okregu wynosi: %f\n",a,b,c,p,r);
                        break;

                    }
                    //jesli nie da sie utworzyc to popraw dane
                    else
                    {
                        printf("Z podanych bokow nie mozna utworzyc trojkata\nPopraw dane!\n");
                        continue;
                    }
                }
                //jezeli wprowadzone boki sa ujemne to popraw dane
                else
                    printf("Boki trojkata nie moga byc ujemne!\nPopraw dane!\n");
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpp2()
{
    int min_max(int t[], int n, int *min, int *max, int *licznik_max, int *licznik_min);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=15)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje utworz tablice:\n");
            printf("Podaj rozmiar tablicy: ");
            int n;
            while(1)
            {
                getchar();
                scanf("%d",&n);
                if(n>0)
                {
                    int liczba;
                    int tab[n];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i=0;i<n;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    int min,max,licznik_max,licznik_min;
                    min_max(tab,n,&min,&max,&licznik_max,&licznik_min);
                    printf("Ilosc wystapien liczby maksymalnej (%d): %d\nIlosc wystapien liczby minimalnej (%d): %d\n",max,licznik_max,min,licznik_min);
                    break;
                }
                else
                    printf("Tablica nie moze byc pusta!\nPopraw dane\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje utworz tablice:\n");
            printf("Podaj rozmiar tablicy: ");
            int n;
            while(1)
            {
                getchar();
                scanf("%d",&n);
                if(n>0)
                {
                    int liczba;
                    int tab[n];
                    printf("Wprowadz liczby do tablicy: ");
                    for(int i=0;i<n;i++)
                    {
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    int min,max,licznik_max,licznik_min;
                    min_max(tab,n,&min,&max,&licznik_max,&licznik_min);
                    printf("Ilosc wystapien liczby maksymalnej (%d): %d\nIlosc wystapien liczby minimalnej (%d): %d\n",max,licznik_max,min,licznik_min);
                    break;
                }
                else
                    printf("Tablica nie moze byc pusta!\nPopraw dane\n");
            }
            break;
        }
        else
        {
            printf("Nieprawidlowy wybor!\n");
            getchar();
        }
    }
}

void fpp3()
{
    void mins(int ar[], int n, int *m1, int *m2, int *m3);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=55)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            int rozmiar;
            printf("Aby uruchomic funkcje utworz tablice liczb naturalnych:\n");
            printf("Podaj rozmiar tablicy (wiekszy niz 3): ");
            while(1)
            {
                scanf("%d",&rozmiar);
                if(rozmiar>0 && rozmiar>3)
                {
                    int tab[rozmiar],liczba;
                    for(int i=0;i<rozmiar;i++)
                    {
                        printf("Wprowadz liczbe: ");
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    int l1,l2,l3;
                    mins(tab,rozmiar,&l1,&l2,&l3);
                    printf("Trzy najmniejsze wartosci w tablicy: %d,%d,%d\n",l1,l2,l3);
                    break;
                }
                else
                    printf("Tablica nie moze byc ujemna!\nPopraw dane\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int rozmiar;
            printf("Aby uruchomic funkcje utworz tablice liczb naturalnych:\n");
            printf("Podaj rozmiar tablicy (wiekszy niz 3): ");
            while(1)
            {
                scanf("%d",&rozmiar);
                if(rozmiar>0 && rozmiar>3)
                {
                    int tab[rozmiar],liczba;
                    for(int i=0;i<rozmiar;i++)
                    {
                        printf("Wprowadz liczbe: ");
                        scanf("%d",&liczba);
                        tab[i] = liczba;
                    }
                    int l1,l2,l3;
                    mins(tab,rozmiar,&l1,&l2,&l3);
                    printf("Trzy najmniejsze wartosci w tablicy: %d,%d,%d\n",l1,l2,l3);
                    break;
                }
                else
                    printf("Tablica nie moze byc ujemna!\nPopraw dane\n");
            }
            break;
        }
        else
        {
            printf("Nieprawidlowy wybor!\n");
            getchar();
        }
    }
}

void fpp4()
{
    void wypelnijLosowo(int t[], int n, int a, int b);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=80)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            int rozmiar;
            printf("Aby ruchomic funkcje podaj rozmiar tablicy: ");
            while(1)
            {
                scanf("%d",&rozmiar);
                if(rozmiar>0)
                {
                    int tab[rozmiar],a,b;
                    printf("Podaj przedzial <a,b>: ");
                    scanf("%d%d",&a,&b);
                    wypelnijLosowo(tab,rozmiar,a,b);
                    break;
                }
                else
                    printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int rozmiar;
            printf("Aby ruchomic funkcje podaj rozmiar tablicy: ");
            while(1)
            {
                scanf("%d",&rozmiar);
                if(rozmiar>0)
                {
                    int tab[rozmiar],a,b;
                    printf("Podaj przedzial <a,b>: ");
                    scanf("%d%d",&a,&b);
                    wypelnijLosowo(tab,rozmiar,a,b);
                    break;
                }
                else
                    printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane\n");
            }
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp5()
{
    void odwroc_napis(char p[]);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=97)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            getchar();
            char napis[30];
            printf("Aby uruchomic funkcje wprowadz napis do odwrocenia(max 30 znakow): ");
            gets(napis);
            odwroc_napis(napis);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            getchar();
            char napis[30];
            printf("Aby uruchomic funkcje wprowadz napis do odwrocenia(max 30 znakow): ");
            gets(napis);
            odwroc_napis(napis);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp6()
{
    void lower_to_upper(char p[]);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=114)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            char napis[30];
            getchar();
            printf("Aby uruchomic funkcje podaj napis(max. 30 znakow): ");
            gets(napis);
            lower_to_upper(napis);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            char napis[30];
            getchar();
            printf("Aby uruchomic funkcje podaj napis(max. 30 znakow): ");
            gets(napis);
            lower_to_upper(napis);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp7()
{
    void fill_array(int n, float ar[n], float in, float out);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");

        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=130)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby wypelnic tablice podaj rozmiar tablicy i przedzial liczbowy:\n");
            printf("Podaj rozmiar tablicy: ");
            int n;
            scanf("%d",&n);
            while(n<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&n);
            }
             float ar[n],a,b;
            printf("Podaj przedzialy(liczba rzeczywista) <a,b>: ");
            scanf("%f%f",&a,&b);
            fill_array(n,ar,a,b);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby wypelnic tablice podaj rozmiar tablicy i przedzial liczbowy:\n");
            printf("Podaj rozmiar tablicy: ");
            int n;
            scanf("%d",&n);
            while(n<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&n);
            }
             float ar[n],a,b;
            printf("Podaj przedzialy(liczba rzeczywista) <a,b>: ");
            scanf("%f%f",&a,&b);
            fill_array(n,ar,a,b);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp8()
{
    void roundArray(float in[], int out[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=156)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            int rozmiar;
            printf("Aby uruchomic funkcje podaj dlugosc tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float in[rozmiar],liczba;
            int out[rozmiar];
            printf("Podaj tablice liczb rzeczywistych do zaokraglenia: ");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%f",&liczba);
                in[i] = liczba;
            }
            roundArray(in,out,rozmiar);
            printf("Zaokraglona tablica:\n");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",out[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int rozmiar;
            printf("Aby uruchomic funkcje podaj dlugosc tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float in[rozmiar],liczba;
            int out[rozmiar];
            printf("Podaj tablice liczb rzeczywistych do zaokraglenia: ");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%f",&liczba);
                in[i] = liczba;
            }
            roundArray(in,out,rozmiar);
            printf("Zaokraglona tablica:\n");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",out[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp9()
{
    bool someEven(int ar[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=162)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\n");
            int rozmiar,liczba;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            bool wynik;
            wynik = someEven(tab,rozmiar);
            if(wynik == 1)
                printf("Sprawdzanie czy jest liczba parzysta...\nWynik: Znajduje sie liczba parzysta!\n");
            else
                printf("Sprawdzanie czy jest liczba parzysta...\nWynik: Brak liczby parzystej!\n");
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\n");
            int rozmiar,liczba;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            bool wynik;
            wynik = someEven(tab,rozmiar);
            if(wynik == 1)
                printf("Sprawdzanie czy jest liczba parzysta...\nWynik: Znajduje sie liczba parzysta!\n");
            else
                printf("Sprawdzanie czy jest liczba parzysta...\nWynik: Brak liczby parzystej!\n");
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp10()
{
    float pole_obwod_kola(float ,float*, float*);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=173)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            float R,p,o;
            printf("Aby uruchomic funkcje podaj promien okregu (R): ");
            scanf("%f",&R);
            while(R<0)
            {
                printf("Promien kola nie moze byc ujemny!\nPopraw dane: ");
                scanf("%f",&R);
            }
            pole_obwod_kola(R,&p,&o);
            printf("Pole kola: %f\tObwod kola: %f\n",p,o);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            float R,p,o;
            printf("Aby uruchomic funkcje podaj promien okregu (R): ");
            scanf("%f",&R);
            while(R<0)
            {
                printf("Promien kola nie moze byc ujemny!\nPopraw dane: ");
                scanf("%f",&R);
            }
            pole_obwod_kola(R,&p,&o);
            printf("Pole kola: %f\tObwod kola: %f\n",p,o);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp11()
{
    void minimum_maximum(int t[], int n, int *min, int *max);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=179)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj tablice wartosci calkowitych...\n");
            int rozmiar;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba,min,max;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            minimum_maximum(tab,rozmiar,&min,&max);
            printf("Wartosc minimalna: %d\nWartosc maksymalna: %d\n",min,max);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj tablice wartosci calkowitych...\n");
            int rozmiar;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba,min,max;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            minimum_maximum(tab,rozmiar,&min,&max);
            printf("Wartosc minimalna: %d\nWartosc maksymalna: %d\n",min,max);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp12()
{
    void aplha_num(char p[]);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=192)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje wprowadz znaki do tablicy...\n");
            int liczby,znaki;
            getchar();
            char tab[1];
            printf("Wprowadz ciag znakow: ");
            gets(tab);
            alpha_num(tab,&liczby,&znaki);
            printf("Ilosc znakow: %d\nIlosc cyfr: %d",znaki,liczby);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje wprowadz znaki do tablicy...\n");
            int liczby,znaki;
            getchar();
            char tab[1];
            printf("Wprowadz ciag znakow: ");
            gets(tab);
            alpha_num(tab,&liczby,&znaki);
            printf("Ilosc znakow: %d\nIlosc cyfr: %d",znaki,liczby);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp13()
{
    int min_count(int ar[], int n, int *count);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=207)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje podaj tablice liczb calkowitych...\n");
            printf("Podaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
             while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba,ilosc;
            printf("Wprowadz liczby do tablicy:\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            min_count(tab,rozmiar,&ilosc);
            printf("Ilosc wystapien liczby minimalnej to: %d\n",ilosc);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj tablice liczb calkowitych...\n");
            printf("Podaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
             while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc mniejszy od 0!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba,ilosc;
            printf("Wprowadz liczby do tablicy:\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            min_count(tab,rozmiar,&ilosc);
            printf("Ilosc wystapien liczby minimalnej to: %d\n",ilosc);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp14()
{
    int pierwiastki(float , float , float , float *, float *);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=219)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            float a,b,c,x1,x2;
            printf("Aby uruchomic funkcje podaj wspolczynniki (a,b,c) rownania kwadratowego: ");
            scanf("%f%f%f",&a,&b,&c);
            pierwiastki(a,b,c,&x1,&x2);
            printf("Otrzymane pierwiastki: %.2f %.2f\n",x1,x2);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje podaj wspolczynniki (a,b,c) rownania kwadratowego: ");
            float a,b,c,x1,x2;
            scanf("%f%f%f",&a,&b,&c);
            pierwiastki(a,b,c,&x1,&x2);
            printf("Otrzymane pierwiastki: %.2f %.2f\n",x1,x2);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp15()
{
    bool read(char str[], int *value);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
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
            printf("Aby uruchomic funkcje wystarczy wprowadzic dowolna liczbe...\n");
            char tab[] = "Wprowadz liczbe: ";
            int value;
            bool wynik;
            wynik = read(tab,&value);
            if(wynik == 1)
                printf("Pomyslnie wprowadzono liczbe: %d\n",value);
            else
                printf("Blad!");
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje wystarczy wprowadzic dowolna liczbe...\n");
            char tab[] = "Wprowadz liczbe: ";
            int value;
            bool wynik;
            wynik = read(tab,&value);
            if(wynik == 1)
                printf("Pomyslnie wprowadzono liczbe: %d\n",value);
            else
                printf("Blad!");
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp16()
{
    void wypisz(float *ar, int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=250)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice wartosci rzeczywistych...\n");
            int rozmiar;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float *tab = calloc(rozmiar,sizeof(*tab)),liczba;
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            printf("Otrzymana tablica: ");
            wypisz(tab,rozmiar);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice wartosci rzeczywistych...\n");
            int rozmiar;
            printf("Podaj rozmiar tablicy: ");
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float *tab = calloc(rozmiar,sizeof(*tab)),liczba;
            for(int i=0;i<rozmiar;i++)
            {
                printf("Wprowadz liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            printf("Otrzymana tablica: ");
            wypisz(tab,rozmiar);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp17()
{
    void wypelnijB(int A[], int B[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=256)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje utworz tablice liczb calkowitych...\n");
            printf("Podaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabA[rozmiar],liczba;
            int tabB[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tabA[i] = liczba;
            }
            wypelnijB(tabA,tabB,rozmiar);
            printf("\nWypelniona tablica B: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabB[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje utworz tablice liczb calkowitych...\n");
            printf("Podaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabA[rozmiar],liczba;
            int tabB[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tabA[i] = liczba;
            }
            wypelnijB(tabA,tabB,rozmiar);
            printf("\nWypelniona tablica B: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabB[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp18()
{
    void skaluj(float t[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=274)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            printf("Wpisz liczby do tablicy...\n");
            float liczba,tab[rozmiar];
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            skaluj(tab,rozmiar);
            printf("Przeskalowana tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%f ",tab[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            printf("Wpisz liczby do tablicy...\n");
            float liczba,tab[rozmiar];
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            skaluj(tab,rozmiar);
            printf("Przeskalowana tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%f ",tab[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp19()
{
    void zamien(int *a, int *b);
    void sortuj_babelkowo(int arr[],int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=296)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            sortuj_babelkowo(tab,rozmiar);
            printf("Posortowana tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tab[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tab[rozmiar],liczba;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tab[i] = liczba;
            }
            sortuj_babelkowo(tab,rozmiar);
            printf("Posortowana tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tab[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp20()
{
    void sort_by_selection(char **arr, int n);
    void swap_values(char **arr, int idx1, int idx2);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=308)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice napisow...\nPodaj ilosc napisow(wiecej niz 1): ");
            int ilosc;
            scanf("%d",&ilosc);
            while(ilosc<2)
            {
                printf("Ilosc elementow jest mniejsza lub rowna 1!\nPopraw dane: ");
                scanf("%d",&ilosc);
            }
            char **tab;
            tab = (char**)malloc(ilosc*sizeof(char*));
            getchar();
            for(int i=0;i<ilosc;i++)
            {
                char napis[100];
                printf("Wprowadz napis(max 100 znakow)#%d: ",i+1);
                fgets(napis,100,stdin);
                int dlugosc = strlen(napis)+1;
                tab[i] = (char*)malloc(dlugosc*sizeof(char));
                strcpy(tab[i],napis);
            }
            printf("Utworzona tablica napisow: ");
            for(int i=0;i<ilosc;i++)
                printf("%s ",tab[i]);
            sort_by_selection(tab,ilosc);
            printf("\nPosortowana tablica metoda sortowania przez wybor:\n");
            for(int i=0;i<ilosc;i++)
            {
                printf("%s\n",tab[i]);
                free(tab[i]);
            }
            free(tab);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice napisow...\nPodaj ilosc napisow(wiecej niz 1): ");
            int ilosc;
            scanf("%d",&ilosc);
            while(ilosc<2)
            {
                printf("Ilosc elementow jest mniejsza lub rowna 1!\nPopraw dane: ");
                scanf("%d",&ilosc);
            }
            char **tab;
            tab = (char**)malloc(ilosc*sizeof(char*));
            getchar();
            for(int i=0;i<ilosc;i++)
            {
                char napis[100];
                printf("Wprowadz napis(max 100 znakow)#%d: ",i+1);
                fgets(napis,100,stdin);
                int dlugosc = strlen(napis)+1;
                tab[i] = (char*)malloc(dlugosc*sizeof(char));
                strcpy(tab[i],napis);
            }
            printf("Utworzona tablica napisow: ");
            for(int i=0;i<ilosc;i++)
                printf("%s ",tab[i]);
            sort_by_selection(tab,ilosc);
            printf("\nPosortowana tablica metoda sortowania przez wybor:\n");
            for(int i=0;i<ilosc;i++)
            {
                printf("%s\n",tab[i]);
                free(tab[i]);
            }
            free(tab);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp21()
{
    int crop(float ar[], int n, float a, float b);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=329)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float tab[rozmiar],liczba,a,b;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            printf("Podaj przedzial liczbowy <a,b>: ");
            scanf("%f%f",&a,&b);
            printf("Liczba usunietych wartosci z tablicy: %d\n",crop(tab,rozmiar,a,b));
            printf("Tablica po modyfikacji: ");
            for(int i=0;i<rozmiar;i++)
                printf("%.3f ",tab[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb rzeczywistych...\nPodaj rozmiar tablicy: ");
            int rozmiar;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            float tab[rozmiar],liczba,a,b;
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%f",&liczba);
                tab[i] = liczba;
            }
            printf("Podaj przedzial liczbowy <a,b>: ");
            scanf("%f%f",&a,&b);
            printf("Liczba usunietych wartosci z tablicy: %d\n",crop(tab,rozmiar,a,b));
            printf("Tablica po modyfikacji: ");
            for(int i=0;i<rozmiar;i++)
                printf("%.3f ",tab[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp22()
{
    void removeRepeats(int in[], int out[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=348)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb naturalnych...\nPodaj rozmiar tablicy: ");
            int rozmiar,liczba;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabIn[rozmiar],tabOut[rozmiar];
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tabIn[i] = liczba;
            }
            removeRepeats(tabIn,tabOut,rozmiar);
            printf("Otrzymana tablica po usunieciu duplikatow: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabOut[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb naturalnych...\nPodaj rozmiar tablicy: ");
            int rozmiar,liczba;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabIn[rozmiar],tabOut[rozmiar];
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&liczba);
                tabIn[i] = liczba;
            }
            removeRepeats(tabIn,tabOut,rozmiar);
            printf("Otrzymana tablica po usunieciu duplikatow: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabOut[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}

void fpp23()
{
    void doubleEven(int in[], int out[], int n);
    char wybor;
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_funkcje_pp.c","r");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=369)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\nPodaj wielkosc tablicy: ");
            int rozmiar,liczba;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabIn[rozmiar],tabOut[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe#%d: ",i+1);
                scanf("%d",&liczba);
                tabIn[i] = liczba;
            }
            doubleEven(tabIn,tabOut,rozmiar);
            printf("Koncowa tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabOut[i]);
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            printf("Aby uruchomic funkcje stworz tablice liczb calkowitych...\nPodaj wielkosc tablicy: ");
            int rozmiar,liczba;
            scanf("%d",&rozmiar);
            while(rozmiar<0)
            {
                printf("Rozmiar tablicy nie moze byc ujemny!\nPopraw dane: ");
                scanf("%d",&rozmiar);
            }
            int tabIn[rozmiar],tabOut[rozmiar];
            printf("Wprowadz liczby do tablicy...\n");
            for(int i=0;i<rozmiar;i++)
            {
                printf("Podaj liczbe#%d: ",i+1);
                scanf("%d",&liczba);
                tabIn[i] = liczba;
            }
            doubleEven(tabIn,tabOut,rozmiar);
            printf("Koncowa tablica: ");
            for(int i=0;i<rozmiar;i++)
                printf("%d ",tabOut[i]);
            break;
        }
        else
        {
            printf("Nieprawidlowa wartosc!\n");
            getchar();
        }
    }
}
