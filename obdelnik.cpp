#include <stdio.h>

class Obdelnik {
public:
    //clenske premenne
    double delka;
    double sirka;

    // default konstruktor
    Obdelnik() {
        delka = 0.0;
        sirka = 0.0;
    }

    //parametricky konstruktor
    Obdelnik(double d, double s) {
        delka = d;
        sirka = s;
    }

    //clenske funkcie
    double Obsah() {
        return delka * sirka; 
    }

    double Obvod() {
        return 2 * (delka + sirka);
    }
};

int main()
{
    //instance triedy na zasobniku
    Obdelnik o1;
    //priamy pristup k atributom
    o1.delka = 1.2;
    o1.sirka = 2.3;

    Obdelnik o2(7.0, 6.3);

    //instance triedy na halde
    Obdelnik* o3 = new Obdelnik();
    //nepriamy pristup k atributom
    o3->delka = 6.9;
    o3->sirka = 2.8;

    printf("o1 delka: %lf sirka: %lf obvod: %lf obsah: %lf\n", o1.delka, o1.sirka, o1.Obvod(), o1.Obsah());
    printf("o2 delka: %lf sirka: %lf obvod: %lf obsah: %lf\n", o2.delka, o2.sirka, o2.Obvod(), o2.Obsah());
    printf("o3 delka: %lf sirka: %lf obvod: %lf obsah: %lf\n", o3->delka, o3->sirka, o3->Obvod(), o3->Obsah());
    
    Obdelnik pole[] = {o1, o2};
    Obdelnik naj;
    for (int i=0; i < 2; i++) {
        if (pole[i].Obvod() > naj.Obvod()) {
            naj = pole[i];
        }

    }
    printf("Najvasci obdlznik je s delkou: %lf a sirkou: %lf\n", naj.delka, naj.sirka);
    
}

