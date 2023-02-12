#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

int pole(int b1, int b2, int b3)
{
    int wynik,obw,p;
    printf("Sprawdzanie czy mozna utworzyc trojkat z podanych bokow!\n");
    if(b1+b2>b3 && b1+b3>b2 && b2+b3>b1)
    {
        printf("Mozna utworzyc trojkat.\n");
        printf("Obliczanie pola trojkata...\n");
        obw = b1+b2+b3;
        p = obw/2;
        wynik = sqrt(p*(p-b1)*(p-b2)*(p-b3));
        printf("Pole trojkata wynosi: %d",wynik);
    }
    else
        printf("Nie mozna zbudowac trojkata.\n");
    return;
}

int maks(int x, int y, int z)
{
    if(x>y && x>z)
        printf("Najwieksza wartosc to x: %d",x);
    else if(y>x && y>z)
        printf("Najwieksza wartosc to y: %d",y);
    else
        printf("Najwieksza wartosc to z: %d",z);
}

long int suma1(int n)
{
    int sum=1,i;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
            sum -= i;
        else
            sum += i;
    }
    printf("Suma szeregu = %d",sum);
}

long int suma2(int min, int max)
{
    int sum=0;
    for(int i=min;i>=min && i<=max;i++)
    {
        if(i%3 == 0)
            sum += i;
        else
            continue;
    }
    printf("Suma liczb podzielnych przez 3 wynosi: %d",sum);
}

int wartoscMaks(int granica)
{
    int max=0,sum,liczba;
    do
    {
        printf("Wprowadz liczbe: ");
        scanf("%d",&liczba);
        sum += liczba;
        if(liczba>max)
            max = liczba;
    }while(sum<granica);
    printf("Maksymalna wprowadzona liczba to %d",max);
}

int minis(int t[], int n)
{
    int i,minimal,new_min;
    for(i=0;i<n;i++)
        printf("%4d",t[i]);
    printf("\n");
    minimal = t[0];
    for(i=1;i<n;i++)
    {
        if(t[i]<minimal)
        {
            new_min = t[i];
            minimal = t[i];
        }
        else
            continue;
    }
    printf("\n");
    printf("Element minimalny tej tablicy: %d\n",minimal);
}
//
int wystapienia(char *l, char znak)
{
    char wczytany_znak;
    int wystapienie=0;
    while(*l)
    {
        if(*l++ == znak)
            wystapienie+=1;
        else
            continue;
    }
    printf("Liczba wystapien %c wynosi: %d",znak,wystapienie);
}

void wzor_kwadratowy(int a, int b, int c)
{
    char znak = '+';
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: 0=0");
            else if(c<0)
                printf("Wzor rownania kwadratowego: %d=0",c);
            else
                printf("Wzor rownania kwadratowego: %d=0",c);
        }
        else if(b<0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx=0",b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx%d=0",b,c);
            else
                printf("Wzor rownania kwadratowego: %dx%c%d=0",b,znak,c);
        }
        else
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx=0",b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx%d=0",b,c);
            else
                printf("Wzor rownania kwadratowego: %dx%c%d=0",b,znak,c);
        }
    }
    else if(a<0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2=0",a);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%d=0",a,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%c%d=0",a,znak,c);
        }
        else if(b<0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%dx=0",a,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%dx%d=0",a,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%dx%c%d=0",a,b,znak,c);
        }
        else
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%c%dx=0",a,znak,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%c%dx%d=0",a,znak,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%c%dx%c%d=0",a,znak,b,znak,c);
        }
    }
    else
    {
        if(b==0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2=0",a);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%d=0",a,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%c%d=0",a,znak,c);
        }
        else if(b<0)
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%dx=0",a,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%dx%d=0",a,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%dx%c%d=0",a,b,znak,c);
        }
        else
        {
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%c%dx=0",a,znak,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%c%dx%d=0",a,znak,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%c%dx%c%d=0",a,znak,b,znak,c);
        }
    }
}

