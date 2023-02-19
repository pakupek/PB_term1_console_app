#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <errno.h>
#include <direct.h>
#include <sys/types.h>
#include <string.h>
#include <limits.h>

extern int errno;

void fpt1()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd)); //Sciezka uzytkownika
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
            {
                printf("Problem z odczytem pliku!\n");
                return 0;
            }
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

            char *directory_name = "Task 7.1",*base_file="base_integers.txt",*base_even="even_number.txt",*base_odd="odd_number.txt";
            int check;
            check = mkdir(directory_name);
            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *base=fopen(base_file,"w"),*odd,*even;

                if(base == NULL)
                {
                    printf("Problem z zapisem do pliku %s!\n",base_file);
                    return 0;
                }

                even = fopen(base_even,"w");
                if(even == NULL)
                {
                    printf("Problem z zapisem do pliku '%s'\n",base_even);
                    fclose(base);
                    return 0;
                }

                odd = fopen(base_odd,"w");
                if(odd == NULL)
                {
                    printf("Problem z zapisem do pliku '%s'\n",base_odd);
                    fclose(base);
                    fclose(even);
                    return 0;
                }

                srand(time(NULL));
                //wpisywanie randomowych liczb do pliku base_integers.txt
                for(int i=0;i<10;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        int liczba = rand()%100+1;
                        fprintf(base,"%d ",liczba);
                    }
                    fprintf(base,"\n");
                }
                fclose(base);
                char utworz;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik z liczbami calkowitymi(Y/N): ");

                while(1)
                {
                    utworz = getchar();
                    printf("\n");
                    if(utworz == 'Y' || utworz == 'y')
                    {
                        FILE *wej1=fopen(base_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",base_file);
                            return 0;
                        }

                        char linia[CHAR_MAX];
                        getchar();
                        printf("Wprowadz liczby do pliku.Liczby oddziel spacja: ");
                        gets(linia);
                        int dl = strlen(linia),i=0;
                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej1,"\n");
                                i++;
                            }
                        }
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",base_file);
                        z7_1(base_file,base_even,base_odd);
                        printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                        chdir(cwd);
                        break;
                    }
                    if(utworz == 'N' || utworz == 'n')
                    {
                        z7_1(base_file,base_even,base_odd);
                        printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                        chdir(cwd);
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST)
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie '%s' juz istnieje\n",directory_name);
                    char utworz;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik z liczbami calkowitymi(Y/N): ");

                    while(1)
                    {
                        utworz = getchar();
                        printf("\n");
                        if(utworz == 'Y' || utworz == 'y')
                        {
                            FILE *wej1=fopen(base_file,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",base_file);
                                return 0;
                            }

                            char linia[CHAR_MAX];
                            getchar();
                            printf("Wprowadz liczby do pliku.Liczby oddziel spacja: ");
                            gets(linia);
                            int dl = strlen(linia),i=0;
                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej1,"\n");
                                    i++;
                                }
                            }
                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",base_file);
                            z7_1(base_file,base_even,base_odd);
                            printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                            chdir(cwd);
                            break;
                        }
                        if(utworz == 'N' || utworz == 'n')
                        {
                            z7_1(base_file,base_even,base_odd);
                            printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                }
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            char *directory_name = "Task 7.1",*base_file="base_integers.txt",*base_even="even_number.txt",*base_odd="odd_number.txt";
            int check;
            check = mkdir(directory_name);
            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *base=fopen(base_file,"w"),*odd,*even;

                if(base == NULL)
                {
                    printf("Problem z zapisem do pliku %s!\n",base_file);
                    return 0;
                }

                even = fopen(base_even,"w");
                if(even == NULL)
                {
                    printf("Problem z zapisem do pliku '%s'\n",base_even);
                    fclose(base);
                    return 0;
                }

                odd = fopen(base_odd,"w");
                if(odd == NULL)
                {
                    printf("Problem z zapisem do pliku '%s'\n",base_odd);
                    fclose(base);
                    fclose(even);
                    return 0;
                }

                srand(time(NULL));
                //wpisywanie randomowych liczb do pliku base_integers.txt
                for(int i=0;i<10;i++)
                {
                    for(int j=0;j<10;j++)
                    {
                        int liczba = rand()%100+1;
                        fprintf(base,"%d ",liczba);
                    }
                    fprintf(base,"\n");
                }
                fclose(base);
                char utworz;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik z liczbami calkowitymi(Y/N): ");

                while(1)
                {
                    utworz = getchar();
                    printf("\n");
                    if(utworz == 'Y' || utworz == 'y')
                    {
                        FILE *wej1=fopen(base_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",base_file);
                            return 0;
                        }

                        char linia[CHAR_MAX];
                        getchar();
                        printf("Wprowadz liczby do pliku.Liczby oddziel spacja: ");
                        gets(linia);
                        int dl = strlen(linia),i=0;
                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej1,"\n");
                                i++;
                            }
                        }
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",base_file);
                        z7_1(base_file,base_even,base_odd);
                        printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                        chdir(cwd);
                        break;
                    }
                    if(utworz == 'N' || utworz == 'n')
                    {
                        z7_1(base_file,base_even,base_odd);
                        printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                        chdir(cwd);
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }

            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST)
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie '%s' juz istnieje\n",directory_name);
                    char utworz;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik z liczbami calkowitymi(Y/N): ");

                    while(1)
                    {
                        utworz = getchar();
                        printf("\n");
                        if(utworz == 'Y' || utworz == 'y')
                        {
                            FILE *wej1=fopen(base_file,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",base_file);
                                return 0;
                            }

                            char linia[CHAR_MAX];
                            getchar();
                            printf("Wprowadz liczby do pliku.Liczby oddziel spacja: ");
                            gets(linia);
                            int dl = strlen(linia),i=0;
                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej1,"\n");
                                    i++;
                                }
                            }
                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",base_file);
                            z7_1(base_file,base_even,base_odd);
                            printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                            chdir(cwd);
                            break;
                        }
                        if(utworz == 'N' || utworz == 'n')
                        {
                            z7_1(base_file,base_even,base_odd);
                            printf("Wynik zadania znajduje sie w plikach %s i %s\n",base_even,base_odd);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                }
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}
//Dziala
void fpt2()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");

    while(1)
    {
        char cwd[1024];
        getcwd(cwd,sizeof(cwd));
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=40)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);
            int check;
            char directory_name[] = "Task 7.2",base_file1[]="entry_file1.txt",base_file2[]="entry_file2.txt";
            check = mkdir(directory_name);
            if(!check)
                printf("Utworzono katalog '%s'\n",directory_name);
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST)
                    printf("Katalog o nazwie '%s' juz istnieje\n",directory_name);
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            chdir(directory_name);
            FILE *plik1=fopen(base_file1,"w"),*plik2=fopen(base_file2,"w");
            if(plik1 == NULL)
                printf("Blad zapisu do pliku '%s'\n",base_file1);
            if(plik2 == NULL)
            {
                printf("Blad zapisu do pliku '%s'\n",base_file2);
                fclose(plik1);
            }
            //wpisywanie tekstu do plikow
            char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\n";
            char text2[] = "It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout.\nThe point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English.\n";
            fprintf(plik1,"%s",text1);
            fprintf(plik2,"%s",text2);
            fclose(plik1);  //zamykanie stworzonych plikow
            fclose(plik2);
            getchar();
            char stworzyc;
            printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
            while(1)
            {
                scanf("%c",&stworzyc);
                printf("\n");
                if(stworzyc == 'Y' || stworzyc == 'y')
                {
                    FILE *wej1=fopen(base_file1,"w"),*wej2=fopen(base_file2,"w");
                    if(plik1 == NULL)
                        printf("Blad zapisu do pliku '%s'\n",base_file1);
                    if(plik2 == NULL)
                    {
                        printf("Blad zapisu do pliku '%s'\n",base_file2);
                        fclose(plik1);
                    }
                    printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                    getchar();
                    for(int i=0;i<1;i++)
                    {
                        char linia[CHAR_MAX];
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                    }
                    printf("Zapisano do pliku %s\n",base_file1);
                    printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                    for(int i=0;i<1;i++)
                    {
                        char linia[CHAR_MAX];
                        gets(linia);
                        fprintf(wej2,"%s",linia);
                    }
                    printf("Zapisano do pliku %s\n",base_file2);
                    fclose(plik1);  //zamykanie stworzonych plikow
                    fclose(plik2);
                    char result[] = "task7_2_result.txt";
                    z7_2(base_file1,base_file2,result);
                    printf("Wynik zadania znajduje sie w pliku %s\n",result);
                    chdir(cwd);
                    break;
                }
                if(stworzyc == 'N' || stworzyc == 'n')
                {
                    char result[] = "task7_2_result.txt";
                    z7_2(base_file1,base_file2,result);
                    printf("Wynik zadania znajduje sie w pliku %s\n",result);
                    chdir(cwd);
                    break;
                }
                else
                {
                    printf("Nieprawidlowa wartosc!\n");
                    getchar();
                }
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.2",base_file1[]="entry_file1.txt",base_file2[]="entry_file2.txt";
            check = mkdir(directory_name);
            if(!check)
                printf("Utworzono katalog '%s'\n",directory_name);
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST)
                    printf("Katalog o nazwie '%s' juz istnieje\n",directory_name);
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            chdir(directory_name);
            FILE *plik1=fopen(base_file1,"w"),*plik2=fopen(base_file2,"w");
            if(plik1 == NULL)
                printf("Blad zapisu do pliku '%s'\n",base_file1);
            if(plik2 == NULL)
            {
                printf("Blad zapisu do pliku '%s'\n",base_file2);
                fclose(plik1);
            }
            //wpisywanie tekstu do plikow
            char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\n";
            char text2[] = "It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout.\nThe point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English.\n";
            fprintf(plik1,"%s",text1);
            fprintf(plik2,"%s",text2);
            fclose(plik1);  //zamykanie stworzonych plikow
            fclose(plik2);
            getchar();
            char stworzyc;
            printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
            while(1)
            {
                scanf("%c",&stworzyc);
                printf("\n");
                if(stworzyc == 'Y' || stworzyc == 'y')
                {
                    FILE *wej1=fopen(base_file1,"w"),*wej2=fopen(base_file2,"w");
                    if(plik1 == NULL)
                        printf("Blad zapisu do pliku '%s'\n",base_file1);
                    if(plik2 == NULL)
                    {
                        printf("Blad zapisu do pliku '%s'\n",base_file2);
                        fclose(plik1);
                    }
                    printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                    getchar();
                    for(int i=0;i<1;i++)
                    {
                        char linia[CHAR_MAX];
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                    }
                    printf("Zapisano do pliku %s\n",base_file1);
                    printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                    for(int i=0;i<1;i++)
                    {
                        char linia[CHAR_MAX];
                        gets(linia);
                        fprintf(wej2,"%s",linia);
                    }
                    printf("Zapisano do pliku %s\n",base_file2);
                    fclose(plik1);  //zamykanie stworzonych plikow
                    fclose(plik2);
                    char result[] = "task7_2_result.txt";
                    z7_2(base_file1,base_file2,result);
                    printf("Wynik zadania znajduje sie w pliku %s\n",result);
                    break;
                }
                if(stworzyc == 'N' || stworzyc == 'n')
                {
                    char result[] = "task7_2_result.txt";
                    z7_2(base_file1,base_file2,result);
                    printf("Wynik zadania znajduje sie w pliku %s\n",result);
                    break;
                }
                else
                {
                    printf("Nieprawidlowa wartosc!\n");
                    getchar();
                }
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt3()
{
    void z7_3(char *wej, char *wyj);
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));    //sciezka do katalogu glownego projektu
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");

    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=71)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.3",entry_file[]="entry_file1.txt",exit_file[]="task7_3_result.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);

                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                }
                char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\n";
                fprintf(plik1,"%s",text1);
                fclose(plik1);
                fclose(exit);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);

                        printf("Wprowadz napis do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        z7_3(entry_file,exit_file);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_3(entry_file,exit_file);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }

            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    //printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char stworzyc,entry_file[]="entry_file1.txt",exit_file[]="task7_3_result.txt";
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz napis do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wpisanie przez uzytkownika tekstu
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("\nZapisano zmiany w pliku %s\n",entry_file);

                            z7_3(entry_file,exit_file);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_3(entry_file,exit_file);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
        }

        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.3",entry_file[]="entry_file1.txt",exit_file[]="task7_3_result.txt";
            check = mkdir(directory_name);
            if(!check)
            {
                //printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);
                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                }
                char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\n";
                fprintf(plik1,"%s",text1);
                fclose(plik1);
                fclose(exit);
                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();
                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);

                        printf("Wprowadz napis do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie napisu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        z7_3(entry_file,exit_file);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd);
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_3(entry_file,exit_file);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd);
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char stworzyc,entry_file[]="entry_file1.txt",exit_file[]="task7_3_result.txt";
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz napis do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            z7_3(entry_file,exit_file);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_3(entry_file,exit_file);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt4()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=108)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.4",entry_file[]="float_numbers.txt",exit_file1[]="positive_numbers.txt",exit_file2[]="negative_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit1=fopen(exit_file1,"w"),*exit2=fopen(exit_file2,"w");
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);

                if(exit1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file1);
                    fclose(plik1);
                }
                if(exit2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file2);
                    fclose(plik1);
                    fclose(exit1);
                }

                srand(time(NULL));  //generowanie randomowych liczb rzeczywistych
                float liczba;
                for(int i=0;i<10;i++)
                {
                    for(int j=0;j<5;j++)
                    {
                        liczba = ((float)rand()/RAND_MAX)*(float)((((INT_MAX/2.0)-(INT_MIN/2.0))+1)+(INT_MIN/2.0));
                        fprintf(plik1,"%f ",liczba);
                    }
                    fprintf(plik1,"\n");
                }
                fclose(plik1);
                fclose(exit1);
                fclose(exit2);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);

                        printf("Wprowadz napis do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        z7_4(entry_file,exit_file1,exit_file2);
                        printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_4(entry_file,exit_file1,exit_file2);
                        printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="float_numbers.txt",exit_file1[]="positive_numbers.txt",exit_file2[]="negative_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz napis do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            z7_4(entry_file,exit_file1,exit_file2);
                            printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_4(entry_file,exit_file1,exit_file2);
                            printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.4",entry_file[]="float_numbers.txt",exit_file1[]="positive_numbers.txt",exit_file2[]="negative_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit1=fopen(exit_file1,"w"),*exit2=fopen(exit_file2,"w");
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);

                if(exit1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file1);
                    fclose(plik1);
                }
                if(exit2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file2);
                    fclose(plik1);
                    fclose(exit1);
                }

                srand(time(NULL));  //generowanie randomowych liczb rzeczywistych
                float liczba;
                for(int i=0;i<10;i++)
                {
                    for(int j=0;j<5;j++)
                    {
                        liczba = ((float)rand()/RAND_MAX)*(float)((((INT_MAX/2.0)-(INT_MIN/2.0))+1)+(INT_MIN/2.0));
                        fprintf(plik1,"%f ",liczba);
                    }
                    fprintf(plik1,"\n");
                }
                fclose(plik1);
                fclose(exit1);
                fclose(exit2);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);

                        printf("Wprowadz napis do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        z7_4(entry_file,exit_file1,exit_file2);
                        printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_4(entry_file,exit_file1,exit_file2);
                        printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="float_numbers.txt",exit_file1[]="positive_numbers.txt",exit_file2[]="negative_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz napis do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            z7_4(entry_file,exit_file1,exit_file2);
                            printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_4(entry_file,exit_file1,exit_file2);
                            printf("Wyniki zadania znajduja sie w pliku %s i %s\n",exit_file1,exit_file2);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt5()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=145)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.5",entry_file[]="text_file1.txt",exit_file1[]="text_file2.txt",exit_file2[]="task_result.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit1=fopen(exit_file1,"w"),*exit2=fopen(exit_file2,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);

                if(exit1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file1);
                    fclose(plik1);
                }
                if(exit2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file2);
                    fclose(plik1);
                    fclose(exit1);
                }

                char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.";
                char text2[]="It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

                fprintf(plik1,"%s",text1);
                fprintf(exit1,"%s",text2);

                fclose(plik1);
                fclose(exit1);
                fclose(exit2);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(exit_file1,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                        if(wej2 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",exit_file1);
                            fclose(wej1);
                        }
                        printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                        getchar();

                        gets(linia);
                        fprintf(wej2,"%s",linia);

                        fclose(wej2);
                        printf("Zapisano zmiany w pliku %s\n",exit_file1);

                        z7_5(entry_file,exit_file1,exit_file2);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_5(entry_file,exit_file1,exit_file2);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="text_file1.txt",exit_file1[]="text_file2.txt",exit_file2[]="task_result.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(exit_file1,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                            if(wej2 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",exit_file1);
                                fclose(wej1);
                            }
                            printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                            getchar();

                            gets(linia);
                            fprintf(wej2,"%s",linia);

                            fclose(wej2);
                            printf("Zapisano zmiany w pliku %s\n",exit_file1);

                            z7_5(entry_file,exit_file1,exit_file2);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_5(entry_file,exit_file1,exit_file2);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.5",entry_file[]="text_file1.txt",exit_file1[]="text_file2.txt",exit_file2[]="task_result.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit1=fopen(exit_file1,"w"),*exit2=fopen(exit_file2,"w");
                if(plik1 == NULL)
                    printf("Blad zapisu do pliku %s\n",entry_file);

                if(exit1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file1);
                    fclose(plik1);
                }
                if(exit2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file2);
                    fclose(plik1);
                    fclose(exit1);
                }

                char text1[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged.";
                char text2[]="It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

                fprintf(plik1,"%s",text1);
                fprintf(exit1,"%s",text2);

                fclose(plik1);
                fclose(exit1);
                fclose(exit2);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(exit_file1,"w");
                        if(wej1 == NULL)
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                        if(wej2 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",exit_file1);
                            fclose(wej1);
                        }
                        printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);

                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                        getchar();

                        gets(linia);
                        fprintf(wej2,"%s",linia);

                        fclose(wej2);
                        printf("Zapisano zmiany w pliku %s\n",exit_file1);

                        z7_5(entry_file,exit_file1,exit_file2);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_5(entry_file,exit_file1,exit_file2);
                        printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="text_file1.txt",exit_file1[]="text_file2.txt",exit_file2[]="task_result.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(exit_file1,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                            if(wej2 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",exit_file1);
                                fclose(wej1);
                            }
                            printf("Wprowadz napis do pierwszego pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            printf("Wprowadz napis do drugiego pliku(Enter-koniec): ");
                            getchar();

                            gets(linia);
                            fprintf(wej2,"%s",linia);

                            fclose(wej2);
                            printf("Zapisano zmiany w pliku %s\n",exit_file1);

                            z7_5(entry_file,exit_file1,exit_file2);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_5(entry_file,exit_file1,exit_file2);
                            printf("Wynik zadania znajduje sie w pliku %s\n",exit_file2);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt6()
{
    float z7_6(char *wej);
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=224)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.6",entry_file[]="float_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                //Tworzenie random float
                for(int i=0;i<5;i++)
                {
                    for(int k=0;k<5;k++)
                    {
                        float liczba = ((float)rand()/RAND_MAX)*(float)((((INT_MAX/2.0)-(INT_MIN/2.0))+1)+(INT_MIN/2.0));
                        fprintf(plik1,"%f ",liczba);
                    }
                    fprintf(plik1,"\n");
                }

                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }

                        printf("Wprowadz liczby rzeczywiste do pliku.Liczby oddziel spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        float wynik;
                        wynik = z7_6(entry_file);

                        printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file, wynik);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        float wynik;
                        wynik = z7_6(entry_file);
                        printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="float_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz liczby rzeczywiste do pliku.Liczby oddziel spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            float wynik;
                            wynik = z7_6(entry_file);
                            printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            float wynik;
                            wynik = z7_6(entry_file);
                            printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.6",entry_file[]="float_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                //Tworzenie random float
                for(int i=0;i<5;i++)
                {
                    for(int k=0;k<5;k++)
                    {
                        float liczba = ((float)rand()/RAND_MAX)*(float)((((INT_MAX/2.0)-(INT_MIN/2.0))+1)+(INT_MIN/2.0));
                        fprintf(plik1,"%f ",liczba);
                    }
                    fprintf(plik1,"\n");
                }

                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }

                        printf("Wprowadz liczby rzeczywiste do pliku.Liczby oddziel spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);
                        float wynik;
                        wynik = z7_6(entry_file);

                        printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        float wynik;
                        wynik = z7_6(entry_file);
                        printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="float_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz liczby rzeczywiste do pliku.Liczby oddziel spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);
                            float wynik;
                            wynik = z7_6(entry_file);

                            printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            float wynik;
                            wynik = z7_6(entry_file);
                            printf("Wynik sredniej arytmetycznej liczb z pliku %s wynosi: %.3f\n",entry_file,wynik);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                break;
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt7()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=244)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.7",entry_file[]="integer_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                //Tworzenie random int
                srand(time(NULL));
                for(int i=0;i<5;i++)
                {
                    for(int k=0;k<5;k++)
                    {
                        int liczba = rand()%((INT_MAX/10)-(INT_MIN/10)+1)+(INT_MIN/10);
                        fprintf(plik1,"%d ",liczba);
                    }
                    fprintf(plik1,"\n");
                }

                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }

                        printf("Wprowadz liczby calkowite do pliku.Liczby oddziel spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        int max,min;
                        z7_7(entry_file,&max,&min);

                        printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        int max,min;
                        z7_7(entry_file,&max,&min);
                        printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="integer_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz liczby calkowite do pliku.Liczby oddziel spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            int max,min;
                            z7_7(entry_file,&max,&min);
                            printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            int max,min;
                            z7_7(entry_file,&max,&min);
                            printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }

                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {

            int check;
            char directory_name[] = "Task 7.7",entry_file[]="integer_numbers.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                //Tworzenie random int
                srand(time(NULL));
                for(int i=0;i<5;i++)
                {
                    for(int k=0;k<5;k++)
                    {
                        int liczba = rand()%((INT_MAX/10)-(INT_MIN/10)+1)+(INT_MIN/10);
                        fprintf(plik1,"%d ",liczba);
                    }
                    fprintf(plik1,"\n");
                }

                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }

                        printf("Wprowadz liczby calkowite do pliku.Liczby oddziel spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        fprintf(wej1,"%s",linia);
                        fclose(wej1);
                        printf("Zapisano zmiany w pliku %s\n",entry_file);

                        int max,min;
                        z7_7(entry_file,&max,&min);

                        printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        int max,min;
                        z7_7(entry_file,&max,&min);
                        printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    printf("Katalog o nazwie %s juz istnieje\n",directory_name);
                    char entry_file[]="integer_numbers.txt",stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();
                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w");
                            if(wej1 == NULL)
                                printf("Blad zapisu do pliku '%s'\n",entry_file);

                            printf("Wprowadz liczby calkowite do pliku.Liczby oddziel spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            fprintf(wej1,"%s",linia);

                            fclose(wej1);
                            printf("Zapisano zmiany w pliku %s\n",entry_file);

                            int max,min;
                            z7_7(entry_file,&max,&min);
                            printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                            chdir(cwd);
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            int max,min;
                            z7_7(entry_file,&max,&min);
                            printf("Znalezione wartosci:\nMax: %d\nMin: %d\nz pliku %s\n",max,min,entry_file);
                            chdir(cwd);
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }

                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt8()
{
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=272)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.8",entry_file[]="your_text.txt",exit_file[]="changed_text.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                    return 0;
                }

                //wpisanie do pliku randomowego textu
                char text[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. ";
                fprintf(plik1,"%s",text);
                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }
                        printf("Wprowadz text do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        int dl=strlen(linia),i=0;

                        while(i<dl)
                        {
                            if(linia[i] == '.')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                fprintf(exit,"%c",linia[i]);
                                i++;
                                if(linia[i] == ' ')
                                {
                                    fprintf(wej1,"%c\n",linia[i]);
                                    fprintf(exit,"%c\n",linia[i]);
                                    i++;
                                }
                            }
                            fprintf(wej1,"%c",linia[i]);
                            fprintf(exit,"%c",linia[i]);
                            i++;
                        }
                        fprintf(wej1," ");
                        fclose(wej1);
                        fclose(exit);

                        printf("\nZapisano zmiany w pliku %s\n",entry_file);

                        char w1[CHAR_MAX],w2[CHAR_MAX];
                        printf("Wprowadz slowo ktore ma byc zmienione: ");
                        gets(w1);
                        printf("Wprowadz slowo do wstawienia: ");
                        gets(w2);

                        z7_8(entry_file,exit_file,&w1,&w2);

                        printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        char w1[CHAR_MAX],w2[CHAR_MAX];
                        getchar();
                        printf("Podaj slowo do zamiany: ");
                        gets(w1);
                        printf("Podaj slowo do wpisania: ");
                        gets(w2);

                        printf("\nZmieniam slowo %s na %s\n",w1,w2);
                        z7_8(entry_file,exit_file,&w1,&w2);

                        printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);

                    char stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();

                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                                return 0;
                            }
                            if(exit == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",exit_file);
                                fclose(wej1);
                                return 0;
                            }
                            printf("Wprowadz text do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            int dl=strlen(linia),i=0;

                            while(i<dl)
                            {
                                if(linia[i] == '.')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    fprintf(exit,"%c",linia[i]);
                                    i++;
                                    if(linia[i] == ' ')
                                    {
                                        fprintf(wej1,"%c\n",linia[i]);
                                        fprintf(exit,"%c\n",linia[i]);
                                        i++;
                                    }
                                }
                                fprintf(wej1,"%c",linia[i]);
                                fprintf(exit,"%c",linia[i]);
                                i++;
                            }
                            fprintf(wej1," ");
                            fclose(wej1);
                            fclose(exit);

                            printf("\nZapisano zmiany w pliku %s\n",entry_file);

                            char w1[CHAR_MAX],w2[CHAR_MAX];
                            printf("Wprowadz slowo ktore ma byc zmienione: ");
                            gets(w1);
                            printf("Wprowadz slowo do wstawienia: ");
                            gets(w2);
                            printf("\nZmieniam slowo %s na %s\n",w1,w2);
                            z7_8(entry_file,exit_file,&w1,&w2);

                            printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            char w1[CHAR_MAX],w2[CHAR_MAX];
                            getchar();
                            printf("Podaj slowo do zamiany: ");
                            gets(w1);
                            printf("Podaj slowo do wpisania: ");
                            gets(w2);

                            printf("\nZmieniam slowo %s na %s\n",w1,w2);
                            z7_8(entry_file,exit_file,&w1,&w2);

                            printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }

                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.8",entry_file[]="your_text.txt",exit_file[]="changed_text.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                    return 0;
                }

                //wpisanie do pliku randomowego textu
                char text[]="Lorem Ipsum is simply dummy text of the printing and typesetting industry.\nLorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.\nIt has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. ";
                fprintf(plik1,"%s",text);
                fclose(plik1);

                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }
                        printf("Wprowadz text do pliku(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        int dl=strlen(linia),i=0;

                        while(i<dl)
                        {
                            if(linia[i] == '.')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                fprintf(exit,"%c",linia[i]);
                                i++;
                                if(linia[i] == ' ')
                                {
                                    fprintf(wej1,"%c\n",linia[i]);
                                    fprintf(exit,"%c\n",linia[i]);
                                    i++;
                                }
                            }
                            fprintf(wej1,"%c",linia[i]);
                            fprintf(exit,"%c",linia[i]);
                            i++;
                        }
                        fprintf(wej1," ");
                        fclose(wej1);
                        fclose(exit);

                        printf("\nZapisano zmiany w pliku %s\n",entry_file);

                        char w1[CHAR_MAX],w2[CHAR_MAX];
                        printf("Wprowadz slowo ktore ma byc zmienione: ");
                        gets(w1);
                        printf("Wprowadz slowo do wstawienia: ");
                        gets(w2);

                        z7_8(entry_file,exit_file,&w1,&w2);

                        printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        char w1[CHAR_MAX],w2[CHAR_MAX];
                        getchar();
                        printf("Podaj slowo do zamiany: ");
                        gets(w1);
                        printf("Podaj slowo do wpisania: ");
                        gets(w2);

                        printf("\nZmieniam slowo %s na %s\n",w1,w2);
                        z7_8(entry_file,exit_file,&w1,&w2);

                        printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);

                    char stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasny plik do zadania(Y/N): ");
                    stworzyc = getchar();

                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*exit=fopen(exit_file,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                                return 0;
                            }
                            if(exit == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",exit_file);
                                fclose(wej1);
                                return 0;
                            }
                            printf("Wprowadz text do pliku(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            int dl=strlen(linia),i=0;

                            while(i<dl)
                            {
                                if(linia[i] == '.')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    fprintf(exit,"%c",linia[i]);
                                    i++;
                                    if(linia[i] == ' ')
                                    {
                                        fprintf(wej1,"%c\n",linia[i]);
                                        fprintf(exit,"%c\n",linia[i]);
                                        i++;
                                    }
                                }
                                fprintf(wej1,"%c",linia[i]);
                                fprintf(exit,"%c",linia[i]);
                                i++;
                            }
                            fprintf(wej1," ");
                            fclose(wej1);
                            fclose(exit);

                            printf("\nZapisano zmiany w pliku %s\n",entry_file);

                            char w1[CHAR_MAX],w2[CHAR_MAX];
                            printf("Wprowadz slowo ktore ma byc zmienione: ");
                            gets(w1);
                            printf("Wprowadz slowo do wstawienia: ");
                            gets(w2);
                            printf("\nZmieniam slowo %s na %s\n",w1,w2);
                            z7_8(entry_file,exit_file,&w1,&w2);

                            printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            char w1[CHAR_MAX],w2[CHAR_MAX];
                            getchar();
                            printf("Podaj slowo do zamiany: ");
                            gets(w1);
                            printf("Podaj slowo do wpisania: ");
                            gets(w2);

                            printf("\nZmieniam slowo %s na %s\n",w1,w2);
                            z7_8(entry_file,exit_file,&w1,&w2);

                            printf("Zmieniony text znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }

                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt9()
{
    void z7_9(char *wej1, char *wej2, char *wyj);
    char wybor,cwd[1024];
    getcwd(cwd,sizeof(cwd));
    getchar();
    printf("\nCzy wyswietlic kod funkcji?(Y/N): ");
    while(1)
    {
        wybor = getchar();
        printf("\n");
        if(wybor == 'Y' || wybor == 'y')
        {
            FILE *plik;
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
            char linia[256];
            int l=0;
            while(fgets(linia,256,plik)!=NULL)
            {
                if(l>=348)
                {
                    if(strlen(linia)<=1)
                        break;
                    puts(linia);
                }
                l++;
            }
            fclose(plik);

            int check;
            char directory_name[] = "Task 7.9",entry_file[]="last_names1.txt",entry_file2[]="last_names2.txt",exit_file[]="alphabetic_last_names.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*plik2=fopen(entry_file2,"w"),*exit=fopen(exit_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                if(plik2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file2);
                    fclose(plik1);
                    return 0;
                }
                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                    fclose(plik2);
                    return 0;
                }
                fclose(exit);
                //wpisanie do pliku randomowego textu
                char text[]="Elsher Solace Levine Thatcher Raven Bardot Hansley St.James Cromwell Collymore Stoll Verlice Adler Huxley Ledger Hayes Ford Finnegan";
                char text2[] = "Ashley Monroe West Langley Daughtler Madison Marley Ellis Hope Cassidy Beckett Gatlin Pierce Zimmerman Dawson Wilson Adair Gray Curran Crassus";
                int dl = strlen(text),i=0,dl2=strlen(text2);

                while(i<dl)
                {
                    if(text[i] != ' ')
                    {
                        fprintf(plik1,"%c",text[i]);
                        i++;
                    }
                    else
                    {
                        fprintf(plik1,"\n");
                        i++;
                    }

                }
                fclose(plik1);
                i=0;
                while(i<dl2)
                {
                    if(text2[i] != ' ')
                    {
                        fprintf(plik2,"%c",text2[i]);
                        i++;
                    }
                    else
                    {
                        fprintf(plik2,"\n");
                        i++;
                    }
                }
                fclose(plik2);
                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(entry_file2,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }
                        if(wej2 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",entry_file2);
                            fclose(wej1);
                            return 0;
                        }
                        printf("Wprowadz nazwiska do pierwszego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        int dl=strlen(linia),i=0;

                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej1,"\n");
                                i++;
                            }
                        }
                        fclose(wej1);
                        printf("\nZapisano zmiany w pliku %s\n",entry_file);
                        printf("Wprowadz nazwiska do drugiego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                        gets(linia);
                        dl=strlen(linia);
                        i=0;
                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej2,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej2,"\n");
                                i++;
                            }
                        }
                        fclose(wej2);
                        printf("\nZapisano zmiany w pliku %s\n",entry_file2);
                        z7_9(entry_file,entry_file2,exit_file);

                        printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego*/
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_9(entry_file,entry_file2,exit_file);
                        printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);

                    char stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                    stworzyc = getchar();

                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(entry_file2,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                                return 0;
                            }
                            if(wej2 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",entry_file2);
                                fclose(wej1);
                                return 0;
                            }
                            printf("Wprowadz nazwiska do pierwszego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            int dl=strlen(linia),i=0;

                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej1,"\n");
                                    i++;
                                }
                            }
                            fclose(wej1);
                            printf("\nZapisano zmiany w pliku %s\n",entry_file);
                            printf("Wprowadz nazwiska do drugiego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                            gets(linia);
                            dl=strlen(linia);
                            i=0;
                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej2,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej2,"\n");
                                    i++;
                                }
                            }
                            fclose(wej2);
                            printf("\nZapisano zmiany w pliku %s\n",entry_file2);

                            z7_9(entry_file,entry_file2,exit_file);

                            printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego*/
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {

                            z7_9(entry_file,entry_file2,exit_file);
                            printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }

                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
            int check;
            char directory_name[] = "Task 7.9",entry_file[]="last_names1.txt",entry_file2[]="last_names2.txt",exit_file[]="alphabetic_last_names.txt";
            check = mkdir(directory_name);

            if(!check)
            {
                printf("Utworzono katalog '%s'\n",directory_name);
                chdir(directory_name);
                FILE *plik1=fopen(entry_file,"w"),*plik2=fopen(entry_file2,"w"),*exit=fopen(exit_file,"w");    //tworzenie plikow w katalogu
                if(plik1 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file);
                    return 0;
                }
                if(plik2 == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",entry_file2);
                    fclose(plik1);
                    return 0;
                }
                if(exit == NULL)
                {
                    printf("Blad zapisu do pliku %s\n",exit_file);
                    fclose(plik1);
                    fclose(plik2);
                    return 0;
                }
                fclose(exit);
                //wpisanie do pliku randomowego textu
                char text[]="Elsher Solace Levine Thatcher Raven Bardot Hansley St.James Cromwell Collymore Stoll Verlice Adler Huxley Ledger Hayes Ford Finnegan";
                char text2[] = "Ashley Monroe West Langley Daughtler Madison Marley Ellis Hope Cassidy Beckett Gatlin Pierce Zimmerman Dawson Wilson Adair Gray Curran Crassus";
                int dl = strlen(text),i=0,dl2=strlen(text2);

                while(i<dl)
                {
                    if(text[i] != ' ')
                    {
                        fprintf(plik1,"%c",text[i]);
                        i++;
                    }
                    else
                    {
                        fprintf(plik1,"\n");
                        i++;
                    }

                }
                fclose(plik1);
                i=0;
                while(i<dl2)
                {
                    if(text2[i] != ' ')
                    {
                        fprintf(plik2,"%c",text2[i]);
                        i++;
                    }
                    else
                    {
                        fprintf(plik2,"\n");
                        i++;
                    }
                }
                fclose(plik2);
                char stworzyc;
                getchar();
                printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                stworzyc = getchar();

                while(1)
                {
                    printf("\n");
                    if(stworzyc == 'Y' || stworzyc == 'y')
                    {
                        FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(entry_file2,"w");
                        if(wej1 == NULL)
                        {
                            printf("Blad zapisu do pliku '%s'\n",entry_file);
                            return 0;
                        }
                        if(wej2 == NULL)
                        {
                            printf("Blad zapisu do pliku %s\n",entry_file2);
                            fclose(wej1);
                            return 0;
                        }
                        printf("Wprowadz nazwiska do pierwszego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                        getchar();

                        char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                        gets(linia);
                        int dl=strlen(linia),i=0;

                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej1,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej1,"\n");
                                i++;
                            }
                        }
                        fclose(wej1);
                        printf("\nZapisano zmiany w pliku %s\n",entry_file);
                        printf("Wprowadz nazwiska do drugiego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                        gets(linia);
                        dl=strlen(linia);
                        i=0;
                        while(i<dl)
                        {
                            if(linia[i] != ' ')
                            {
                                fprintf(wej2,"%c",linia[i]);
                                i++;
                            }
                            else
                            {
                                fprintf(wej2,"\n");
                                i++;
                            }
                        }
                        fclose(wej2);
                        printf("\nZapisano zmiany w pliku %s\n",entry_file2);

                        z7_9(entry_file,entry_file2,exit_file);

                        printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego*/
                        break;
                    }
                    if(stworzyc == 'N' || stworzyc == 'n')
                    {
                        z7_9(entry_file,entry_file2,exit_file);
                        printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                        chdir(cwd); //cofniecie sie do katalogu glownego
                        break;
                    }
                    else
                    {
                        printf("Nieprawidlowa wartosc!\n");
                        getchar();
                    }
                }
                break;
            }
            else
            {
                if(errno == EACCES)
                    printf("Sciezka do katalogu nie pozwala na pisanie\n");
                if(errno == EEXIST) //katalog juz istnieje
                {
                    chdir(directory_name);
                    char stworzyc;
                    getchar();
                    printf("Czy chcesz utworzyc wlasne pliki do zadania(Y/N): ");
                    stworzyc = getchar();

                    while(1)
                    {
                        printf("\n");
                        if(stworzyc == 'Y' || stworzyc == 'y')
                        {
                            FILE *wej1=fopen(entry_file,"w"),*wej2=fopen(entry_file2,"w");
                            if(wej1 == NULL)
                            {
                                printf("Blad zapisu do pliku '%s'\n",entry_file);
                                return 0;
                            }
                            if(wej2 == NULL)
                            {
                                printf("Blad zapisu do pliku %s\n",entry_file2);
                                fclose(wej1);
                                return 0;
                            }
                            printf("Wprowadz nazwiska do pierwszego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                            getchar();

                            char linia[CHAR_MAX];   //wprowadzanie tekstu przez uzytkownika
                            gets(linia);
                            int dl=strlen(linia),i=0;

                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej1,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej1,"\n");
                                    i++;
                                }
                            }
                            fclose(wej1);
                            printf("\nZapisano zmiany w pliku %s\n",entry_file);
                            printf("Wprowadz nazwiska do drugiego pliku.Nazwiska oddzielone spacja(Enter-koniec): ");
                            gets(linia);
                            dl=strlen(linia);
                            i=0;
                            while(i<dl)
                            {
                                if(linia[i] != ' ')
                                {
                                    fprintf(wej2,"%c",linia[i]);
                                    i++;
                                }
                                else
                                {
                                    fprintf(wej2,"\n");
                                    i++;
                                }
                            }
                            fclose(wej2);
                            printf("\nZapisano zmiany w pliku %s\n",entry_file2);

                            z7_9(entry_file,entry_file2,exit_file);

                            printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego*/
                            break;
                        }
                        if(stworzyc == 'N' || stworzyc == 'n')
                        {
                            z7_9(entry_file,entry_file2,exit_file);
                            printf("Posortowane nazwiska znajduje sie w pliku %s\n",exit_file);
                            chdir(cwd); //cofniecie sie do katalogu glownego
                            break;
                        }
                        else
                        {
                            printf("Nieprawidlowa wartosc!\n");
                            getchar();
                        }
                    }
                    break;
                }
                //warunek jesli nazwa katalogu jest za dluga
                if(errno == ENAMETOOLONG)
                    printf("Nazwa katalogu jest za dluga\n");
                break;
            }
            break;
        }
        else
        {
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}
