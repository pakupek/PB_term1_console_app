#include <stdio.h>
#include <stdbool.h>

void z7_1(char *wej, char *parz, char *np)
{
    FILE *plik, *plik_p, *plik_np;
    plik = fopen(wej,"r");
    if(plik == NULL)
    {
        printf("Problem z odczytem pliku '%s'\n",wej);
        return;
    }
    plik_p = fopen(parz,"w");
    if(plik_p == NULL);
    {
        printf("Problem z zapisem pliku liczb parzystych '%s'\n",parz);
        fclose(plik);
        return;
    }
    plik_np = fopen(np,"w");
    if(plik_np == NULL)
    {
        printf("Problem z zapisem do pliku liczb nieparzystych '%s'\n",np);
        fclose(plik);
        fclose(plik_p);
        return;
    }
    int x;
    while(fscanf(plik,"%d",&x) != EOF)
    {
        if(x%2==0)
            fprintf(plik_p,"%d\n",x);
        else
            fprintf(plik_np,"%d\n",x);
    }
    fclose(plik);
    fclose(plik_p);
    fclose(plik_np);
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

int z7_7(char *wej)
{
    FILE *plik_wej;
    plik_wej = fopen(wej,"r");
    if(plik_wej == NULL)
    {
        printf("Problem z otwarciem pliku.");
    }
    int x,curr,min,max;
    curr = fscanf(plik_wej,"%d",&x);
    //printf("Wartosc curr: %d\n",curr);
    while(fscanf(plik_wej,"%d",&x) != EOF)
    {
        if(x<=curr)
        {
            curr = x;
            min = curr;
            //printf("Min: %d\n",minimal);
        }
        else
        {
            //curr = x;
            max = x;
            //printf("Max: %d\n",max);
        }
    }

    printf("Wartosc minimalna: %d\nWartosc maksymalna: %d\n",min,max);
}

void z7_8(char *wej, char *wyj, char *w1, char *w2)
{
    FILE *plik_wej, *plik_wyj;
    plik_wej = fopen(wej,"r");
    if(plik_wej == NULL)
        printf("Problem z otwarciem pliku.");
    plik_wyj = fopen(wyj,"w");
    if(plik_wyj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik_wyj);
        return;
    }
    char slowo[10]="",znak;
    int i=0,n=0,result;
    while(fscanf(plik_wej,"%c",&znak) != EOF)
    {
        if(isspace(znak) == 0)
        {
            slowo[i] = znak;
            i++;
        }
        else
        {
            if(strcmp(slowo,w1) == 0)
            {

                fprintf(plik_wyj,"%s",w2);
                fprintf(plik_wyj," ");
                for(n=0;n<i;n++)
                    slowo[n] = 0;
                i=0;
            }
            else
            {
                fprintf(plik_wyj,"%s",slowo);
                fprintf(plik_wyj," ");
                for(n=0;n<i;n++)
                    slowo[n] = 0;
                i=0;
            }
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
        printf("Problem z otwarciem pliku.");
    plik_wej2 = fopen(wej2,"r");
    if(plik_wej2 == NULL)
    {
        printf("Problem z otwarciem pliku.");
        fclose(plik_wej1);
    }
    plik_wyj = fopen(wyj,"w");
    if(plik_wyj == NULL)
    {
        printf("Problem z zapisem do pliku.");
        fclose(plik_wej1);
        fclose(plik_wej2);
    }

    char nazwisko[20],znak1,znak2,str[20],strtmp[20];
    int k=0,element_1=0,element_2=0,element=0,wyraz=0,j=0,i=0,result,index=0;

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
    char tab[element][element];

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
    for(i=0;i<index;i++)
    {
        printf("%i.\"%s\"\n",i+1,tab[i]);
    }

    //Sortowanie

    for(i=0;i<index;i++)
    {
        for(j=0;j<index-i-1;j++)
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
    for(i=0;i<index;i++)
    {
        fprintf(plik_wyj,"%s\n",tab[i]);
    }

    fclose(plik_wej1);
    fclose(plik_wej2);
    fclose(plik_wyj);
}
