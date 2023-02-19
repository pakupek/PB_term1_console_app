#include <stdio.h>
#include <stdlib.h>

int* z8_1(int n)
{
    int *t = malloc(n*sizeof(*t));
    srand(time(NULL));
    if(t==NULL)
        return NULL;
    for(int i=0; i<n; i++)
        t[i] = rand()%10+1;
    return t;
}

char* z8_3(char *s1, char *s2)
{
    int d1 = strlen(s1), d2 = strlen(s2);
    char *nowy = calloc(d1+d2+1, sizeof(*nowy));
    for(int i=0; i<d1; i++)
        nowy[i] = s1[i];
    for(int i=0; i<d2; i++)
        nowy[d1+i] = s2[i];
    nowy[d1+d2] = '\0';
    return nowy;
}

int* z8_4(int *t, int n, int m)
{
    int *nowa = calloc(m, sizeof(*nowa));
    if(n>m)
        n = m;
    for(int i=0; i<n; i++)
        nowa[i] = t[i];
    free(t);
    return nowa;
}

int* z8_4v2(int *t, int n, int m)
{
    t = realloc(t, m*sizeof(*t));
    for(int i=n; i<m; i++)
        t[i] = 0;
    return t;
}

int* z8_5(int **t,int n, int m)
{
    int wiersz = (n*m);
    int *nowa = calloc(wiersz,sizeof(*nowa));
    int i=0,j=0,k=0;



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            nowa[k] = t[i][j];
            k++;
        }
    }
    return nowa;

}

int* macierz(int n, int m)
{
    int **tab;
    srand(time(NULL));
    tab = malloc(n*sizeof(*tab));
    for(int i=0;i<n;i++)
        tab[i] = malloc(m*sizeof(tab[i]));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            tab[i][j] = rand()%10+1;
    }
    return tab;
}


void wypisz1(int *t, int n)
{
    for(int i=0; i<n; i++)
        printf("%4d", t[i]);
    printf("\n");
}

void wypisz_macierz(int **t,int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%4d",t[i][j]);
        printf("\n");
    }
}


int** z8_6(int *tab,int d, int n, int m)
{
    int **nowa,k=0;
    nowa = malloc(n*sizeof(*nowa));
    for(int i=0;i<n;i++)
        nowa[i] = malloc(m*sizeof(nowa[i]));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            nowa[i][j] = tab[k];
            k++;
        }
    }
    return nowa;
}

int* z8_7(int *t,int idx0, int idx1)
{
    int  ilosc = (idx1 - idx0)+1;
    int k=0;
    printf("Ilosc elementow: %d",ilosc);
    int *nowa = malloc(ilosc*sizeof(*nowa));

    for(int i=idx0;i<=idx1;i++)
    {
        nowa[k] = t[i];
        k++;
    }
    return nowa;
}

int* z8_8(int *t, int n, int a, int b,int* il)
{
    int ilosc=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(t[i]<=b && t[i]>=a)
            ilosc += 1;
    }

    *il = ilosc;
    int *nowa = malloc(ilosc * sizeof(*nowa));

    for(int i=0;i<n;i++)
    {
        if(t[i]<=b && t[i]>=a)
        {
            nowa[k] = t[i];
            k++;
        }
    }
    return nowa;
}

int* z8_9(int *tab, int dl, int idx, int wartosc)
{
    int licznik=0;
    int *nowa = calloc(dl,sizeof(*nowa));
    nowa = realloc(nowa,1*sizeof(*nowa));



    for(int i=0;i<dl;i++)
    {
        if(i<idx)
            nowa[i] = tab[i];

        if(i==idx)
        {
            nowa[i] = wartosc;
            nowa[i+1] = tab[i];
        }
        if(i>idx)
            nowa[i+1] = tab[i];
    }

    return nowa;
}
