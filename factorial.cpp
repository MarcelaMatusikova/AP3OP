#include <iostream>

class Faktorial
{
public:
    int cislo;

    Faktorial()
    {
        cislo = 5;
    }
    Faktorial(int ccislo)
    {
        cislo = ccislo;
    }

    int Vypocet() {
        int pomocna = 1;
        for (int i = 1; i <= cislo; i++) {
            pomocna = pomocna * i;
        }
        return pomocna;
    }

};

int main()
{
    Faktorial f1;
    printf("Zadane cislo je: %d\n", f1.cislo);
    printf("faktoriál zadaneho cisla je: %d\n", f1.Vypocet());
    Faktorial f2(0);
    printf("faktoriál zadaneho cisla je: %d\n", f2.Vypocet());

}
