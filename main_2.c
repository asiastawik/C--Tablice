#include <stdlib.h>
#include <stdio.h> //musi byc do malloc

int funkcja(int N, int t[N], int X)
{
    int a, b, c;
    a=0;
    b=N-1;

    poczatek:
        c = ( a + b ) / 2;
        if ( t[c] == X )
            goto koniec;
        else if ( t[c] > X )
            b = c - 1;
        else
            a = c + 1;

        if ( a <= b )
            goto poczatek;
        else printf("Nie znaleziono liczby\n");
            return a; //czyli 0

    koniec:
        printf("Wartosc jest w tablicy na miejscu %d\n", c);
        return -1;
}

void drukuj_tablice(int N, int dane[])//void bo nie oddaje zadnej wartosci
{
    for ( int i = 0; i < N; i++ )
        {
            printf("%d", dane[i]);
            printf("\n");
        }
}

void wstaw_do_tablicy(int X, int k, int N, int dane[])
{
    for( int i = N - 1; i >= k; i--) //N-1 to ostatni element tablicy, bo pierwszy el to 0
    dane[i + 1] = dane[i];
    dane[k] = X;
}

int main()
{
        int X;
        printf("Podaj liczbe ktora chcesz wyszukac: ");
        scanf("%d", &X);

    int N = 0; //Program startuje z pustą tablicą (która będzie rozszerzana dynamicznie)
    int * dane;
        dane = malloc(1 * sizeof(int)); //ile elementow razy 4 bajty (int)
        dane[N]=X;
        N++; //Teraz tablica ma 1 element.

    if (dane == NULL) //jesli malloc zwraca 0 to sie nie da przydzielic
        {
            printf("Nie moglem zadeklarowac tablicy!\n");
            return 1;
        }

    k4: drukuj_tablice(N, dane);

    k5: printf("Podaj liczbe ktora chcesz wyszukac: ");
        scanf("%d", &X);
        int k = funkcja(N, dane, X);
        if ( k == -1) // czyli znaleziono
        goto k5;  // tam gdzie czytamy kolejną wartość `X`

    else
        dane = realloc( dane, ( N + 1 ) * sizeof( int )); //zmienia przydział pamięci powiększając lub zmniejszając obszar tablicy
         // tablica jest o 1 większa i teraz musimy wszystkie elementy
         // tablicy począwszy od k przesunąć o jedno miejsce w prawo
         // Zaczynamy, oczywiście od końca…

    wstaw_do_tablicy(X, k, N, dane); //k to a czyli 0

    N++; //N to numer komórki w tablicy

    goto k4;

return 0;
}
