

#include "pch.h"
#include <iostream>
#include <string>





using namespace std;

int  wiek, pensja;



int main()
{
	cout << "Witaj Kandydacie na ziecia" << endl;

	

	cout << "Podaj  wiek" << endl;

	cin >> wiek;

	// dziala

	if ( wiek < 18)

	{

		cout << "Jestes pełnoletni masz plusa" << endl;
	}


	else if ((wiek  >= 18) && (wiek  <= 28))

	{

		cout << "Mozesz kandydowac na ziecia" << endl;
	}

	else
	{
		cout << "Nie możesz kandydowac na ziecia jestes za stary oblechu" << endl;
	}

	cout << "Ile zarabiasz ?" << endl;
	cin >> pensja;

	if (pensja >= 8000)

	{

		cout << "Utrzymasz moja curke, masz plusa pewnie jestes programista" << endl;
	}

	else
	{
		cout << "Masz slome w butach zejdz mi z oczu" << endl;

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
