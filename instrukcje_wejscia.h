#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CENT_TO_CAL 0.393700787
#define CAL_TO_CENT 2.54

int main()
{
    /* Zadanie 1.1: Napisz program, ktory wyznacza srednia arytmetyczna dwoch liczb.*/
    int x,y;
    float suma;
    printf("Podaj x i y:");
    scanf("%d%d", &x, &y);
    suma = (x+y)/2.0;
    printf("Srednia %d i %d wynosi %.2f", x,y,suma);
    return 0;



    /* Zadanie 1.2: Napisz program, ktory wczyta dlugosci bokow prostokata, a nastepnie obliczy jego pole i obwod.
    float a,b,pole,obwod;
    printf("Podaj boki prostokata: ");
    scanf("%f%f", &a,&b);
    if(a>0 && b>0)
    {
        pole = a*b;
        obwod = 2*a+2*b;
        printf("Pole jest r��wne %f a obw��d %f", pole,obwod);
        return 0;
    }
    else
    {
        printf("Niepoprawne dane");
        return 0;
    }
    */

    /* Zadanie 1.3: Napisz program, ktory sprawdza, czy z trzech odcinkow podanych przez uzytkownika da sie zbudowac trojkat.
    float a,b,c;
    printf("Podaj boki trojkata: ");
    scanf("%f%f%f", &a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            printf("Mozna utworzyc taki trojkat");
            return 0;
        }
        else
        {
            printf("Nie mozna utworzyc takiego trojkata");
            return 0;
        }
    }
    else
    {
        printf("Bledne dane");
        return 0;
    }
    */

    /* Zadanie 1.4: Napisz program, ktory wczyta z klawiatury 3 liczby rzeczywiste, a nastepnie wyswietli je w porzadku rosnacym.
    int i, pomocnicza, czyposortowane = 0;
    float tab[4];
    float l1,l2,l3;
    printf("Podaj 3 liczby rzeczywiste: \n");
    for(i=0; i<3; i++)
    {
        scanf("%f\n", &tab[i]);
    }
    printf("Tablica liczb przed sortowaniem:\n");
    for(i=0;i<3;i++)
    {
        printf("Element %d wynosi %.2f\n", i, tab[i]);
    }
    do
    {
        czyposortowane = 0;
        for(i=0;i<3;i++)
        {
            if(tab[i]>tab[i+1])
            {
                pomocnicza = 1.0*tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = pomocnicza;
                czyposortowane = 1;
            }
        }
    }
    while(czyposortowane != 0);
    printf("Tablica po posortowaniu:\n");
    for(i=0;i<4;i++)
    {
        printf("Element %d wynosi %.2f\n", i, tab[i]);
    }
    return 0;
    */


    /* Zadanie 1.5: Napisz program, ktory wczyta z klawiatury wspolrzedne trzech punktow, a nastepnie sprawdzi, czy sa one wspolliniowe.
    float xa,ya,xb,yb,xc,yc,param1,param2;
    printf("Podaj wspolrzedne punktow (a,b,c):\n");
    scanf("%f%f%f%f%f%f", &xa,&ya,&xb,&yb,&xc,&yc);
    param1 = ((ya-yb)/(xa-xb));
    param2 = ((ya-yc)/(xa-xc));
    if(param1 == param2)
    {
        printf("Podane punkty sa wspollinione");
        return 0;
    }
    else
    {
        printf("Podane punkty nie sa wspolliniowe");
        return 0;
    }
    */

    /* Zadanie 1.6: Napisz program, ktory rozwiazuje nierownosc |ax+b|<c. Wartosci a, b, i c pobierane sa w trakcie dzialania programu.
    float a,b,c, przypadek1,przypadek2,x1,x2,x;
    printf("Podaj wartosci a,b,c:\n");
    scanf("%f%f%f", &a,&b,&c);
    x1 = (c - b)/ a;
    x2 = (- c - b)/a;
    przypadek1 = x1;
    przypadek2 = x2;
    printf("Jezeli x >= 0 to x > %.2f\n Jezeli x < 0 to x < %.2f", przypadek1, przypadek2);
    return 0;
    */

    /* Zadanie 1.7: Napisz program, ktory wczyta od uzytkownika dlugosc promienia, a nastepnie wyswietli dlugosc odwodu i pole kola.
    float promien, obw, pole, pi=3.14, potega=2;
    printf("Podaj dlugosc promienia okregu: \n");
    scanf("%f", &promien);
    if(promien > 0)
    {
        obw = 2 * pi * promien;
        pole = pi * pow(promien,potega);
        printf("Obwod kola: %.2f\n Pole kola: %.2f", obw,pole);
        return 0;
    }
    else
    {
        printf("Bledne dane!");
        return 0;
    }
    */

    /*Zadanie 1.8: Napisz program, ktory wyswietli wartosc bezwzgledna podanej przez uzytkownika liczby.
    float liczba, wynik;
    printf("Podaj liczbe: ");
    scanf("%f", &liczba);
    wynik = abs(liczba);
    printf("Wartosc bezwzgledna liczby %.2f wynosi: %.2f", liczba, wynik);
    return 0;
    */

    /*Zadanie 1.9: Napisz program, ktory wczyta dwie liczby rzeczywiste i wyswietli na ekranie ich sume, roznice oraz iloczyn.
    float l1,l2,sum,roz,iloczyn;
    printf("Podaj dwie liczby rzeczywiste: \n");
    scanf("%f%f", &l1,&l2);
    if(l2 > 0)
    {
        sum = l1+l2;
        roz = l1-l2;
        iloczyn = l1*l2;
        printf("Suma: %.2f \n Roznica: %.2f \n Iloczyn: %.2f", sum, roz, iloczyn);
        return 0;
    }
    else
    {
        sum = l1 - l2;
        roz = l1 + l2;
        iloczyn = l1*l2;
        printf("Suma: %.2f \n Roznica: %.2f \n Iloczyn: %.2f", sum, roz, iloczyn);
        return 0;
    }
    */

    /*Zadanie 1.10: Napisz program,ktory po podaniu odleglosci w centymetrach (liczba calkowita) wypisze te odleglosc w metrach, decymetrach i centymetrach.
Przyklad: 123 cm to 1 metr, 2 decymetry i 3 centymetry.
    int odleglosc, metr, decymetr, centymetr;
    printf("Podaj odleglosc: \n");
    scanf("%d", &odleglosc);
    if(odleglosc > 0)
    {

    }
    */

    /*Zadanie 1.11: Napisac kod programu, ktory klasyfikuje osoby wedlug wzrostu.
    Jezeli osoba ma mniej niz 150cm wzrostu program wyswietla komunikat "niska", jezeli wiecej niz 180cm - "wysoka", w pozostalym przypadku - "Srednia".
    Wzrost osoby program pobiera w trakcie dzialania.
    float wzrost;
    printf("Podaj wzrost w centymetrach: \n");
    scanf("%f",&wzrost);
    if(wzrost>0)
    {
        if(wzrost<150)
        {
            printf("Osoba o wzroscie %.2f(cm) jest niska\n", wzrost);
            return 0;
        }
        else if(wzrost>180)
        {
            printf("Osoba o wzroscie %.2f(cm) jest wysoka\n", wzrost);
            return 0;
        }
        else
        {
            printf("Osoba o wzroscie %.2f(cm) jest srednia", wzrost);
            return 0;
        }
    }
    else
    {
        printf("Osoba nie moze miec takiego wzrostu! ");
        return 0;
    }
    */

    /*Zadanie 1.12: Napisz program, ktory wczytuje Twoja mase (podana w kg) i wzrost (podany w cm) i na tej podstawie wylicza i wypisuje BMI.
    Jezeli wyliczona wartosc jest mniejsza niz 18.5, program powinien wypisac komunikat: "jestes za chudy".
    Jezeli wyliczona wartosc jest wieksza niz 25, program powinien wypisac komunikat "jestes za gruby".
    float waga,wzrost,BMI,wzrostm;
    int potega = 2;
    printf("Podaj mase ciala (w kg) oraz wzrost (w cm):\n");
    scanf("%f%f", &waga, &wzrost);
    if(waga > 0 && wzrost > 0)
    {
        wzrostm = wzrost / 100.0;
        BMI = waga / pow(wzrostm,potega);
        if(BMI < 18.5)
        {
            printf("BMI wynosi: %.2f \nJestes za chudy! \n", BMI);
            return 0;
        }
        else if(BMI > 25)
        {
            printf("BMI wynosi: %.2f \nJestes za gruby! \n", BMI);
            return 0;
        }
        else
        {
            printf("BMI wynosi: %.2f \n Jest w porzadku! \n", BMI);
            return 0;
        }
    }
    else
    {
        printf("Popraw dane! ");
        return 0;
    }
    */

    /*Zadanie 1.13: Napisz program, ktory wczyta cztery liczby rzeczywiste, a nasteppnie wyswietli informacje ile z nich jest mniejszych od 0.
    float tabl[4],tabm[4], tabw[4], liczba;
    int iloscm, i,iloscw;
    printf("Podaj 4 liczby rzeczywiste:\n");
    for(i=0;i<4;i++)
    {
        scanf("%f", &tabl[i]);
    }
    for(i=0;i<5;i++)
    {
        liczba = tabl[i];
        if(liczba<0)
        {
            tabm[i] += liczba;
            iloscm += (sizeof(tabm)/ sizeof(tabm[0]))/4;
        }
        else
        {
            tabw[i] += liczba;
            iloscw = (sizeof(tabw) / sizeof(tabw[0]))/4;
        }
    }
    printf("Ilosc liczb mniejszych od zera jest: %d\nIlosc liczb wiekszych od zera jest: %d", iloscm,iloscw);
    return 0;
    */

    /*Zadanie 1.14: Napisz program, ktory wczyta od uzytkownika dlugosc promienia,
    a nastepnie w zaleznosci od wyboru uzytkownika wyswietli dlugosc obwodu lub pole koła.

    float promien,obwod,pole,pi=3.14;
    char wybor;
    int potega=2;
    printf("Podaj dlugosc promienia:\n");
    scanf("%f", &promien);
    if(promien>0)
    {
        printf("Wyswietlic obwod czy pole kola (O/P): ");
        scanf("%s", &wybor);
        if(wybor == 'O' || wybor == 'o')
        {
            obwod = 2*pi*promien;
            printf("Obwod kola wynosi: %.2f", obwod);
            return 0;
        }
        else if(wybor == 'P' || wybor == 'p')
        {
            pole = pi*pow(promien,potega);
            printf("Pole kola wynosi: %.2f", pole);
            return 0;
        }
        else
        {
            printf("Nieprawidlowy wybor!");
            return 0;
        }
    }
    else
    {
        printf("Promien nie moze byc ujemny!");
        return 0;
    }
    */

    /*Zadanie 1.15: Napisz program, ktory w zalenosci od wyboru uzytkownika bedzie dokonywal przeliczenia z
    centymetrow na cale i odwrotnie. Przeliczniki miedzy jednostkami zdefiniuj przy pomocy dyrektywy #define.
    float cent,cal,wynik;
    int wybor;
    printf("Przelicznik z centymetrow czy cali (1-centymetry na cale/2-cale na centymetry)? ");
    scanf("%d", &wybor);
    if(wybor == 1)
    {
        printf("Podaj centymetry: ");
        scanf("%f", &cent);
        wynik = cent * CENT_TO_CAL;
        printf("Przelicznik z %f na cale wynosi: %f", cent, wynik);
        return 0;
    }
    else if(wybor == 2)
    {
        printf("Podaj cale: ");
        scanf("%f", &cal);
        wynik = cal * CAL_TO_CENT;
        printf("Przelicznik z %f na centymetry wynosi: %f", cal, wynik);
        return 0;
    }
    else
    {
        printf("Nieprawidlowy wybor!");
        return 0;
    }
    */

    /*Zadanie 1.16: Napisz program rozwiazujacy rownanie postaci ax2+bx+c=0.
    Nalezy rozpatrzyc wszystkie przypadki (rownanie nie musi byc rownaniem kwadratowym).
    float wynik1,wynik2,delta,a,b,c,delta_pierw,licznik,mianownik;
    int potega=2;
    printf("Program rozwiazujacy rownanie postaci ax2+bx+c=0\n");
    printf("Podaj wspolczynniki a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    delta = pow(b,potega) - 4*a*c;
    if(a != 0)
    {
        if(delta>0)
        {
            delta_pierw = pow(delta,(1.0/2.0));
            printf("Pierwiastek z delty %.2f\n", delta_pierw);
            licznik = -b - delta_pierw;
            mianownik = 2.0*a;
            wynik1 = licznik/mianownik;
            wynik2 = ((-b)+delta_pierw)/mianownik;
            printf("Istnieja dwa rozwiazania x1: %.2f i x2: %.2f", wynik1, wynik2);
            return 0;
        }
        else if(delta == 0)
        {
            wynik1 = (-b)/2*a;
            printf("Istnieje jedno rozwiazanie x1: %f", wynik1);
            return 0;
        }
        else
        {
            printf("Nie istnieje rozwiazanie");
            return 0;
        }
    }
    else
    {
        printf("Podane rownanie nie jest kwadratowe");
        return 0;
    }
    */

    /*Zadanie 1.17: Napisz program, ktory sprawdzi, przez ktore cwiartki ukladu wspolrzednych przechodzi prosta o
    rownaniu y=ax+b. Wspolczynniki a i b wczytaj od uzytkownika.

    float a,b,prosta;
    printf("Podaj wspolczynniki a i b: \n");
    scanf("%f%f", &a,&b);
    if(a==0)
    {
        if(b<0)
        {
            printf("Prosta o rownaniu y=%.2f przechodzi przez 3 i 4 cwiartke\n",b);
            return 0;
        }
        else if(b == 0)
        {
            printf("Prosta o rownaniu y=0 pokrywa sie z osia x\n");
            return 0;
        }
        else
        {
            printf("Prosta o rownaniu y=%.2f przechodzi przez 1 i 2 cwiartke\n",b);
            return 0;
        }
    }
    else if(a<0)
    {
        if(b==0)
        {
            printf("Prosta o rownaniu y=%.2fx przechodzi przez 2 i 4 cwiartke\n", a);
            return 0;
        }
        else if(b<0)
        {
            printf("Prosta o rownaniu y=%.2fx%.2f przechodzi przez 2,3 i 4 cwiartke\n",a,b);
            return 0;

        }
        else
        {
            printf("Prosta o rownaniu y=%.2fx+%.2f przechodzi przez 1,2 i 4 cwiartke\n",a,b);
            return 0;

        }
    }
    else
    {
        if(b<0)
        {
            printf("Prosta o rownaniu y=%.2fx%.2f przechodzi przez 1,3 i 4 cwiartke\n",a,b);
            return 0;

        }
        else if(b==0)
        {
            printf("Prosta o rownaniu y=%.2fx przechodzi przez 1 i 3 cwiartke\n",a);
            return 0;
        }
        else
        {
            printf("Prosta o rownaniu y=%.2fx+%.2f przechodzi przez 1,2 i 3 cwiartke\n",a,b);
            return 0;
        }
    }
    */
    /*Zadanie 1.18: Napisz program, ktory wczyta od uzytkownika dlugosci bokow trojkata oraz sprawdzi,
    jaki trojkat mozna z nich zbudowac (rownoboczny, rownoramienny, prostokatny, roznoboczny).
    float a,b,c;
    int potega=2;
    printf("Program sprawdza jaki trojkat mozna zbudowac z podanych przez uzytkownika bokow\n");
    printf("Podaj dlugosci bokow trojkata:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a<0 || b<0 || c<0)
    {
        printf("Dlugosc boku nie moze byc ujemna!");
        return 0;
    }
    else
    {
        //powstanie trojkata
        if(a<b+c && b<a+c && c<a+b)
        {
            //roznoboczny
            if(a != b && a != c && b != c)
            {
                printf("Z bokow %.2f %.2f %.2f mozna zbudowac trojkat roznoboczny\n",a,b,c);
                return 0;
            }
            //rownoboczny
            else if(a==b && a==c && b==c)
            {
                printf("Z bokow %.2f %.2f %.2f mozna zbudowac trojkat rownoboczny\n");
                return 0;
            }
            //rownoramienny
            else if(a==b || b==c || c==a)
            {
                if(2*a>c || 2*b>a || 2*c>b)
                {
                    printf("Z bokow %.2f %.2f %.2f mozna zbudowac trojkat rownoramienny\n", a,b,c);
                    return 0;
                }
            }
            //prostokatny
            else if(pow(a,potega)+pow(b,potega) == pow(c,potega) || pow(a,potega)+pow(c,potega) == pow(b,potega) || pow(b,potega)+pow(c,potega) == pow(a,potega))
            {
                printf("Z bokow %.2f %.2f %.2f mozna zbudowac trojkat prostokatny\n",a,b,c);
                return 0;
            }
        }
        else
        {
            printf("Nie mozna zbudowac trojkata!");
            return 0;
        }
    }
    */

    /*Zadanie 1.19: Napisz program wczytujacy z klawiatury liczbe calkowita reprezentujaca rok,
    a nastepnie wypisujacy informacje o tym, czy jest to rok przestepny, czy nie.
    int rok;
    printf("Program wypisuje czy podany rok przez uzytkownika jest przestepny czy tez nie\n");
    printf("Podaj rok: ");
    scanf("%d",&rok);
    if(rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
    {
        printf("Rok %d jest przestepny", rok);
        return 0;
    }
    else
    {
        printf("Rok %d nie jest przestepny",rok);
        return 0;
    }
    */

    /*Zadanie 1.20: Napisz program, ktory wczyta trzy liczby a nastepnie sprawdzi czy stanowia one trojke pitagorejska
    (suma kwadratow dwoch mniejszych liczb jest rowna kwadratowi liczby najwiekszej).
    W programie nalezy zalozyc, ze uzytkownik wpisze liczby w dowolnej kolejnosci, np. 5, 3, 4.
    int l1,l2,l3,potega=2;
    printf("Program sprawdza czy podane liczby stanowia trojke pitagorejska\n");
    printf("Podaj 3 liczby:\n");
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1>=0 && l2>=0 && l3>=0)
    {
        if(l1<l2<l3)
        {
            if(pow(l1,potega)+pow(l2,potega) == pow(l3,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l1,l2,l3);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l1,l2,l3);
                return 0;
            }
        }
        else if(l1<l3<l2)
        {
            if(pow(l1,potega)+pow(l3,potega) == pow(l2,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l1,l3,l2);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l1,l3,l2);
                return 0;
            }
        }
        else if(l2<l1<l3)
        {
            if(pow(l2,potega)+pow(l1,potega) == pow(l3,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l2,l1,l3);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l2,l1,l3);
                return 0;
            }
        }
        else if(l2<l3<l1)
        {
            if(pow(l2,potega)+pow(l3,potega) == pow(l1,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l2,l3,l1);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l2,l3,l1);
                return 0;
            }
        }
        else if(l3<l2<l1)
        {
            if(pow(l3,potega)+pow(l2,potega) == pow(l1,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l3,l2,l1);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l3,l2,l1);
                return 0;
            }
        }
        else if(l3<l1<l2)
        {
            if(pow(l3,potega)+pow(l1,potega) == pow(l3,potega))
            {
                printf("Liczby %d %d %d stanowia trojke pitagorejska", l3,l1,l2);
                return 0;
            }
            else
            {
                printf("Liczby %d %d %d nie stanowia trojke pitagorejska", l3,l1,l2);
                return 0;
            }
        }
    }
    else
    {
        printf("Niepoprawne dane!");
        return 0;
    }
    */

    /*Zadanie 1.21: Napisz niewielki kalkulator, ktory pobiera na wejsciu jeden z operatorow arytmetycznych
    oraz dwa argumenty, po czym wyswietla wynik obliczen otrzymany na podstawie tych danych.
    char wybor;
    float arg1,arg2,dodawanie,odejmowanie,mnozenie,dzielenie;
    printf("Podstawowy kalkulator!\n");
    printf("Jakie wybierasz dzialanie arytmetyczne? (+,-,*,/): ");
    scanf("%s",&wybor);
    printf("Podaj dwie liczby: ");
    scanf("%f%f", &arg1,&arg2);
    //dodawanie
    if(wybor == '+')
    {
        dodawanie = arg1 + arg2;
        printf("Wynik dodawania liczb %.2f i %.2f wynosi: %.2f", arg1,arg2,dodawanie);
        return 0;
    }
    //odejmowanie
    else if(wybor == '-')
    {
        odejmowanie = arg1 - arg2;
        printf("Wynik odejmowania liczb %.2f i %.2f wynosi: %.2f", arg1,arg2,odejmowanie);
        return 0;
    }
    //mnozenie
    else if(wybor == '*')
    {
        mnozenie = arg1 * arg2;
        printf("Wynik mnozenia liczb %.2f i %.2f wynosi: %.2f", arg1,arg2,mnozenie);
        return 0;
    }
    //dzielenie
    else if(wybor == '/')
    {
        if(arg2 == 0)
        {
            printf("Nie mozna dzielic przez 0!");
            return 0;
        }
        else
        {
            dzielenie = arg1 / arg2;
            printf("Wynik dzielenia liczb %.2f i %.2f wynosi: %.2f",arg1,arg2,dzielenie);
            return 0;
        }
    }
    else
    {
        printf("Nieprawidlowy wybor!");
        return 0;
    }
    */
}
