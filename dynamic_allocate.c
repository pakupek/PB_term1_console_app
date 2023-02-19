#include <stdio.h>
#include <stdlib.h>

void Da1()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da2()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da3()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da4()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da5()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da6()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da7()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da8()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da9()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da10()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}

void Da11()
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
            plik = fopen("lib_dynamic_allocate.c","r");
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
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            break;
        }
        else
        {
            printf("Niewlasciwy wybor!\n");
            getchar();
        }
    }
}
