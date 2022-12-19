int add(int x, int y);
int pole(int b1,int b2,int b3);
int maks(int x, int y, int z);
long int suma1(int n);
long int suma2(int minimum, int maximum);
int wartoscMaks(int granica);
int minis(int t[],int n);
int liczba_wystapien(char *l, char znak, int *wystapienie);
void wzor_kwadratowy(int a, int b, int c);
void dwojkowa_reprezentacja(int n);
int ktoraCwiartka(float x, float y);
float suma3(float x, int n);
float suma4(float x, int n);
float suma5(float x, float epsilon);
void czy_pierwsza(int liczba);
void wypisz_tab(float *t);
int zlicz(int t[], int n);
void odwroc(char str[]);
int liczba_slow(char *lancuch);

/*
void ramka(int wysokosc,int szerokosc)
{
    int j,k;
    for(j=0;j<wysokosc;j++)
    {
        for(k=0;k<szerokosc;k++)
        {
            if(k==0 || k == szerokosc)
            {
                printf("*");
            }

            else
            {
                continue;
            }
        }
        printf("\n");
    }
}
*/
/*Zadanie 5.2: Napisz funkcje, ktora zwroci pole trojkata. Długosci bokow trojkata przekaz jako parametry funkcji.(dziala)
int pole(int b1, int b2, int b3)
{
    int pole,obw,p;
    if(b1+b2>b3 && b1+b3>b2 && b2+b3>b1)
    {
        printf("Mozna utworzyc trojkat.\n");
        obw = b1+b2+b3;
        p = obw/2;
        pole = sqrt(p*(p-b1)*(p-b2)*(p-b3));
        printf("Pole trojkata wynosi: %d",pole);
    }
    else
    {
        printf("Nie mozna zbudowac trojkata.\n");
    }
}
*/

/*Zadanie 5.3: Napisz funkcje int maks(int x, int y, int z), zwracajaca wartosc maksymalna sposrod jej argumentow. (dziala)
int maks(int x, int y, int z)
{
    if(x>y && x>z)
    {
        printf("Wartosc x: %d",x);
    }
    else if(y>x && y>z)
    {
        printf("Wartosc y: %d",y);
    }
    else
    {
        printf("Wartosc z: %d",z);
    }
}*/

/*Zadanie 5.4: Napisz funkcje long int suma(int n), ktora wyznaczy sume szeregu: 1-2+3-...±n. (dziala)
long int suma(int n)
{
    int sum=1,i;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            sum -= i;
            printf("Suma = %d\n",sum);
        }
        else
        {
            sum += i;
            printf("Suma = %d\n",sum);
        }
    }
    printf("Suma szeregu = %d",sum);
}*/

/*Zadanie 5.5: Napisz funkcje long int suma(int min, int max), ktora obliczy sume liczb podzielnych przez 3
mieszczacych sie w przedziale <min, max>. (dziala)
long int suma(int min, int max)
{
    int sum,i;
    for(i=0;i>=min && i<=max;i++)
    {
        if(i%3 == 0)
        {
            sum += i;
        }
        else if(i%3==1)
        {
            continue;
        }
    }
    printf("Suma liczb podielnych przez 3 wynosi: %d",sum);
}*/

/*Zadanie 5.6: Napisz funkcje int wartoscMaks(int granica) ktora znajdzie najwieksza liczbe całkowita n taka,
ze 1 + 2 + ... + n < granica. (dziala)

int wartoscMaks(int granica)
{
    int max=0,sum,liczba,tmp=0,new_tmp;
    do
    {
        printf("Wprowadz liczbe: ");
        scanf("%d",&liczba);
        sum += liczba;
        tmp = liczba;
        if(tmp>new_tmp)
        {
            max = tmp;
            new_tmp = tmp;
        }
        else
        {
            continue;
        }

    }while(sum<granica);
    printf("Maksymalna wprowadzona liczba to %d",max);
}*/

/*Zadanie 5.7: Napisz funkcje int min(int t[], int n), ktora dla tablicy o wymiarze n danej jako parametr
zwroci wartosc elementu minimalnego. (dziala)

int min(int t[], int n)
{
    int i,minimal,new_min;

    for(i=0;i<n;i++)
    {
        printf("%4d",t[i]);
    }
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
    printf("New min: %d\n",minimal);
}*/

/*Zadanie 5.8: Napisz funkcje, ktora obliczy liczbe wystąpien danego znaku w lancuchu.Lancuch oraz znak przekaz jako parametry funkcji.(dziala)
    int liczba_wystapien(char *l, char znak, int *wystapienie)
    {
    char wczytany_znak;
    while(*l)
    {
        wczytany_znak = *l++;
        printf("Wczytany znak: %c\n",wczytany_znak);
        if(wczytany_znak == znak)
        {
            *wystapienie+=1;
        }
        else
            continue;
    }
}*/

