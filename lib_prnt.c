#include <stdlib.h>

void pf1()
{
    printf("int pole(int b1, int b2, int b3)\n{\n  int wynik,obw,p;\n  printf(\"Sprawdzanie czy mozna utworzyc trojkat z podanych bokow!\\n\");\n  if(b1+b2>b3 && b1+b3>b2 && b2+b3>b1)\n");
    printf("  {\n\tprintf(\"Mozna utworzyc trojkat.\\n\");\n\tprintf(\"Obliczanie pola trojkata...\\n\");\n\tobw = b1+b2+b3;\n\tp = obw/2;\n\twynik = sqrt(p*(p-b1)*(p-b2)*(p-b3));\n\tprintf(\"Pole trojkata wynosi: %d\",wynik);\n  {\n");
    printf("  else\n\tprintf(\"Nie mozna zbudowac trojkata.\\n\");\n}\n");
    printf("Aby wywolac funkcje wprowadz boki trojkata: ");
}

void pf2()
{
    printf("\nint maks(int x, int y, int z)\n{\n  if(x>y && x>z)\n\tprintf(\"Wartosc x: %%d\",x);\n  else if(y>x && y>z)\n\tprintf(\"Wartosc y: %%d\",y);");
    printf("\n  else\n\tprintf(\"Najwieksza wartosc to z: %%d\",z);\n}");
    printf("\nAby uruchomic funkcje, podaj 3 argumenty do funkcji.\n");
}

void pf3()
{
    printf("long int suma(int n)\n{\n  int sum=1,i;\n  for(i=2;i<=n;i++)\n  {\n\tif(i%2==0)\n\t  sum -= i;");
    printf("\n\telse\n\t  sum += i;\n  }\n  printf(\"Suma szeregu = %%d\",sum);\n}");
    printf("\n\nAby uruchomic funkcje podaj dlugosc szeregu: ");
}

void pf4()
{
    printf("long int suma2(int min, int max)\n{\n  int sum,i;\n  for(i=0;i>=min && i<=max;i++)\n  {\n\tif(i%3 == 0)\n\t  sum += i;");
    printf("\n\telse if(i%3==1)\n\t  continue;\n  }\n  printf(\"Suma liczb podzielnych przez 3 wynosi: %%d\",sum);\n}");
    printf("\n\nAby uruchomic funkcje podaj przedzial <a,b>: ");
}

void pf5()
{
    printf("int wartoscMaks(int granica)\n{\n  int max=0,sum,liczba;\n  do\n  {\n\tprintf(\"Wprowadz liczbe: \");\n\tscanf(\"%%d\",&liczba);");
    printf("\n\tsum += liczba;\n\tif(liczba>max)\n\t  max=liczba;\n  }while(sum<granica);\n  printf(\"Maksymalna wprowadzona liczba to %%d\",max);\n}");
    printf("\nAby uruchomic funkcje podaj granice: ");
}

void pf6()
{
    printf("int minis(int t[], int n)\n{\n  int i,minimal,new_min;\n  for(i=0;i<n;i++)\n    printf(\"%%4d\",t[i]);\n  printf(\"\\n\");\n");
    printf("  minimal = t[0];\n  for(i=1;i<n;i++)\n  {\n    if(t[i]<minimal)\n    {\n      new_min = t[i];\n      minimal = t[i];\n    }\n    else\n      continue;");
    printf("\n  }\n  printf(\"\\n\");\n  printf(\"Element minimalny tej tablicy: %%d\\n\",minimal);\n}");
    printf("\n\nAby wywoloac funkcje musisz stworzyc tablice o zadanym wymiarze i wprowadzic do funkcji jako parametr!!\n");
}

void pf7()
{
    printf("int liczba_wystapien(char *l, char znak, int *wystapienie)\n{\n  char wczytany_znak;\n  while(*l)\n  {\n    wczytany_znak = *l++;\n    printf(\"Wczytany znak: %%c\\n\",wczytany_znak);\n");
    printf("\tif(wczytany_znak == znak)\n\t  *wystapienie+=1;\n\telse\n\t  continue;\n  }\n}\n");
    printf("\nAby uruchomic funkcje musisz utworzyc lancuch oraz wprowadzic szukany znak\n");
}

void pf8()
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
}

void pf9()
{
    printf("void dwojkowa_reprezentacja(int n)\n{\n  int r=0, n1=n, i=0;\n  while(n1>0)\n  {\n    r++;\n    n1 /= 2;\n  }");
    printf("\n  int dw[r];\n  while(n>0)\n  {\n    dw[i] = n%%2;\n    i++;\n    n /= 2;\n  }\n  printf(\"Dwojkowa reprezentacja: \");\n  for(i=r-1; i>=0; i--)\n    printf(\"%%d\", dw[i]);\n}");
    printf("\nAby uruchomic funkcje podaj liczbe do zamiany: ");
}

