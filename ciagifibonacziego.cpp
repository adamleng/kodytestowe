// ciagifibonacziego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

long double  fib[1000000]; int n;

int main()
{
	cout << "Ile liczb Fibonacciego mam wyznaczyc: ";
	cin >> n;

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	cout << setprecision(10000);

	//for (int i=0; i<n; i++)
	//{
	//    cout<<endl<<"wyraz nr"<<i+1<<": "<<fib[i];
	//}

	cout << endl << "wyraz nr " << n << ":" << fib[n - 1];

	//cout<<"zlota liczba: "<<fib[n-1]/fib[n-2];

	return 0;
	


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
