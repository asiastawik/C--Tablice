#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double s_kolumna (int n, int m, int z[n][m], int nrk)
{
    double k=0;
    for (int i = 0; i < n; i++ )
    {
        k+=z[i][nrk];
    }

    k = k/n;
    return k;
}

double s_wiersz (int n, int m, int z[n][m], int nrw)
{
    double w=0;

    for (int i = 0; i < m; i++ )
    {
        w+=z[nrw][i]; //w=w+z..
    }

    w = w/m;
    return w;
}

double s_tablica (int n, int m, int z[n][m])
{
    double t=0;

    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++ )
        {
            t+=z[i][j]; //zliczenie ca³ej tablicy
        }
    }

    t=t/(n*m);
    return t;
}

int main(int argc, char **argv)
{
    int i, j;
    int N = 3; //w
    int M = 5;  //k
    int a[N][M];
     srand (time(NULL));
    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < M; j++ )
        {
            a[i][j] = rand() % 20;
        }
    }

    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < M; j++ )
            printf("%10d", a[i][j]); //odleglosc 10d

        printf("\n");
    }

int nrk = 2; //numer kolumny
int nrw = 2; //nr wiersza
double k = s_kolumna (N, M, a, nrk);
printf("Srednia wartosc kolumny %d = %f\n",nrk,k);

double w = s_wiersz (N, M, a, nrw);
printf("Srednia wartosc wiersza %d = %f\n",nrw,w);

double t = s_tablica (N, M, a);
printf("Srednia wartosc tablicy = %f\n",t);

return 0;
}
