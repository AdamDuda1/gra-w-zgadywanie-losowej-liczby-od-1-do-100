#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int strzal, wylosowana_liczba, liczba_prob = 1;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	srand(time(NULL));
	wylosowana_liczba = (rand() % 99) + 1;
gra:
	cout << "Z";
	while (true)
	{
		cout << "gadnij liczb� od 1 do 100!\n";
		cin >> strzal;
		if (strzal == wylosowana_liczba) {
			cout << "Gratulacje, zgad�e� w pr�bie " << liczba_prob << "!\n\n";
			system("PAUSE");
			return 0;
		}
		else if (strzal < wylosowana_liczba) {
			cout << "Za ma�o! Jeszcze raz z";
		}
		else if (strzal > wylosowana_liczba) {
			cout << "Za du�o! Jeszcze raz z";
		}
		liczba_prob++;
	}


	return 0;
}