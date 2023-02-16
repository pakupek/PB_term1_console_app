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
//Blad zapisu do pliku even_numbers.txt
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
                printf("Problem z odczytem pliku!\n");
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
            char directory_name[] = "Task 7.1";
            int utworz,check;
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
            chmod(directory_name,0777);
            char base_file[]="base_integers.txt",base_even[]="even_number.txt",base_odd[]="odd_number.txt";
            FILE *base,*odd,*even;
            base = fopen(base_file,"w");
            if(base == NULL)
                printf("Problem z zapisem do pliku %s!\n",base_file);
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
            even = fopen(base_even,"w");
            if(even == NULL)
                printf("Problem z zapisem do pliku '%s'\n",base_even);
            odd = fopen(base_odd,"w");
            if(odd == NULL)
            {
                printf("Problem z zapisem do pliku '%s'\n",base_odd);
                fclose(even);
            }

            printf("Czy chcesz utworzyc wlasny plik z liczbami calkowitymi(1-yes/0-no); ");
            scanf("%d",&utworz);
            while(1)
            {
                if(utworz== 1)
                {
                    remove(base_file);
                    char nazwa[40];
                    getchar();
                    printf("Podaj nazwe pliku(max 40 znakow): ");
                    gets(nazwa);
                    FILE *file;
                    file = fopen(nazwa,"w");
                    if(file == NULL)
                        printf("Problem z zapisem do pliku!\n");
                    int wiersze,kolumny;
                    printf("Podaj ilosc wierszy do wpisania i ilosc liczb w wierszu...\n");
                    printf("Podaj ilosc wierszy: ");
                    scanf("%d",&wiersze);
                    printf("\nPodaj ilosc liczb w wierszu: ");
                    scanf("%d",&kolumny);
                    //warunek jesli dlugosci bede mniejse lub rowne 0 to funkcja nie ma sensu
                    while(wiersze<1 || kolumny <1)
                    {
                        printf("Ilosc wierszy lub ilosc liczb w wierszu nie moze byc mniejsza lub rowna 0!\n");
                        if(wiersze<1)
                        {
                            printf("Popraw ilosc wierszy: ");
                            scanf("%d",&wiersze);
                        }
                        if(kolumny<1)
                        {
                            printf("Popraw ilosc liczb w wierszu: ");
                            scanf("%d",&kolumny);
                        }
                    }
                    //Wpisywanie liczb wprowadzonych przez uzytkownika
                    for(int i=0;i<wiersze;i++)
                    {
                        for(int j=0;j<kolumny;j++)
                        {
                            int liczba;
                            printf("Podaj liczbe calkowita: ");
                            scanf("%d",&liczba);
                            fprintf(file,"%d ",liczba);
                        }
                        fprintf(file,"\n");
                    }
                    fclose(file);
                    z7_1(base_file,base_even,base_odd);
                    break;
                }
                if(utworz == 0)
                {
                    char base_file1[]="base_integer.txt",base_even1[]="even_numbers.txt",base_odd1[]="odd_numbers.txt";
                    z7_1(base_file,base_even,base_odd);
                    fclose(even);
                    fclose(odd);
                    fclose(base);
                    printf("Wynik zadania znajduje sie w plikach '%s' i '%s'\n",base_even1,base_odd1);

                    chdir(directory_name); //przejscie do utworzonego katalogu
                    FILE *base1,*odd1,*even1;
                    base1 = fopen(base_file1,"w");
                    if(base1 == NULL)
                        printf("Problem z zapisem do pliku %s!\n",base_file1);
                    srand(time(NULL));
                    //wpisywanie randomowych liczb do pliku base_integers.txt
                    for(int i=0;i<10;i++)
                    {
                        for(int j=0;j<10;j++)
                        {
                            int liczba = rand()%100+1;
                            fprintf(base1,"%d ",liczba);
                        }
                        fprintf(base1,"\n");
                    }
                    fclose(base1);
                    even1 = fopen(base_even1,"w");
                    if(even1 == NULL)
                        printf("Problem z zapisem do pliku '%s'\n",base_even1);
                    odd1 = fopen(base_odd1,"w");
                    if(odd1 == NULL)
                    {
                        printf("Problem z zapisem do pliku '%s'\n",base_odd1);
                        fclose(even1);
                    }
                    char linia[256];
                    while(fgets(linia,256,even)!=NULL)
                        fprintf(even1,"%s\n");
                    while(fgets(linia,256,odd)!=NULL)
                        fprintf(odd1,"%s\n");
                    fclose(even1);
                    fclose(odd1);
                    chdir(cwd);
                    char curr_cwd[1024];
                    printf("Current path: %s\n",cwd);
                    remove(base);
                    remove(odd);
                    remove(even);

                    break;
                }
                else
                {
                    printf("Niepoprawna wartosc!\n");
                    getchar();
                }
            }
            break;
        }
        if(wybor == 'N' || wybor == 'n')
        {
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
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
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
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt8()
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
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
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
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}

void fpt9()
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
            plik = fopen("lib_pliki_tekstowe.c","r");
            if(plik == NULL)
                printf("Problem z odczytem pliku!\n");
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
            printf("Niepoprawna wartosc!\n");
            getchar();
        }
    }
}
