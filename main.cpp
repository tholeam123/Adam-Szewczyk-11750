#include "Wisielec.h"

using namespace std;

int main()
{
	int wybor;

	do
	{
		Wisielec game;

		string haslo;

		cout << "            " << endl;
		cout << "  Wisielec  " << endl;
		cout << "Wprowadz haslo: ";
		cin >> haslo;
		cin.get();
		game.ustaw_haslo(haslo);

		game.czysc();

		char znak;

		do
		{
			cout << "            " << endl;
			cout << "  Wisielec  " << endl;
			game.rysuj_stan_hasla();
			game.rysuj_stan_gry();
			cout << "Wprowadz znak: ";
			cin >> znak;
			cin.get();
			game.sprawdz(znak);
			game.czysc();
		} while (game.zwroc_stan_gry() == 0);

		switch (game.zwroc_stan_gry())
		{
		case 1:
			cout << " Wygrales!  " << endl;
			break;
		case 2:
			cout << "Przegrales! " << endl;
			break;
		};

		do
		{
			cout << " Chcesz zagrac ponownie?" << endl;
			cout << " 1. Tak " << endl;
			cout << " 2. Nie " << endl;
			cin >> wybor;
			game.czysc();
		} while (wybor != 1 && wybor != 2);

	} while (wybor != 2);
	return 0;
}
