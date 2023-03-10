#include <stdio.h>
#include <stdbool.h>

void z7_1(char *wej, char *parz, char *np)
{
    FILE *input = fopen(wej, "r");
    if (input == NULL) {
        printf("Nie udalo sie otworzyc pliku %s\n", wej);
        return;
    }

    FILE *even = fopen(parz, "w");
    if (even == NULL) {
        printf("Nie udalo sie otworzyc pliku %s\n", parz);
        fclose(input);
        return;
    }

    FILE *odd = fopen(np, "w");
    if (odd == NULL) {
        printf("Nie udalo sie otworzyc pliku %s\n", np);
        fclose(input);
        fclose(even);
        return;
    }

    int number;
    while (fscanf(input, "%d", &number) == 1) {
        if (number % 2 == 0) {
            fprintf(even, "%d\n", number);
        } else {
            fprintf(odd, "%d\n", number);
        }
    }
    fclose(input);
    fclose(even);
    fclose(odd);
}

void z7_2(char *wej1, char *wej2, char *wyj)
{
    FILE *plik1, *plik2, *plik;
    plik1 = fopen(wej1, "r");
    if(plik1==NULL)
        return;
    plik2 = fopen(wej2, "r");
    if(plik2==NULL)
    {
        fclose(plik1);
        return;
    }
    plik = fopen(wyj, "w");
    if(plik==NULL)
    {
        fclose(plik1);
        fclose(plik2);
        return;
    }
    char linia[10];
    while(fgets(linia, 10, plik1)!=NULL)
        fprintf(plik, "%s", linia);
    fprintf(plik,"\n");
    while(fgets(linia, 10, plik2)!=NULL)
        fprintf(plik, "%s", linia);
    fprintf(plik,"\n");
    fclose(plik1);
    fclose(plik2);
    fclose(plik);
}

void z7_3(char *wej, char *wyj)
{
    FILE *plik, *plik_wyj;
    plik = fopen(wej, "r");
    if(plik==NULL)
        return;
    plik_wyj = fopen(wyj, "w");
    if(plik_wyj==NULL)
    {
        fclose(plik);
        return;
    }
    bool czy_wyraz = false;
    char znak;
    while(fscanf(plik, "%c", &znak)!=EOF)
    {
        if(czy_wyraz == false && isupper(znak)!=0)
        {
            fprintf(plik_wyj, "%c", znak);
            do
            {
                fscanf(plik, "%c", &znak);
                fprintf(plik_wyj, "%c", znak);
            }while(isspace(znak)==0);
        }
        if(isspace(znak)!=0)
        {
            czy_wyraz = false;
            continue;
        }
        else
            czy_wyraz = true;
    }
    fclose(plik);
    fclose(plik_wyj);
}

void z7_4(char *wej, char *dod, char *uj)
{
    FILE *plik, *plik_dod, *plik_uj;
    plik = fopen(wej,"r");
    if(plik == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return;
    }
    plik_dod = fopen(dod,"w");
    if(plik_dod == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik);
        return;
    }
    plik_uj = fopen(uj,"w");
    if(plik_uj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik);
        fclose(plik_dod);
        return;
    }
    float x;
    while(fscanf(plik,"%f",&x) != EOF)
    {
        if(x<0)
            fprintf(plik_uj,"%f\n",x);
        else
            fprintf(plik_dod,"%f\n",x);
    }
    fclose(plik);
    fclose(plik_dod);
    fclose(plik_uj);
}

void z7_5(char *wej1, char *wej2, char *wyj)
{
    FILE *plik_wej1, *plik_wej2, *plik_wyj;
    plik_wej1 = fopen(wej1,"r");
    if(plik_wej1 == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return;
    }
    plik_wej2 = fopen(wej2,"r");
    if(plik_wej2 == NULL)
    {
        printf("Problem z otwarciem pliku.");
        fclose(plik_wej1);
        return;
    }
    plik_wyj = fopen(wyj,"w");
    if(plik_wyj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik_wej1);
        fclose(plik_wej2);
        return;
    }
    char *slowo=calloc(1,sizeof(*slowo)),*slowo2=calloc(1,sizeof(*slowo2));
    int i=0,j=0;
    char c,d;
    while((c = fgetc(plik_wej1))!=EOF)
    {
        if(c != ' ')
        {
            if(c == ',' || c=='.')
                slowo[i] = '\0';
            else
            {
                slowo[i] = c;
                i++;
                slowo = realloc(slowo,i);
            }
        }
        if(c ==' ' )
        {
            while((d = fgetc(plik_wej2))!=EOF)
            {
                if(d != ' ')
                {
                    if(d == ',' || d =='.')
                        slowo2[j] = '\0';
                    else
                    {
                        slowo2[j] = d;
                        j++;
                        slowo2 = realloc(slowo2,j);
                    }
                }
                if(d == ' ')
                {
                    if(strcmp(slowo,slowo2)==0)
                    {
                        fprintf(plik_wyj,"%s\n",slowo);
                        break;
                    }
                    for(int k=0;k<j;k++)
                        slowo2[k] = '\0';
                    j=0;
                }
            }
            for(int k=0;k<i;k++)
                slowo[k] = '\0';
            i=0;
            rewind(plik_wej2);
            continue;
        }
    }
    fclose(plik_wej1);
    fclose(plik_wej2);
    fclose(plik_wyj);
}

