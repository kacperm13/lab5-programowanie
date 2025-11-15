#include <iostream>
using namespace std;
int main()
{
	/*
		int tab[10];						//zad 1
		for (int i = 0; i < 10; i++) {
			cin >> tab[i];
		}
		for (int i = 9; i >= 0; i--) {
			cout << tab[i] << "\n";
		}
	*/
	/*
		int n;												//zad2
		cout << "Podaj wielkosc tablicy: ";
		cin >> n;
		int* tab = new int[n];
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				tab[0] = 0;
			}
			else if (i == 1) {
				tab[1] = 1;
			}
			else {
				tab[i] = tab[i - 1] + tab[i - 2];
			}
			cout << tab[i] << "\n";
		}
	*/
	/*
	const int n = 10;					//zad3
	int tab[n];
	int sec = time(NULL);
	float srednia = 0;
	int mniejsza = 0;
	srand(sec);
	for (int i = 0; i < 10; i++) {
		tab[i] = rand();
		cout << tab[i] << "\n";
		srednia += tab[i];
	}
	cout << "Srednia wylosowanych liczb rowna sie " << srednia / n << ".\n";

	for (int i = 0; i < 10; i++) {
		if (tab[i] < srednia / n) {
			mniejsza++;
		}
	}
	cout << "Liczb mniejszych od sredniej jest: " << mniejsza << "\n";
	int najm = tab[0];
	int najw = tab[0];
	for (int i = 0; i < 10; i++) {
		if (tab[i] < najm) {
			najm = tab[i];
		}
		if (tab[i] > najw) {
			najw = tab[i];
		}
	}
	cout << "Najwieksza liczba jest rowna " << najw << "\n";
	cout << "Najmniejsza liczba jest rowna " << najm << "\n";

	*/
	/*										//zad 4 nieskonczone
	int rzad;
	cout << "Podaj ilosc wierszow\n";
	cin >> rzad;
	int kol;
	cout << "Podaj ilosc kolumn\n";
	cin >> kol;

	cin >> kol;
	int** tab = new int* [rzad];
	for (int i = 0; i < rzad; i++) {
			
		}
	}
	*/
	/*
	const int rozmiar = 10;										//zad 5
	int tab[rozmiar];
	int n;
	cout << "Podaj ilosc elementow ktore chcesz wpisac (0-10):" << endl;
	cin >> n;
	while (n < 0 || n>10) {
		cout << "Bledna wartosc. Podaj ponownie." << endl;
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
	for (int i = n; i < rozmiar; i++) {
		tab[i] = 0;
	}
	float avg=0;
	for (int i = 0; i < rozmiar; i++) {
		avg += tab[i];
	}
	cout << "Srednia wartosci w tablicy = " << avg / rozmiar << endl;
	int min = tab[0];
	int max = tab[0];
	for (int i = 0; i < rozmiar; i++) {
		if (min > tab[i]) {
			min = tab[i];
		}
		if (max < tab[i]) {
			max = tab[i];
		}
	}
	cout << "Maksymalna wartosc = " << max << endl;
	cout << "Minimalna wartosc = " << min << endl;
	*/
/*
	const int n = 10;				//zad 6
	int tab[n];
	int seed = time(NULL);
	srand(seed);
	int lucky = rand() % 11;
	cout << "Szczesliwa liczba = " << lucky << endl;
	int count=0;
	for (int i = 0; i < n; i++) {
		tab[i] = rand() % 11;
		cout << i+1 << " element tablicy = " << tab[i] << endl;
		if (lucky == tab[i]) {
			count++; 
		}
	}
	cout << "Szczesliwa liczba zostala wylosowana " << count << " raz(y)." << endl;
	*/
	//zad 7,8,9 - brak umiejetnosci zrobienia macierzy z wartosciaim wpisanymi przez uzytkownika
/*
	const int n = 10;					//zad10
	int tab[n];
	cout << "podaj wartosci tabeli: \n";
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (tab[i] > tab[j]) {
				swap(tab[i],tab[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	*/
}
