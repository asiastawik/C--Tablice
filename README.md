# Zarządzanie Tablicą i Obliczanie Średnich

## Opis projektu

Projekt składa się z dwóch części: 
1. Tworzenia i inicjalizacji dwuwymiarowej tablicy oraz obliczania średnich wartości elementów w wybranych wierszach i kolumnach.
2. Dynamicznego zarządzania tablicą liczb całkowitych, z możliwością dodawania nowych elementów oraz wyszukiwania ich za pomocą algorytmu wyszukiwania binarnego.

## Część 1: Tworzenie i inicjalizacja tablicy

### Funkcjonalność

- **Tworzenie tablicy**: Program tworzy dwuwymiarową tablicę `a` o wymiarach 3x5, wypełnioną losowymi liczbami całkowitymi z zakresu 0-19.
  
- **Obliczanie średnich**:
  - **Funkcja `s_kolumna(int nrk)`**: Oblicza średnią wartość elementów w określonej kolumnie `nrk`.
  - **Funkcja `s_wiersz(int nrw)`**: Oblicza średnią wartość elementów w określonym wierszu `nrw`.
  - **Funkcja `s_tablica()`**: Oblicza średnią wartość wszystkich elementów w tablicy, jednak dzieli przez sumę wierszy i kolumn, co jest błędem (powinno być `n * m`).

### Wyświetlanie wyników

Program wyświetla zawartość tablicy oraz średnie wartości dla wskazanej kolumny, wiersza i całej tablicy.

# Część 2: Dynamiczne Zarządzanie Tablicą

## Opis projektu

Program dynamicznie zarządza tablicą liczb całkowitych, umożliwiając dodawanie nowych elementów oraz ich wyszukiwanie za pomocą algorytmu wyszukiwania binarnego.

## Funkcjonalności

- **Dynamiczne zarządzanie tablicą**: Program pozwala na dodawanie nowych elementów do tablicy.
- **Wyszukiwanie binarne**: Implementacja algorytmu, który sprawdza, czy podana liczba znajduje się w tablicy.

## Funkcje

### 1. `wyszukaj(int t[], int n, int x)`

- **Opis**: Wyszukuje wartość `X` w posortowanej tablicy `t`.
- **Zwraca**: Indeks znalezionej wartości lub -1, jeśli wartość nie została znaleziona.

### 2. `drukuj_tablice(int t[], int n)`

- **Opis**: Wyświetla wszystkie elementy tablicy.

### 3. `wstaw_do_tablicy(int **t, int *n, int x)`

- **Opis**: Wstawia nową wartość `X` na odpowiednią pozycję w tablicy, przesuwając istniejące elementy.
