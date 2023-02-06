#include <stdio.h>
#include <stdbool.h>

void fpp1()
{
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
                if(l>=3)
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
                if(l>=13)
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
            int min,max,licznik_max,licznik_min;
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