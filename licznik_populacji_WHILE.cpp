// licznik_populacji_WHILE.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>  


using namespace std;

int populacja=1; 
int godzin=0;



int main()
{
	cout << "Petla while wykona sie tylko wtedy kiedy zostanie spelniony warunek, wiec moze sie ani razu nie wykonac"

	while (populacja <= 1000000)
	{
		godzin++;
		populacja = populacja * 2;

		cout << "Czas w godzinach " << godzin << endl;
		cout << "Liczba osobnikow w populacji " << populacja << endl;


	}

	

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