/*Zadanie 5.9: Napisz funkcje, ktora wyswietla wzor rownania kwadratowego (np. x^2+2x-3=0) dla zadanych wartosci wspolczynnikow a, b oraz c.
Uwzglednij rozne wartosci oraz znaki wspolczynnikow (aby np. nie wyświetlac 0x^2+-1x+0=0). (dziala)

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
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx=0",b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx%d=0",b,c);
            else
                printf("Wzor rownania kwadratowego: %dx%c%d=0",b,znak,c);
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
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%dx=0",a,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%dx%d=0",a,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%dx%c%d=0",a,b,znak,c);
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
            if(c==0)
                printf("Wzor rownania kwadratowego: %dx^2%dx=0",a,b);
            else if(c<0)
                printf("Wzor rownania kwadratowego: %dx^2%dx%d=0",a,b,c);
            else
                printf("Wzor rownania kwadratowego: %dx^2%dx%c%d=0",a,b,znak,c);
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
*/

/*Zadanie 5.10: Napisz funkcje, ktora wyswietli na ekranie dwojkowa reprezentacje liczby calkowitej danej jako parametr.(dziala)

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
    for(i=r-1; i>=0; i--)
        printf("%d", dw[i]);
}
*/

/*Zadanie 5.11: Napisz funkcje int ktoraCwiartka(float x, float y) ktora dla punktu o wspolrzednych (x, y)
zwroci wartosc 1, 2, 3 lub 4, identyfikujaca jedna z cwiartek ukladu wspolrzednych wewnatrz ktorej lezy ten punkt.
W przypadku, gdy punkt lezy na ktorejkolwiek osi wspolrzednych funkcja powinna zwrocic 0. (dziala)

int ktoraCwiartka(float x, float y)
{
    if(x>0 && y>0)
        printf("1");
    else if(x>0 && y<0)
        printf("4");
    else if(x<0 && y>0)
        printf("2");
    else if(x<0 && y<0)
        printf("3");
    else if(x==0 && y==0)
        printf("0");
}
*/

/*Zadanie 5.12: Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: (x+1)-(x2-2)+(x3+3)-...±(xn±n).(dziala)

float suma(float x, int n)
{
    float szer_sum;
    int i;
    for(i=1;i<n;i++)
    {
        if(i%2==0)
            szer_sum -= (pow(x,i)-i);
        else
            szer_sum += (pow(x,i) + i);
    }
    printf("Suma szeregu: %.2f",szer_sum);
}
*/

/*Zadanie 5.13: Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: x+2x2+3x3+...+nxn. (dziala)

float suma(float x, int n)
{
    float szer_sum=0;
    int i;

    //printf("%.2f\n",szer_sum);
    for(i=1;i<n+1;i++)
    {
        if(i==1)
        {
            szer_sum = x;
        }
        else
        {
            szer_sum += i*pow(x,i);
            printf("%.2f\n",szer_sum);
        }
    }
    printf("Suma szeregu wynosi: %f",szer_sum);
}
*/

/*Zadanie 5.14: Napisz funkcje float suma(float x, float epsilon), ktora dla x z przedzialu (0, 1) wyznaczy sume szeregu:
1 + x + x2/2 + ... + xi/i. Sumowanie przerwij jezeli kolejny skladnik bedzie mniejszy od zadanej dokladnosci epsilon.(dziala)

float suma(float x, float epsilon)
{
    float sum=0,skladnik;
    int i=2;
    sum = 1 + x;
    while(1)
    {
        skladnik = (pow(x,i))/i;
        printf("%.2f\n",skladnik);
        if(skladnik<epsilon)
        {
            break;
        }
        else
        {
            sum += skladnik;
            i++;
        }
    }
    printf("Suma szeregu wynosi: %.2f",sum);
}
*/

/*Zadanie 5.15: Napisz funkcje sprawdzajaca, czy jej argument jest liczba pierwsza. (dziala)

void czy_pierwsza(int liczba)
{
    int i;
    if(liczba>2)
    {
        for(i=2;i*i<=liczba;i++)
        {
            if(liczba%i==0)
                printf("Podana liczba nie jest pierwsza!");
            else
                printf("Podana liczba jest pierwsza!");
        }
    }
    else
        printf("Podana liczba nie jest pierwsza!");
}
*/

/*Zadanie 5.16: Napisz funkcje, ktora wypisze na ekranie zawartosc danej jako parametr
jednowymiarowej tablicy liczb rzeczywistych. (dziala)

void wypisz_tab(float *t)
{
    while(*t)
        printf("%.2f\n",*t++);
}
*/

