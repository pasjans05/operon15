// operon15.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

ifstream plik("liczby15.txt");

bool czyPierwsza(int n)
{
    if (n == 1) return false;
    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0) return false;
    }
    //cout << n << endl;
    return true;
}

int Jeden()
{
    int liczba;
    int policz = 0;
    for (int i = 0; i < 2000; i++)
    {
        plik >> liczba;
        if (czyPierwsza(liczba)) policz++;
    }
    plik.close();
    plik.open("liczby15.txt");
    return policz;
}

int suma(int n)
{   
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int binar(int n)
{
    int a = 0;
    int suma = 0;
    while (n > 0)
    {
        a = n % 2;
        suma += a;
        n /= 2;
    }
    return suma;
}

bool BSupPier(int liczba)
{
    int sumac = suma(liczba);
    int sumab = binar(liczba);
    if (czyPierwsza(liczba) && czyPierwsza(sumac) && czyPierwsza(sumab)) return true;
    else return false;
}

void Dwa()
{
    int liczba;
    int a = 0;
    int A[2000];
    int b = 0;
    for (int i = 0; i < 2000; i++)
    {
        plik >> liczba;
        if (BSupPier(liczba))
        {
            A[b] = liczba;
            b++;
        }
    }
    plik.close();
    plik.open("liczby15.txt");
    int c = sizeof(A) / sizeof(A[0]);
    sort(A, A + c);
    int i = 0;
    for (int i=0; i<2000; i++)
    {
        if (A[i] > 0) cout << A[i] << endl;
    }
}

int main()
{
    cout << "15.1: " << Jeden() << endl;
    cout << "15.2: " << endl;
    Dwa();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
