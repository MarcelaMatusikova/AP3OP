
#include <iostream>
#include <string.h>

using namespace std;

class Soucastka
{

protected:
	string znacka,popis;
	int cena;
	bool je_na_sklade;
public:
	Soucastka(string z, string p, int cena, bool j) :znacka(z), popis(p), cena(cena), je_na_sklade(j)
	{
	
	}
	int get_cena()
	{
		return cena;
	}
	bool get_j_n_s()
	{
		return je_na_sklade;
	}
	string get_znacka_popis()
	{
		string dohromady = znacka + " - " + popis;
		return dohromady;
	}

};

class Spojkova_lamela : public Soucastka
{
private:
	int pocet_casti;
public:
	Spojkova_lamela(string z, string p, int cena, bool j,int pocet_casti):pocet_casti(pocet_casti),Soucastka(z,p,cena,j)
	{

	}
	int getPC()
	{
		return pocet_casti;
	}

};

class Brzdovy_kotouc : public Soucastka
{
private:
	int r,pocet_dir;
public:
	Brzdovy_kotouc(string z, string p, int cena, bool j, int r, int p_r) :r(r), pocet_dir(p_r), Soucastka(z, p, cena, j)
	{
	
	}
	int get_r()
	{
		return r;
	}
	int get_PD()
	{
		return pocet_dir;
	}
};

int main()
{
	Spojkova_lamela s_l("skoda", "spojkova lamela", 1000, true, 5);
	Brzdovy_kotouc b_k("BMW", "brzdovy kotouc",5000,false,20,7);

	
	if (s_l.get_j_n_s())
	{
		cout << "pocet casti: " << s_l.getPC() << "\ncena: " << s_l.get_cena() << "\nznacka: " << s_l.get_znacka_popis();
	}
	else 
	{
		cout <<"neni na sklade-> " << s_l.get_znacka_popis();
	}
	cout << "\n";
	if (b_k.get_j_n_s())
	{
		cout << "pocet dir: " << b_k.get_PD() << "polomer: " << b_k.get_r() << "\n cena:" << b_k.get_cena() << "\n znacka:" << b_k.get_znacka_popis();
	}
	else
	{
		cout << "neni na sklade-> " << b_k.get_znacka_popis();
	}

}
