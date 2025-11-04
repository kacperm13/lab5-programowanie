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


}
