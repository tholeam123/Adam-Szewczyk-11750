#include "Wisielec.h"

int Wisielec::zwroc_stan_gry() { return stan_gry; }

Wisielec::~Wisielec()
{
};

void Wisielec::ustaw_haslo(string _h)
{
	haslo = _h;
	transform(haslo.begin(), haslo.end(), haslo.begin(), ::tolower);

	for (int i = 0; i < haslo.size(); ++i)
		zaszyfrowane_haslo += "_";
};

void Wisielec::rysuj_stan_hasla()
{
	cout << "Haslo: " << endl;
	cout << zaszyfrowane_haslo << endl;
};

void Wisielec::rysuj_stan_gry()
{
	cout << "   Stan gry  " << endl;

	switch (stan)
	{
	case 0:
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "             " << endl;
		break;
	case 1:
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "/            " << endl;
		break;
	case 2:
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "            " << endl;
		cout << "/\\          " << endl;
		break;
	case 3:
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 4:
		cout << "|---------  " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 5:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 6:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 7:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|        |  " << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 8:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|        |\\" << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 9:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|       /|\\" << endl;
		cout << "|           " << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 10:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|       /|\\" << endl;
		cout << "|         \\" << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	case 11:
		cout << "|---------  " << endl;
		cout << "|        |  " << endl;
		cout << "|        O  " << endl;
		cout << "|       /|\\" << endl;
		cout << "|       / \\" << endl;
		cout << "|           " << endl;
		cout << "/\\          " << endl;
		break;
	};
};

bool Wisielec::sprawdz(char _s)
{
	bool flaga = false;

	for (int i = 0; i < sprawdzone.size(); ++i)
		if (sprawdzone[i] == _s)
			return false;

	for (int i = 0; i < haslo.size(); ++i)
	{
		if (haslo[i] == tolower(_s))
		{
			++licznik_pozycji;
			flaga = true;
			zaszyfrowane_haslo[i] = tolower(_s);
		};
	};

	if (flaga == false)
	{
		++stan;
		if (stan == 11)
			stan_gry = 2;
	}
	else
		sprawdzone += _s;

	if (licznik_pozycji == haslo.size())
		stan_gry = 1;

	return flaga;
};
