#include <string>
#include <iostream>

using namespace std;

class Wisielec
{
private:
	string haslo;
	string zaszyfrowane_haslo;
	string sprawdzone;
	int licznik_pozycji;
	int stan;
	int stan_gry; // 0 - w trakcie, 1 - wygrana, 2 - przegrana
public:
	Wisielec(string _h = "", string _z = "", string _spr = "", int _s = 0, int _s_g = 0, int _l_p = 0) : haslo(_h), zaszyfrowane_haslo(_z), stan(_s), stan_gry(_s_g), licznik_pozycji(_l_p), sprawdzone(_spr) {}
	~Wisielec();
	void ustaw_haslo(string _h);
	void rysuj_stan_gry();
	void rysuj_stan_hasla();
	bool sprawdz(char _s);
	int zwroc_stan_gry();
	void czysc() { printf("\033[2J"); printf("\033[0;0f"); }
};