/*Zadanie 5.17: Napisz funkcje, ktora zliczy i wypisze liczbe wystąpien elementow tablicy o rozmiarze N.(dziala)

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


    //wypisanie elementow tablicy
    for(i=0; i<n; i++)
        printf("%4d", t[i]);
    printf("\n");

    int licznik = 1;
    for(i=1; i<n; i++)
    {
        if(t[i-1] == t[i])
        {
            licznik++;
        }
        else
        {
            printf("%d - %d razy\n", t[i-1], licznik);
            licznik = 1;
        }
    }
    printf("%d - %d razy\n", t[i-1], licznik);
}
*/

/*Zadanie 5.18: Napisz funkcje, ktora bedzie odwracala kolejnosc znakow w przekazanym jej napisie.
Po jej wykonaniu ostatni znak napisu bedzie pierwszym, przedostatni drugim, itd. (dziala)

void odwroc(char str[])
{
    int dlugosc=strlen(str);
    char new_str[dlugosc];
    int i,j;
    for(i=0,j=dlugosc-1;i<dlugosc && j>=0;i++,j--)
    {
        new_str[j] = str[i];
    }

    for(i=0;i<strlen(str);i++)
        printf("%c\n",new_str[i]);
    printf("\n");
}
*/

/*Zadanie 5.19: Napisz funkcje, ktora wyznaczy liczbe slow w danym jako parametr lancuchu.
Slowo definiujemy jako ciag znakow oddzielony bialym znakiem lub znakiem przestankowym.(dziala)

int liczba_slow(char *lancuch)
{
    int slowo=0;
    char znak;
    while(*lancuch)
    {
        znak = *lancuch++;
        printf("%c\n",znak);
        if(isspace(znak))
        {
            printf("Pusty znak: %c\n",znak);
            slowo+=1;
        }
        else
            continue;
    }
    printf("Liczba slow wynosi %d",slowo+1);
}
*/

/*Zadanie 5.20: Napisz funkcje, ktora sprawdzi, czy k-elementowy ciag znakow jest podciagiem drugiego n-elementowego ciagu.
Obydwa ciagi znakow przekaz jako parametry funkcji.

char max(char ciag_1, char ciag_2)
{
    if(ciag_1 > ciag_2)
        return ciag_1;
    else
        return ciag_2;
}



void czy_ciag( char *ciag_1, char *ciag_2)
{
    int n=strlen(ciag_1),m=strlen(ciag_2),i,j;
    char wynik[i][j];
    for(i=0,j=0;i<n && j<n;i++,j++)
    {
        if(ciag_1[i] == ciag_2[j])
        {
            wynik[i][j] = ciag_1[i];
            printf("%c\n",wynik[i][j]);
        }

    }
    for(i=0,j=0;i<n && j<m;i++,j++)
    {
        printf("%4c\n",wynik[i][j]);
    }
}
*/



    //ramka(3,5);
    //pole(32,11,5);
    //maks(7,5,1);
    //suma(6);
    //suma(0,15);
    //wartoscMaks(50);

    /*Zadanie 5.7(dziala):
    int tablica[5] = {2,6,-5,8,0},n=5;
    min(tablica,n);
    */

    /*Zadanie 5.8:(dziala)
    char *l = "Ala miala kotka";
    char znak='A';
    int wystapienie=0;
    liczba_wystapien(l,znak,&wystapienie);
    printf("Liczba wystapien znaku %c wynosi: %d",znak,wystapienie);
    */

    /*Zadanie 5.9:(dziala)
    int a=0,b=-1,c=0;
    wzor_kwadratowy(a,b,c);
    */

    /*Zadanie 5.10:(dziala)
    dwojkowa_reprezentacja(13);
    */

    /*Zadanie 5.11:(dziala)
    ktoraCwiartka(-33,-3);
    */

    /*Zadanie 5.12:(dziala)
    suma(2,5);
    */

    /*Zadanie 5.13:(dziala)
    suma(2,4);
    */

    /*Zadanie 5.14: (dziala)
    suma(0.9,0.32);
    */

    /*Zadanie 5.15: (dziala)
    czy_pierwsza(6);
    */

    /*Zadanie 5.16:(dziala)
    float t[] = {3.12,4,1,1.5,6};
    wypisz_tab(t);
    */

    /*Zadanie 5.17: (dziala)
    int t[] = {1,3,4,6,1,1,8,9,6,4}, n = 10;
    zlicz(t,n);
    */

    /*Zadanie 5.18: (dziala)
    char *str = "Amadeusz";
    odwroc(str);
    */

    /*Zadanie 5.19: (dziala)
    char *lancuch = "Ala nie ma kota";
    liczba_slow(lancuch);
    */
    /*
    char ciag_1 = "politechnika";
    char ciag_2 = "toaleta";
    czy_ciag(ciag_1,ciag_2);

    return 0;
    */

