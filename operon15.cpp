// operon15.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
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
    return policz;
}

int main()
{
    cout << "15.1: " << Jeden() << endl;
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