void dwojkowa_reprezentacja(int n)
{
    int r=0, n1=n, i=0;
    while(n1>0)
    {
        r++;
        n1 /= 2;
    }
    int dw[r];
    while(n>0)
    {
        dw[i] = n%2;
        i++;
        n /= 2;
    }
    printf("Dwojkowa reprezentacja: ");
    for(i=r-1; i>=0; i--)
        printf("%d", dw[i]);
}

int ktoraCwiartka(float x, float y)
{
    if(x>0 && y>0)
        printf("Cwiartka 1");
    if(x>0 && y<0)
        printf("Cwiartka 4");
    if(x<0 && y>0)
        printf("Cwiartka 2");
    if(x<0 && y<0)
        printf("Cwiartka 3");
    if(x==0 && y==0)
        printf("0");
}

float suma3(float x, int n)
{
    float szer_sum=0;
    szer_sum = x +1;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
            szer_sum -= (pow(x,i)-i);
        else
            szer_sum += (pow(x,i) + i);
    }
    printf("Suma szeregu: %.2f",szer_sum);
}

float suma4(float x, int n)
{
    float szer_sum=0;
    for(int i=1;i<n+1;i++)
    {
        if(i==1)
            szer_sum = x;
        else
            szer_sum += i*pow(x,i);
    }
    printf("Suma szeregu wynosi: %f",szer_sum);
}

float suma5(float x, float epsilon)
{
    float sum=0,skladnik;
    int i=2;
    sum = 1 + x;
    while(1)
    {
        skladnik = (pow(x,i))/i;
        if(skladnik<epsilon)
            break;
        else
        {
            sum += skladnik;
            i++;
        }
    }
    printf("Suma szeregu wynosi: %.2f",sum);
}

void czy_pierwsza(int liczba)
{
    int i;
    bool pierwsza = false;
    if(liczba>2)
    {
        for(i=2;i*i<=liczba;i++)
        {
            if(liczba%i==0)
                pierwsza = false;
            else
                pierwsza = true;
        }
        if(pierwsza == true)
            printf("Podana liczba jest pierwsza!\n");
        else
            printf("Podana liczba nie jest pierwsza!\n");
    }
    else
        printf("Podana liczba nie jest pierwsza!\n");
}

void wypisz_tab(int w, float t[w])
{
    printf("Otrzymana tablica: ");
    for(int i=0;i<w;i++)
        printf("%4.2f ",t[i]);
}

int zlicz(int t[], int n)
{
    int i, j, tmp;
    //porzadkowanie rosnaco
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(t[j]<t[j-1])
            {
                tmp = t[j];
                t[j] = t[j-1];
                t[j-1] = tmp;
            }
        }
    }
    printf("wypisanie elementow tablicy\n");
    for(i=0; i<n; i++)
        printf("%4d", t[i]);
    printf("\n");

    int licznik = 1;
    for(i=1; i<n; i++)
    {
        if(t[i-1] == t[i])
            licznik++;
        else
        {
            printf("%d - %d razy\n", t[i-1], licznik);
            licznik = 1;
        }
    }
    printf("%d - %d razy\n", t[i-1], licznik);
}

void odwroc(char str[])
{
    int dlugosc=strlen(str);
    char new_str[dlugosc];
    int i,j;
    for(i=0,j=dlugosc-1;i<dlugosc && j>=0;i++,j--)
        new_str[j] = str[i];
    printf("Odwrocony napis: ");
    for(i=0;i<strlen(str);i++)
        printf("%c",new_str[i]);

}

int liczba_slow(char *lancuch)
{
    int slowo=0;
    char znak;
    while(*lancuch)
    {
        znak = *lancuch++;
        if(isspace(znak))
            slowo+=1;
        else
            continue;
    }
    printf("Liczba slow wynosi %d",slowo+1);
}

int czy_ciag(char *ciag_1, char *ciag_2, int k, int n)
{
    int i, j;
    for (i = 0; i <= n - k; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (ciag_1[j] != ciag_2[i + j])
                break;
        }
        if(j == k)
            return 1;
    }
    return 0;
}
