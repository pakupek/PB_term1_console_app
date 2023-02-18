#include <stdio.h>
#include "lib_funkcje.h"
#include "lib_funkcje_pp.h"
#include "funkcje_pp.h"
#include "funkcje.h"
#include "pliki_tekstowe_funkcje.h"
#include <conio.h>

//Czyszczenie ekranu konsoli
void clrscr()
{
    system("@cls||clear");
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
    printf("19. Napisz funkcje, ktora sprawdzi, czy k-elementowy ciag...\n");
    printf("\n\n0 - Exit\n");
}

void print_header()
{
    printf("\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n\n");
    printf("1. Dzial: Funkcje\n2. Dzial: Funkcje,przekazywanie parametrow.\n");
    printf("3. Dzial: Pliki tekstowe.\n");
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

void print_pliki_tekstowe_header()
{
    printf("\nPliki tekstowe\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n");
    printf("Wybierz zadanie (1-9):\n");
    printf("1. Na podstawie pliku tekstowego liczb calkowitych stworzyc...\n2. Napisz funkcje, ktora z dwoch plikow utworzy nowy plik...\n");
    printf("3. Napisz funkcje, ktora zapisze do pliku wynikowego z pliku tekstowego...\n4. Dany jest plik zawierajacy liczby rzeczywiste...\n");
    printf("5. Napisz funkcje, ktora z dwoch plikow tekstowych utworzy...\n6. Napisz funkcje, ktora wyznaczy i zwroci...\n");
    printf("7. Napisz funkcje, ktora wyznaczy i wypisze na ekran...\n8. Napisz funkcje, ktora przepisze zawartosc danego pliku...\n9. Napisz funkcje, ktora z dwoch plikow zawierajacych alfabetyczne...\n");
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
        //funckje
        if(dzial == 1)
        {
            do
            {
                print_function_header();
                scanf("%d",&number);

                if(number == 1)
                {
                    clrscr();
                    printf("Zadanie 1. Napisz funkcje, ktora zwroci pole trojkata. Dlugosci bokow trojkata przekaz jako parametry funkcji.\n");
                    f1();
                    printf("\n\n");
                }

                if(number == 2)
                {
                    clrscr();
                    printf("Zadanie 2. Napisz funkcje int maks(int x, int y, int z), zwracajaca wartosc maksymalna sposrod jej argumentow.\n");
                    f2();
                    printf("\n\n");
                }

                if(number == 3)
                {
                    clrscr();
                    printf("Zadanie 3. Napisz funkcje long int suma(int n), ktora wyznaczy sume szeregu: 1-2+3-...+-n.");
                    f3();
                    printf("\n\n");
                }

                if(number == 4)
                {
                    clrscr();
                    printf("Zadanie 4. Napisz funkcje long int suma(int min, int max), ktora obliczy sume liczb podzielnych przez 3 mieszczacych sie w przedziale <min, max>.");
                    f4();
                    printf("\n\n");
                }

                if(number == 5)
                {
                    clrscr();
                    printf("Zadanie 5. Napisz funkcje int wartoscMaks(int granica) ktora znajdzie najwieksza liczbe calkowita n taka, ze 1 + 2 + ... + n < granica.");
                    f5();
                    printf("\n\n");
                }

                if(number == 6)
                {
                    clrscr();
                    printf("Zadanie 6. Napisz funkcje int min(int t[], int n), ktora dla tablicy o wymiarze n danej jako parametr zwroci wartosc elementu minimalnego.\n");
                    f6();
                    printf("\n\n");
                }

                if(number == 7)
                {
                    clrscr();
                    printf("Zadanie 7. Napisz funkcje, ktora obliczy liczbe wystapien danego znaku w lancuchu.Lancuch oraz znak przekaz jako parametry funkcji.\n");
                    f7();
                    printf("\n\n");
                }

                if(number == 8)
                {
                    clrscr();
                    printf("Zadanie 8. Napisz funkcje, ktora wyswietla wzor rownania kwadratowego (np. x^2+2x-3=0) dla zadanych wartosci wspolczynnikow a, b oraz c. Uwzglednij rozne wartosci oraz znaki wspolczynnikow (aby np. nie wyswietlac 0x^2+-1x+0=0).");
                    f8();
                    printf("\n\n");
                }

                if(number == 9)
                {
                    clrscr();
                    printf("Zadanie 9. Napisz funkcje, ktora wyswietli na ekranie dwojkowa reprezentacje liczby calkowitej danej jako parametr.");
                    f9();
                    printf("\n\n");
                }

                if(number == 10)
                {
                    clrscr();
                    printf("Zadanie 10. Napisz funkcje, int ktoraCwiartka(float x, float y) ktora dla punktu o wspolrzednych (x, y) zwroci wartosc 1, 2, 3 lub 4, identyfikujaca jedna z cwiartek ukladu wspolrzednych wewnatrz ktorej lezy ten punkt. W przypadku, gdy punkt lezy na ktorejkolwiek osi wspolrzednych funkcja powinna zwrocic 0.");
                    f10();
                    printf("\n\n");
                }

                if(number == 11)
                {
                    clrscr();
                    printf("Zadanie 11. Napisz funkcje, float suma(float x, int n), ktora wyznaczy sume szeregu: (x+1)-(x2-2)+(x3+3)-...+-(xn+-n).");
                    f11();
                    printf("\n\n");
                }

                if(number == 12)
                {
                    clrscr();
                    printf("Zadanie 12. Napisz funkcje float suma(float x, int n), ktora wyznaczy sume szeregu: x+2x2+3x3+...+nxn.");
                    f12();
                    printf("\n\n");
                }

                if(number == 13)
                {
                    clrscr();
                    printf("Zadanie 13. Napisz funkcje float suma(float x, float epsilon), ktora dla x z przedzialu (0, 1) wyznaczy sume szeregu: 1 + x + x2/2 + ... + xi/i. Sumowanie przerwij jezeli kolejny skladnik bedzie mniejszy od zadanej dokladnosci epsilon.");
                    f13();
                    printf("\n\n");
                }

                if(number == 14)
                {
                    clrscr();
                    printf("Zadanie 14. Napisz funkcje sprawdzajaca, czy jej argument jest liczba pierwsza.");
                    f14();
                    printf("\n\n");
                }

                if(number == 15)
                {
                    clrscr();
                    printf("Zadanie 15. Napisz funkcje, ktora wypisze na ekranie zawartosc danej jako parametr jednowymiarowej tablicy liczb rzeczywistych.");
                    f15();
                    printf("\n\n");
                }

                if(number == 16)
                {
                    clrscr();
                    printf("Zadanie 16. Napisz funkcje, ktora zliczy i wypisze liczbe wystapien elementow tablicy o rozmiarze N.");
                    f16();
                    printf("\n\n");
                }

                if(number == 17)
                {
                    clrscr();
                    printf("Zadanie 17. Napisz funkcje, ktora bedzie odwracala kolejnosc znakow w przekazanym jej napisie. Po jej wykonaniu ostatni znak napisu bedzie pierwszym, przedostatni drugim, itd.");
                    f17();
                    printf("\n\n");
                }

                if(number == 18)
                {
                    clrscr();
                    printf("Zadanie 18. Napisz funkcje, ktora wyznaczy liczbe slow w danym jako parametr lancuchu. Slowo definiujemy jako ciag znakow oddzielony bialym znakiem lub znakiem przestankowym.");
                    f18();
                    printf("\n\n");
                }

                if(number == 19)
                {
                    clrscr();
                    printf("Zadanie 19. Napisz funkcje, ktora sprawdzi, czy k-elementowy ciag znakow jest podciagiem drugiego n-elementowego ciagu. Obydwa ciagi znakow przekaz jako parametry funkcji.");
                    f19();
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
                    clrscr();
                    printf("Zadanie 6.1: Napisz funkcje void pole_obwod(float a, float b, float c, float *pole, float *R), ktora obliczy i zwroci poprzez parametry pole i dlugosc promienia okregu opisanego na trojkacie o bokach a, b, c.\n");
                    fpp1();
                    printf("\n\n");
                }
                if(number == 2)
                {
                    clrscr();
                    printf("Zadanie 6.2: Napisz funkcje, ktora dla tablicy liczb calkowitych danej jako parametr obliczy i zwroci informacje ile razy w tablicy wystepuje wartosc maksymalna i ile razy wystepuje wartosc minimalna.");
                    fpp2();
                    printf("\n\n");
                }
                if(number == 3)
                {
                    clrscr();
                    printf("Zadanie 6.3: Napisz funkcje void mins(int ar[], int n, int *m1, int *m2, int *m3), ktora przyjmuje jako argument tablice ar o rozmiarze n i wyszukuje w niej trzy najmniejsze wartosci (nie liczac powtorzen), np. przyjmujac ar={4, 2, 6, 1, 2, 5} zwracamy m1=1, m2=2, m3=4.");
                    fpp3();
                    printf("\n\n");
                }
                if(number == 4)
                {
                    clrscr();
                    printf("Zadanie 6.4: Napisz funkcje void wypelnijLosowo(int t[], int n, int a, int b) wypelniajaca jednowymiarowa tablice losowymi wartosciami z przedzialu <a, b>.");
                    fpp4();
                    printf("\n\n");
                }
                if(number == 5)
                {
                    clrscr();
                    printf("Zadanie 6.5: Napisz funkcje void odwroc(char p[]), ktora bedzie odwracala kolejnosc znakow w przekazanym jej napisie. Po jej wykonaniu ostatni znak napisu bedzie pierwszym, przedostatni drugim, itd.");
                    fpp5();
                    printf("\n\n");
                }
                if(number == 6)
                {
                    clrscr();
                    printf("Zadanie 6.6: Napisz funkcje ktora w lancuchu danym jako parametr zamieni wszystkie male litery na wielkie.");
                    fpp6();
                    printf("\n\n");
                }
                if(number == 7)
                {
                    clrscr();
                    printf("Zadanie 6.7: Napisz funkcje void fill(float ar[], int n, float a, float b), ktora wypelni tablice ar o rozmiarze n wartosciami z przedzialu [a, b] - np. dla n=5, a=2.3, b=4.7 wypelniamy tablice wartosciami {2.3, 2.9, 3.5, 4.1, 4.7}.");
                    fpp7();
                    printf("\n\n");
                }
                if(number == 8)
                {
                    clrscr();
                    printf("Zadanie 6.8: Napisz funkcje void roundArray(float in[], int out[], int n), ktora przyjmuje jako argumenty dwie tablice o rozmiarze n, a nastepnie przepisuje do tablicy out wszystkie wartosci z tablicy in zaokraglone do wartosci calkowitej (zgodnie z matematycznymi zasadami) - np. in = {3.5, 4.7, 2.2, 2.5, 1.4}, wowczas out = {4, 5, 2, 2, 1}.");
                    fpp8();
                    printf("\n\n");
                }
                if(number == 9)
                {
                    clrscr();
                    printf("Zadanie 6.9: Napisz funkcje bool someEven(int ar[], int n), ktora przyjmuje jako argument tablice ar o rozmiarze n i sprawdza czy w tablicy znajduje sie jakakolwiek wartosc parzysta. Typ bool udostępnia biblioteka <stdbool.h>.");
                    fpp9();
                    printf("\n\n");
                }
                if(number == 10)
                {
                    clrscr();
                    printf("Zadanie 6.10: Napisz funkcje void pole_obwod_kola(float R, float *p, float *o), ktora obliczy i zwroci poprzez parametry pole i obwod kola o promieniu R.");
                    fpp10();
                    printf("\n\n");
                }
                if(number == 11)
                {
                    clrscr();
                    printf("Zadanie 6.11: Napisz funkcje void min_max(int t[], int n, int *min, int *max), ktora dla tablicy o wymiarze n danej jako parametr znajdzie i zwroci poprzez parametry wartosci elementow minimalnego i maksymalnego.");
                    fpp11();
                    printf("\n\n");
                }
                if(number == 12)
                {
                    clrscr();
                    printf("Zadanie 6.12: Napisz funkcje ktora dla lancucha danego jako parametr obliczy i zwroci liczbe wystepujacych w nim liter oraz liczbe wystepujacych w nim cyfr.");
                    fpp12();
                    printf("\n\n");
                }
                if(number == 13)
                {
                    clrscr();
                    printf("Zadanie 6.13: Napisz funkcje int min(int ar[], int n, int *count), ktora przyjmuje jako argument tablice ar o rozmiarze n i znajduje w niej wartosc najmniejszą, a w parametrze count zwraca liczbe jej wystapien, np. przyjmujac ar={4, 2, 6, 2, 2, 5} zwracamy 2, zas cout=3.");
                    fpp13();
                    printf("\n\n");
                }
                if(number == 14)
                {
                    clrscr();
                    printf("Zadanie 6.14: Napisz funkcje int pierwiastki(float a, float b, float c, float *x1, float *x2), ktora przyjmuje jako parametry wspolczynniki rownania kwadratowego i liczy jego pierwiastki - przez return zwracana jest liczba pierwiastkow (0, 1 lub 2), zas w parametrach x1 oraz x2 zwracamy ich wartosci.");
                    fpp14();
                    printf("\n\n");
                }
                if(number == 15)
                {
                    clrscr();
                    printf("Zadanie 6.15: Napisz funkcje bool read(char str[], int *value), ktora wczytuje od uzytkownika wartosc typu int, wyswietlajac komunikat zachety przekazany jako parametr str. Zwracamy informacje o tym czy udalo sie wczytac wartosc.");
                    fpp15();
                    printf("\n\n");
                }
                if(number == 16)
                {
                    clrscr();
                    printf("Zadanie 6.16: Napisz funkcje void wypisz(float *ar, int n), ktora wypisuje zawartosc tablicy ar przekazanej jako parametr, oddzielajac jej wartosci przecinkami i zaokraglajac do dwoch miejsc po przecinku. Uzyj tej funkcji wypisywac fragment zawartosci tablicy (jako parametr przekaz wskaznik na srodek tablicy).");
                    fpp16();
                    printf("\n\n");
                }
                if(number == 17)
                {
                    clrscr();
                    printf("Zadanie 6.17: Napisz funkcje void wypelnijB(int A[], int B[], int n), ktora na podstawie tablicy liczb calkowitych A wypelni tablice B wg nastepujacego wzoru: B[i] = A[0]-A[1]+A[2]-...A[i].");
                    fpp17();
                    printf("\n\n");
                }
                if(number == 18)
                {
                    clrscr();
                    printf("Zadanie 6.18: Napisz funkcje void skaluj(float t[], int n), ktora przeskaluje elementy tablicy danej jako parametr do przedzialu <0, 1>.");
                    fpp18();
                    printf("\n\n");
                }
                if(number == 19)
                {
                    clrscr();
                    printf("Zadanie 6.19: Napisz funkcje, ktora sortuje metodą babelkowa tablice liczb calkowitych dana jako parametr. Stworz pomocnicza funkcje zamieniajaca ze soba wartosci komorek tablicy.");
                    fpp19();
                    printf("\n\n");
                }
                if(number == 20)
                {
                    clrscr();
                    printf("Zadanie 6.20: Napisz funkcje implementujaca sortowanie przez wybor dla napisow. Stworz pomocnicza funkcje zamieniajaca ze soba wartosci komorek tablicy.");
                    fpp20();
                    printf("\n\n");
                }
                if(number == 21)
                {
                    clrscr();
                    printf("Zadanie 6.21: Napisz funkcje int crop(float ar[], int n, float a, float b), ktora przyjmuje jako parametr tablice ar o rozmiarze n, a nastepnie obcina jej wartosci do zakresu [a, b]. Zwracamy informacje ile wartosci zostalo obcietych. Np. dla ar={2.3, 1.6, 2.7, 3.7, 5, 3.1}, a=2, b=3.5, zwracamy 3, zas ar wyniesie {2.3, 2.0, 2.7, 3.5, 3.5, 3.1}.");
                    fpp21();
                    printf("\n\n");
                }
                if(number == 22)
                {
                    clrscr();
                    printf("Zadanie 6.22: Napisz funkcje void removeRepeats(int in[], int out[], int n), ktora przyjmuje jako argumenty dwie tablice o rozmiarze n, a nastepnie przepisuje do tablicy out kolejne wartosci z tablicy in, pomijajac powtorzenia i w razie czego uzupelniajac tablice zerami - np. in = {2, 3, 3, 2, 4, 4, 4, 3}, wowczas out = {2, 3, 2, 4, 3, 0, 0, 0}.");
                    fpp22();
                    printf("\n\n");
                }
                if(number == 23)
                {
                    clrscr();
                    printf("Zadanie 6.23: Napisz funkcje void doubleEven(int in[], int out[], int n), ktora przyjmuje jako argumenty dwie tablice o rozmiarze n, a nastepnie przepisuje do tablicy out kolejne wartosci z tablicy in, podwajajac kazde wystapienie wartosci parzystej (wartosci ktore nie zmieszcze sie w tablicy wynikowej, nalezy pominac), np. in = {1, 2, 3, 4, 5}, wowczas out = {1, 2, 2, 3, 4}.");
                    fpp23();
                    printf("\n\n");
                }

            } while (number != 0);

        }
        //Pliki tekstowe
        if(dzial == 3)
        {
            do
            {
                print_pliki_tekstowe_header();
                scanf("%d",&number);

                if(number == 1)
                {
                    clrscr();
                    printf("Zadanie 7.1: Na podstawie pliku tekstowego liczb calkowitych stworzyc dwa pliki: jeden z elementami parzystymi i drugi z elementami nieparzystymi. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt1();
                    printf("\n\n");
                }
                if(number == 2)
                {
                    clrscr();
                    printf("Zadanie 7.2: Napisz funkcje, ktora z dwoch plikow utworzy nowy plik, zawierajacy najpierw znaki pierwszego pliku, a potem drugiego. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt2();
                    printf("\n\n");
                }
                if(number == 3)
                {
                    clrscr();
                    printf("Zadanie 7.3: Napisz funkcje, ktora zapisze do pliku wynikowego z pliku tekstowego zawierajacego slowa oddzielone spacja wszystkie wyrazy zaczynające sie wielka litera. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt3();
                    printf("\n\n");
                }
                if(number == 4)
                {
                    clrscr();
                    printf("Zadanie 7.4: Dany jest plik zawierajacy liczby rzeczywiste. Napisz funkcje, ktora rozdzieli te liczby do dwoch plikow w taki sposob, ze w jednym znajda sie liczby ujemne a w drugim dodatnie. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt4();
                    printf("\n\n");
                }
                if(number == 5)
                {
                    clrscr();
                    printf("Zadanie 7.5: Napisz funkcje, ktora z dwoch plikow tekstowych utworzy trzeci plik, ktory zawiera wspolne slowa w tych plikach. Slowo definiujemy jako ciag znakow zakonczony bialym znakiem. Maksymalna dlugosc slowa wynosi 10 znakow. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt5();
                    printf("\n\n");
                }
                if(number == 6)
                {
                    clrscr();
                    printf("Zadanie 7.6: Napisz funkcje, ktora wyznaczy i zwroci srednia arytmetyczna liczb calkowitych znajdujacych sie w pliku tekstowym. Sciezke dostepu do pliku przekaz jako parametry funkcji.");
                    fpt6();
                    printf("\n\n");
                }
                if(number == 7)
                {
                    clrscr();
                    printf("Zadanie 7.7: Napisz funkcje, ktora wyznaczy i wypisze na ekran wartosc minimalna i wartosc maksymalna sposrod liczb calkowitych znajdujących sie w pliku tekstowym. Sciezke dostepu do pliku przekaz jako parametry funkcji.");
                    fpt7();
                    printf("\n\n");
                }
                if(number == 8)
                {
                    clrscr();
                    printf("Zadanie 7.8: Napisz funkcje, ktora przepisze zawartosc danego pliku tekstowego do drugiego pliku zamieniajac wszystkie wystapienia slowa w1 na w2. Slowo definiujemy jako ciag znakow zakonczony bialym znakiem. Maksymalna długosc slowa wynosi 10 znakow. Sciezki dostepu do plikow oraz lancuchy przekaz jako parametry funkcji.");
                    fpt8();
                    printf("\n\n");
                }
                if(number == 9)
                {
                    clrscr();
                    printf("Zadanie 7.9: Napisz funkcje, ktora z dwoch plikow zawierajacych alfabetyczne listy nazwisk utworzy trzeci plik zawierajacy posortowana liste wszystkich tych nazwisk. Poszczegolne nazwiska oddzielone sa bialym znakiem (spacja, tabulatorem lub enterem). Maksymalna dlugosc nazwiska wynosi 20 znakow. Sciezki dostepu do plikow przekaz jako parametry funkcji.");
                    fpt9();
                    printf("\n\n");
                }

            }while(number != 0);
        }

        if(dzial == 0)
        {
            printf("Wychodzenie z programu");
            wyjscie = 0;
        }

    }while(wyjscie != 0);

    return 0;
}
