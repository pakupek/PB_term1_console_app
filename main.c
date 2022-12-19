#include <stdio.h>
#include "lib_funkcje.h"


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
            printf("int pole(int b1, int b2, int b3)\n{\n  int wynik,obw,p;\n  printf(\"Sprawdzanie czy mozna utworzyc trojkat z podanych bokow!\\n\");\n  if(b1+b2>b3 && b1+b3>b2 && b2+b3>b1)\n");
            printf("  {\n\tprintf(\"Mozna utworzyc trojkat.\\n\");\n\tprintf(\"Obliczanie pola trojkata...\\n\");\n\tobw = b1+b2+b3;\n\tp = obw/2;\n\twynik = sqrt(p*(p-b1)*(p-b2)*(p-b3));\n\tprintf(\"Pole trojkata wynosi: %d\",wynik);\n  {\n");
            printf("  else\n\tprintf(\"Nie mozna zbudowac trojkata.\\n\");\n}\n");
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
            printf("\nint maks(int x, int y, int z)\n{\n  if(x>y && x>z)\n\tprintf(\"Wartosc x: %%d\",x);\n  else if(y>x && y>z)\n\tprintf(\"Wartosc y: %%d\",y);");
            printf("\n  else\n\tprintf(\"Najwieksza wartosc to z: %%d\",z);\n}");
            printf("\nAby uruchomic funkcje, podaj 3 argumenty do funkcji.\n");
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
            printf("long int suma(int n)\n{\n  int sum=1,i;\n  for(i=2;i<=n;i++)\n  {\n\tif(i%2==0)\n\t  sum -= i;");
            printf("\n\telse\n\t  sum += i;\n  }\n  printf(\"Suma szeregu = %%d\",sum);\n}");
            printf("\n\nAby uruchomic funkcje podaj dlugosc szeregu: ");
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
            printf("long int suma2(int min, int max)\n{\n  int sum,i;\n  for(i=0;i>=min && i<=max;i++)\n  {\n\tif(i%3 == 0)\n\t  sum += i;");
            printf("\n\telse if(i%3==1)\n\t  continue;\n  }\n  printf(\"Suma liczb podzielnych przez 3 wynosi: %%d\",sum);\n}");
            printf("\n\nAby uruchomic funkcje podaj przedzial <a,b>: ");
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
            printf("int wartoscMaks(int granica)\n{\n  int max=0,sum,liczba;\n  do\n  {\n\tprintf(\"Wprowadz liczbe: \");\n\tscanf(\"%%d\",&liczba);");
            printf("\n\tsum += liczba;\n\tif(liczba>max)\n\t  max=liczba;\n  }while(sum<granica);\n  printf(\"Maksymalna wprowadzona liczba to %%d\",max);\n}");
            printf("\nAby uruchomic funkcje podaj granice: ");
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
            printf("int minis(int t[], int n)\n{\n  int i,minimal,new_min;\n  for(i=0;i<n;i++)\n    printf(\"%%4d\",t[i]);\n  printf(\"\\n\");\n");
            printf("  minimal = t[0];\n  for(i=1;i<n;i++)\n  {\n    if(t[i]<minimal)\n    {\n      new_min = t[i];\n      minimal = t[i];\n    }\n    else\n      continue;");
            printf("\n  }\n  printf(\"\\n\");\n  printf(\"Element minimalny tej tablicy: %%d\\n\",minimal);\n}");
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
            printf("int liczba_wystapien(char *l, char znak, int *wystapienie)\n{\n  char wczytany_znak;\n  while(*l)\n  {\n    wczytany_znak = *l++;\n    printf(\"Wczytany znak: %%c\\n\",wczytany_znak);\n");
            printf("\tif(wczytany_znak == znak)\n\t  *wystapienie+=1;\n\telse\n\t  continue;\n  }\n}\n");
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
            printf("void wzor_kwadratowy(int a, int b, int c)\n{\n  char znak = '+';\n  if(a==0)\n  {\n    if(b==0)\n    {");
            printf("\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: 0=0\");\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%d=0\",c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%d=0\",c);\n    }");
            printf("\n    else if(b<0)\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx=0\",b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx%%d=0\",b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx%%c%%d=0\",b,znak,c);");
            printf("    }\n    else\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx=0\",b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx%%d=0\",b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx%%c%%d=0\",b,znak,c);");
            printf("\n    }\n  }\n  else if(a<0)\n  {\n    if(b==0)\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2=0\",a);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%d=0\",a,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%d=0\",a,znak,c);");
            printf("\n    }\n    else if(b<0)\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx=0\",a,b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx%%d=0\",a,b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx%%c%%d=0\",a,b,znak,c);");
            printf("\n    }\n    else\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx=0\",a,znak,b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx%%d=0\",a,znak,b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx%%c%%d=0\",a,znak,b,znak,c);");
            printf("\n    }\n  }\n  else\n  {\n    if(b==0)\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2=0\",a);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%d=0\",a,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%d=0\",a,znak,c);\n    }\n    else if(b<0)");
            printf("\n    {\n\tif(c==0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx=0\",a,b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx%%d=0\",a,b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%dx%%c%%d=0\",a,b,znak,c);\n    }\n    else\n    {\n\tif(c==0)");
            printf("\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx=0\",a,znak,b);\n\telse if(c<0)\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx%%d=0\",a,znak,b,c);\n\telse\n\t  printf(\"Wzor rownania kwadratowego: %%dx^2%%c%%dx%%c%%d=0\",a,znak,b,znak,c);\n    }\n  }\n}");
            printf("\nAby uruchomic funkcje podaj wspolczynniki wzoru kwadratowego(a,b,c): ");
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
            printf("void dwojkowa_reprezentacja(int n)\n{\n  int r=0, n1=n, i=0;\n  while(n1>0)\n  {\n    r++;\n    n1 /= 2;\n  }");
            printf("\n  int dw[r];\n  while(n>0)\n  {\n    dw[i] = n%2;\n    i++;\n    n /= 2;\n  }\n  printf(\"Dwojkowa reprezentacja: \");\n  for(i=r-1; i>=0; i--)\n    printf(\"%%d\", dw[i]);\n}");
            printf("\nAby uruchomic funkcje podaj liczbe do zamiany: ");
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
            printf("int ktoraCwiartka(float x, float y)\n{\n  if(x>0 && y>0)\n    printf(\"Cwiartka 1\");\n  else if(x>0 && y<0)\n   printf(\"Cwiartka 4\");\n  else if(x<0 && y>0)\n    printf(\"Cwiartka 2\");\n");
            printf("  else if(x<0 && y<0)\n    printf(\"Cwiartka 3\");\n  else if(x==0 && y==0)\n    printf(\"0\");\n}");
            printf("\nAby uruchomic funkcje podaj wspolrzedne punktu(x,y): ");
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
            printf("float suma3(float x, int n)\n{\n  float szer_sum;\n  szer_sum = x +1;\n  for(int i=2;i<=n;i++)\n  {\n    if(i%2==0)\n\tszer_sum -= (pow(x,i)-i);\n    else\n\tszer_sum += (pow(x,i) + i);\n  }\n  printf(\"Suma szeregu: %%.2f\",szer_sum);\n}");
            printf("\nAby uruchomic funkcje podaj x i n: ");
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
            printf("float suma4(float x, int n)\n{\n  float szer_sum=0;\n  {\n    if(i==1)\n\tszer_sum = x;\n    else\n\tszer_sum += i*pow(x,i);\n  }\n  printf(\"Suma szeregu wynosi: %%f\",szer_sum);\n}");
            printf("\nAby uruchomic funkcje podaj x i n: ");
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
            printf("float suma5(float x, float epsilon)\n{\n  float sum=0,skladnik;\n  int i=2;\n  sum = 1 + x;\n  while(1)\n  {\n    skladnik = (pow(x,i))/i;\n    if(skladnik<epsilon)\n\tbreak;");
            printf("\n    else\n    {\n\tsum += skladnik;\n\ti++;\n    }\n  }\n  printf(\"Suma szeregu wynosi: %%.2f\",sum);\n}");
            printf("\nAby uruchomic funkcje podaj x z przedzialu(0,1) i dokladnosc: ");
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
            printf("void czy_pierwsza(int liczba)\n{\n  int i;\n  if(liczba>2)\n  {\n    for(i=2;i*i<=liczba;i++)\n    {\n\tif(liczba%i==0)\n\t  printf(\"Podana liczba nie jest pierwsza!\");");
            printf("\n\telse\n\t  printf(\"Podana liczba jest pierwsza!\");\n    }\n  }\n  else\n    printf(\"Podana liczba nie jest pierwsza!\");\n}");
            printf("\nAby uruchomic funkcje podaj dowolna liczbe naturalna: ");
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
            printf("void wypisz_tab(float *t)\n{\n  printf(\"Otrzymana tablica:\");\n  while(*t)\n    printf(\"%%4.2f\\t\",*t++);\n}");
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
            printf("int zlicz(int t[], int n)\n{\n  int i, j, tmp;\n  //porzadkowanie rosnaco\n  for(i=0; i<n; i++)\n  {\n    for(j=1; j<n-i; j++)\n    {");
            printf("\n\tif(t[j]<t[j-1])\n\t{\n\t  tmp = t[j];\n\t  t[j] = t[j-1];\n\t  t[j-1] = tmp;\n\t}\n    }\n  }\n  printf(\"wypisanie elementow tablicy\\n\");\n  for(i=0; i<n; i++)");
            printf("\n    printf(\"%%4d\", t[i]);\n  printf(\"\\n\");\n  int licznik = 1;\n  for(i=1; i<n; i++)\n  {\n    if(t[i-1] == t[i])\n\tlicznik++;\n    else\n    {\n\tprintf(\"%%d - %%d razy\\n\", t[i-1], licznik);");
            printf("\n\tlicznik = 1;\n    }\n  }\n  printf(\"%%d - %%d razy\\n\", t[i-1], licznik);\n}");
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
            printf("void odwroc(char str[])\n{\n  int dlugosc=strlen(str);\n  char new_str[dlugosc];\n  int i,j;\n  for(i=0,j=dlugosc-1;i<dlugosc && j>=0;i++,j--)\n    new_str[j] = str[i];\n  printf(\"Odwrocony napis: \");\n  for(i=0;i<strlen(str);i++)\n");
            printf("    printf(\"%%c\",new_str[i]);\n}");
            printf("\nAby uruchomic funkcje stworz napis do odwrocenia:");
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
            printf("int liczba_slow(char *lancuch)\n{\n  int slowo=0;\n  char znak;\n  while(*lancuch)\n  {\n    znak = *lancuch++;\n    if(isspace(znak))\n\tslowo+=1;\n    else\n\tcontinue;\n  }");
            printf("\n  printf(\"Liczba slow wynosi %%d\",slowo);\n}");
            printf("\nAbu uruchomic funkcje podaj ciag znakow: ");
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

int main()
{
    int number;
    int dzial;
    int wyjscie = -1;

    do
    {
        printf("\t\t\t\t\t\t\t\\     Semestr I       /\n\t\t\t\t\t\t\t \\ Programowanie w C /\n\n");
        printf("1. Dzial: Funkcje\n");
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

        if(dzial == 0)
        {
            printf("Wychodzenie z programu");
            wyjscie = 0;
        }

    }while(dzial != 0);

    return 0;
}