void pf10()
{
    printf("int ktoraCwiartka(float x, float y)\n{\n  if(x>0 && y>0)\n    printf(\"Cwiartka 1\");\n  else if(x>0 && y<0)\n   printf(\"Cwiartka 4\");\n  else if(x<0 && y>0)\n    printf(\"Cwiartka 2\");\n");
    printf("  else if(x<0 && y<0)\n    printf(\"Cwiartka 3\");\n  else if(x==0 && y==0)\n    printf(\"0\");\n}");
    printf("\nAby uruchomic funkcje podaj wspolrzedne punktu(x,y): ");
}

void pf11()
{
    printf("float suma3(float x, int n)\n{\n  float szer_sum;\n  szer_sum = x +1;\n  for(int i=2;i<=n;i++)\n  {\n    if(i%2==0)\n\tszer_sum -= (pow(x,i)-i);\n    else\n\tszer_sum += (pow(x,i) + i);\n  }\n  printf(\"Suma szeregu: %%.2f\",szer_sum);\n}");
    printf("\nAby uruchomic funkcje podaj x i n: ");
}

void pf12()
{
    printf("float suma4(float x, int n)\n{\n  float szer_sum=0;\n  {\n    if(i==1)\n\tszer_sum = x;\n    else\n\tszer_sum += i*pow(x,i);\n  }\n  printf(\"Suma szeregu wynosi: %%f\",szer_sum);\n}");
    printf("\nAby uruchomic funkcje podaj x i n: ");
}

void pf13()
{
    printf("float suma5(float x, float epsilon)\n{\n  float sum=0,skladnik;\n  int i=2;\n  sum = 1 + x;\n  while(1)\n  {\n    skladnik = (pow(x,i))/i;\n    if(skladnik<epsilon)\n\tbreak;");
    printf("\n    else\n    {\n\tsum += skladnik;\n\ti++;\n    }\n  }\n  printf(\"Suma szeregu wynosi: %%.2f\",sum);\n}");
    printf("\nAby uruchomic funkcje podaj x z przedzialu(0,1) i dokladnosc: ");
}

void pf14()
{
    printf("void czy_pierwsza(int liczba)\n{\n  int i;\n  if(liczba>2)\n  {\n    for(i=2;i*i<=liczba;i++)\n    {\n\tif(liczba%i==0)\n\t  printf(\"Podana liczba nie jest pierwsza!\");");
    printf("\n\telse\n\t  printf(\"Podana liczba jest pierwsza!\");\n    }\n  }\n  else\n    printf(\"Podana liczba nie jest pierwsza!\");\n}");
    printf("\nAby uruchomic funkcje podaj dowolna liczbe naturalna: ");
}

void pf15()
{
    printf("void wypisz_tab(float *t)\n{\n  printf(\"Otrzymana tablica:\");\n  while(*t)\n    printf(\"%%4.2f\\t\",*t++);\n}");
    printf("\nAby uruchomic funkcje stworz tablice liczb rzeczywistych: ");
    printf("\nPodaj wielkosc tablicy: ");
}

void pf16()
{
    printf("int zlicz(int t[], int n)\n{\n  int i, j, tmp;\n  //porzadkowanie rosnaco\n  for(i=0; i<n; i++)\n  {\n    for(j=1; j<n-i; j++)\n    {");
    printf("\n\tif(t[j]<t[j-1])\n\t{\n\t  tmp = t[j];\n\t  t[j] = t[j-1];\n\t  t[j-1] = tmp;\n\t}\n    }\n  }\n  printf(\"wypisanie elementow tablicy\\n\");\n  for(i=0; i<n; i++)");
    printf("\n    printf(\"%%4d\", t[i]);\n  printf(\"\\n\");\n  int licznik = 1;\n  for(i=1; i<n; i++)\n  {\n    if(t[i-1] == t[i])\n\tlicznik++;\n    else\n    {\n\tprintf(\"%%d - %%d razy\\n\", t[i-1], licznik);");
    printf("\n\tlicznik = 1;\n    }\n  }\n  printf(\"%%d - %%d razy\\n\", t[i-1], licznik);\n}");
    printf("\nAby uruchomic funkcje stworz tablice:");
    printf("\nPodaj wielkosc tablicy: ");
}

void pf17()
{
    printf("void odwroc(char str[])\n{\n  int dlugosc=strlen(str);\n  char new_str[dlugosc];\n  int i,j;\n  for(i=0,j=dlugosc-1;i<dlugosc && j>=0;i++,j--)\n    new_str[j] = str[i];\n  printf(\"Odwrocony napis: \");\n  for(i=0;i<strlen(str);i++)\n");
    printf("    printf(\"%%c\",new_str[i]);\n}");
    printf("\nAby uruchomic funkcje stworz napis do odwrocenia:");
}

void pf18()
{
    printf("int liczba_slow(char *lancuch)\n{\n  int slowo=0;\n  char znak;\n  while(*lancuch)\n  {\n    znak = *lancuch++;\n    if(isspace(znak))\n\tslowo+=1;\n    else\n\tcontinue;\n  }");
    printf("\n  printf(\"Liczba slow wynosi %%d\",slowo);\n}");
    printf("\nAbu uruchomic funkcje podaj ciag znakow: ");
}


