#include <stdio.h>
#include <stdbool.h>

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
        else
            continue;
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