float z7_6(char *wej)
{
    int suma=0,licznik=0;
    float srednia,x;
    FILE *plik_wej;
    plik_wej = fopen(wej,"r");
    if(plik_wej == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return 0;
    }
    while(fscanf(plik_wej,"%f",&x) != EOF)
    {
        suma += x;
        licznik += 1;
    }
    srednia = (float)suma/licznik;
    return srednia;
}

int z7_7(char *wej, int* maximum, int *minimum)
{
    FILE *plik_wej;
    plik_wej = fopen(wej,"r");
    if(plik_wej == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return 0;
    }
    int x,min_curr,max_curr,curr;
    fscanf(plik_wej,"%d%d",&min_curr,&max_curr);
    rewind(plik_wej);
    while(fscanf(plik_wej,"%d",&x) != EOF)
    {
        if(x<=min_curr)
        {
            min_curr = x;
            *minimum = min_curr;
        }
        if(x>=max_curr)
        {
            max_curr = x;
            *maximum = max_curr;
        }
    }
    return 0;
}

void z7_8(char *wej, char *wyj, char *w1, char *w2)
{
    FILE *plik_wej, *plik_wyj;
    plik_wej = fopen(wej,"r");
    if(plik_wej == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return;
    }
    plik_wyj = fopen(wyj,"w");
    if(plik_wyj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik_wyj);
        return;
    }
    char *slowo=calloc(1,sizeof(*slowo));
    int i=0,j=0;
    char c,znak;
    bool interpunkcja_przec=false,interpunkcja_krop=false;
    while((c=fgetc(plik_wej))!=EOF)
    {
        if(c != ' ')
        {
            if(c!=',' || c!='.')
            {
                slowo[i] = c;
                i++;
                slowo = realloc(slowo,i);
            }
            else
            {
                if(c == ',')
                {
                    znak = c;
                    interpunkcja_przec = true;
                }
                if(c == '.')
                {
                    znak = c;
                    interpunkcja_krop = true;
                }
            }
        }
        if(c == ' ')
        {
            if(strcmp(slowo,w1)==0)
            {
                if(interpunkcja_krop)
                    fprintf(plik_wyj,"%s%c\n",w2,znak);
                if(interpunkcja_przec)
                    fprintf(plik_wyj,"%s%c ",w2,znak);
                if(!interpunkcja_krop && !interpunkcja_przec)
                    fprintf(plik_wyj,"%s ",w2);
            }
            if(strcmp(slowo,w1)!=0)
            {
                if(interpunkcja_krop)
                    fprintf(plik_wyj,"%s%c\n",slowo,znak);
                if(interpunkcja_przec)
                    fprintf(plik_wyj,"%s%c ",slowo,znak);
                if(!interpunkcja_krop && !interpunkcja_przec)
                    fprintf(plik_wyj,"%s ",slowo);
            }
            for(int k=0;k<i;k++)
                slowo[k] = '\0';
            i=0;
            interpunkcja_przec = false;
            interpunkcja_krop = false;
            continue;
        }
    }
    fclose(plik_wej);
    fclose(plik_wyj);
}

void z7_9(char *wej1, char *wej2, char *wyj)
{
    FILE *plik_wej1, *plik_wej2, *plik_wyj;
    plik_wej1 = fopen(wej1,"r");
    if(plik_wej1 == NULL)
    {
        printf("Problem z otwarciem pliku.");
        return 0;
    }
    plik_wej2 = fopen(wej2,"r");
    if(plik_wej2 == NULL)
    {
        printf("Problem z otwarciem pliku.");
        fclose(plik_wej1);
        return 0;
    }
    plik_wyj = fopen(wyj,"w");
    if(plik_wyj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik_wej1);
        fclose(plik_wej2);
        return 0;
    }
    char nazwisko[10],znak1,znak2,str[10],strtmp[10];
    int element_1=0,element_2=0,element=0,result,index=0;
    while(fscanf(plik_wej1,"%c",&znak1) != EOF)
    {
        if(isspace(znak1) == 0)
        {
            continue;
        }
        else
        {
            element_1 += 1;
            continue;
        }
    }
    while(fscanf(plik_wej2,"%c",&znak2) != EOF)
    {
        if(isspace(znak2) == 0)
        {
            continue;
        }
        else
        {
            element_2 += 1;
            continue;
        }
    }
    element = element_1 + element_2;
    char tab[element][50];
    rewind(plik_wej1);
    rewind(plik_wej2);
    while((!feof(plik_wej1))&&(index<element_1))
    {
         result=fscanf(plik_wej1,"%s",nazwisko);
         if(result != 1)
         {
            printf("Blad odczytu!");
            break;
         }
         else
         {
            strcpy(tab[index],nazwisko);
            index++;
         }
    }
    while((!feof(plik_wej2))&&(index<element))
    {
         result=fscanf(plik_wej2,"%s",nazwisko);
         if(result != 1)
         {
            printf("Blad odczytu!");
            break;
         }
         else
         {
            strcpy(tab[index],nazwisko);
            index++;
         }
    }
    //Sortowanie
    for(int i=0;i<index;i++)
    {
        for(int j=0;j<index-i-1;j++)
        {
            if(strcmp(tab[j],tab[j+1])>0)
            {
                //zamiana miejscami
                strcpy(strtmp,tab[j]);
                strcpy(tab[j],tab[j+1]);
                strcpy(tab[j+1],strtmp);
            }
        }
    }
    //wpisanie do pliku
    for(int i=0;i<index;i++)
        fprintf(plik_wyj,"%s\n",tab[i]);
    fclose(plik_wej1);
    fclose(plik_wej2);
    fclose(plik_wyj);
}
