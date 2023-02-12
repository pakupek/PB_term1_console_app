#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

void pole_obwod(float a, float b, float c, float *pole, float *R)
{
    if(a<=0 || b<=0 || c<=0)
        return false;
    float p2=(a+b+c)/2;
    float p=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
    (*R) = (a*b*c)/(4*p);
    (*pole) = 3.14 * (*R) * (*R);
}

int min_max(int t[], int n, int *min, int *max, int *licznik_max, int *licznik_min)
{
    int minimum,maximum,licznik_maximum=0,licznik_minimum=0;
    minimum = t[0];
    maximum = t[0];
    //szukanie minimum
    for(int i=0;i<n;i++)
    {
        if(minimum>=t[i])
        {
            minimum = t[i];
            *min = minimum;
        }
    }
    //szukanie maximum
    for(int i=0;i<n;i++)
    {
        if(maximum<t[i])
        {
            maximum = t[i];
            *max = maximum;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(t[i] == *max)
        {
            licznik_maximum += 1;
            *licznik_max = licznik_maximum;
        }
        if(t[i] == *min)
        {
            licznik_minimum += 1;
            *licznik_min = licznik_minimum;
        }
    }
}

void mins(int ar[], int n, int *m1, int *m2, int *m3)
{
    int tmp;
    printf("Otrzymana tablica:\n");
    for(int i=0;i<n;i++)
    {
        printf("%4d",ar[i]);
    }
    //sortowanie
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }
    printf("\n");
    *m1 = ar[0];
    *m2 = ar[1];
    *m3 = ar[2];
}

void wypelnijLosowo(int t[], int n, int a, int b)
{
    int i;
    srand(time(NULL));
    if(a>b)
    {
        i = a;
        a = b;
        b = i;
    }
    for(int i=0;i<n;i++)
        t[i] = rand()%(b-a+1)+a;
    printf("Otrzymana tablica:\n");
    for(int i=0;i<n;i++)
        printf("%d,",t[i]);
}

void odwroc_napis(char p[])
{
    int length = strlen(p),i=length;
    char nowy[length+1];
    for(int j=0;j<=length;j++)
    {
        nowy[i] = p[j];
        i--;
    }
    nowy[length+1] = '\O';
    printf("Wprowadzony napis: ");
    puts(p);
    printf("Odwrocony napis: ");
    for(int i=0;i<length+1;i++)
        printf("%c",nowy[i]);
}

void lower_to_upper(char p[])
{
    int length = strlen(p);
    printf("Po zamiane malych liter: ");
    for(int i=0;i<length+1;i++)
    {
        if(p[i]>95)
        {
            p[i] = p[i]-32;
            printf("%c",p[i]);
        }
        else
            printf("%c",p[i]);
    }
}

void fill_array(int n, float ar[], float in, float out)
{
    srand(time(NULL));
    float i;
    int l=0;
    float liczba;
    if(in>out)
    {
        i = in;
        in = out;
        out = i;
    }
    while(l<n)
    {
        liczba = (float)(rand())/ (float)(rand());
        if(liczba>in && liczba<out)
        {
            ar[l] = liczba;
            l++;
        }
    }
    printf("Utworzona tablica:\n");
    for(int i=0;i<n;i++)
        printf("%.1f ",ar[i]);
}

void roundArray(float in[], int out[], int n)
{
    for(int i=0;i<n;i++)
        out[i] = round(in[i]);
}

bool someEven(int ar[], int n)
{
    bool czy_jest = false;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            czy_jest = true;
    }
    return czy_jest;
}

float pole_obwod_kola(float R, float *p, float *o)
{
    *p = 3.14*R*R;
    *o = 2*3.14*R;
}

void minimum_maximum(int t[],int n, int *min, int *max)
{
    *min = t[0];
    *max = t[0];
    for(int i=0;i<n;i++)
    {
        if(t[i]<*min)
            *min = t[i];
        if(t[i]>*max)
            *max = t[i];
    }
}

void alpha_num(char p[], int *c, int *l)
{
    int length = strlen(p);
    int num_count=0,aplha_count=0;
    for(int i=0;i<length+1;i++)
    {
        if(p[i]>=48 && p[i]<=57)
            num_count++;
        if(p[i]>=65 && p[i]<=90 || p[i]>=97 && p[i]<=122)
            aplha_count++;
    }
    *c = num_count;
    *l = aplha_count;
}

int min_count(int ar[], int n, int *count)
{
    int minimum=ar[0],ilosc=0;
    for(int i=0;i<n;i++)
        if(ar[i]<minimum)
            minimum = ar[i];
    for(int i=0;i<n;i++)
        if(ar[i] == minimum)
            ilosc++;
    *count = ilosc;
}

int pierwiastki(float a, float b, float c, float *x1, float *x2)
{
    float delta;
    delta = (b*b)-4*a*c;
    printf("Delta: %f\n",delta);
    if(delta>0)
    {
        *x1 = (-b-sqrt(delta))/(2*a);
        *x2 = (-b+sqrt(delta))/(2*a);
        return 2;
    }
    if(delta == 0)
    {
        *x1 = -b/(2*a);
        return 1;
    }
    if(delta<0)
        return 0;
}

bool read(char str[], int *value)
{
    printf("%s", str);
    int result = scanf("%d", value);
    getchar();
    if(result == 1)
        return true;
    else
        return false;
}

void wypisz(float *ar, int n)
{
    for(int i=0;i<n;i++)
        printf("%.2f,",ar[i]);
}

void wypelnijB(int A[], int B[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            B[i] = B[i-1] - A[i];
        }
        if(i%2==0)
        {
            if(i==0)
                B[i] = A[i];
            else
                B[i] = B[i-1] + A[i];
        }
    }
}

void skaluj(float t[], int n)
{
    int i;
    float min=t[0],max=t[0];
    for (i = 1; i < n; i++)
    {
        if (t[i] < min)
            min = t[i];
        if (t[i] > max)
            max = t[i];
    }
    for (i = 0; i < n; i++)
        t[i] = (t[i] - min) / (max - min);
}

void zamien(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortuj_babelkowo(int arr[],int n)
{
    int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                zamien(&arr[j], &arr[j+1]);
            }
        }
    }
}

void sort_by_selection(char **arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        swap_values(arr, i, min_idx);
    }
}

void swap_values(char **arr, int idx1, int idx2)
{
    char *temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

int crop(float ar[], int n, float a, float b)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < a)
        {
            ar[i] = a;
            count++;
        }
        else if (ar[i] > b)
        {
            ar[i] = b;
            count++;
        }
    }
    return count;
}

void removeRepeats(int in[], int out[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < index; j++)
        {
            if (in[i] == out[j])
                break;
        }
        if (j == index)
        {
            out[index] = in[i];
            index++;
        }
    }
    for (int i = index; i < n; i++)
        out[i] = 0;
}

void doubleEven(int in[], int out[], int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(in[i]%2==0)
        {
            if(k<n)
            {
                for(int j=0;j<2;j++)
                {
                    out[k] = in[i];
                    k++;
                }
            }
            else
                break;
        }
        if(in[i]%2==1)
        {
            if(k<n)
            {
                out[k] = in[i];
                k++;
            }
            else
                break;
        }
    }
}
