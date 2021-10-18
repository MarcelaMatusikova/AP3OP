

#include <iostream>
class BmiIndex
{
private:
    double vaha;
    double vyska;

public:
    BmiIndex()
    {
        vaha = 60;
        vyska = 1.7;
    }

    BmiIndex(double vaha, double vyska)
    {
        this->vaha = vaha;
        this->vyska = vyska;
    }

    double Getvaha()
    {
        return vaha;
    }

    double Getvyska()
    {
        return vyska;
    }

    void SetVaha(double vaha)
    {
        this->vaha = vaha;
    }

    void SetVyska(double vyska)
    {
        this->vyska = vyska;
    }

    double VypocetBmi()
    {
        return vaha / (vyska * vyska);
    }
    void vypis()
    {
        double bmi = VypocetBmi();
        if (bmi < 18.5)
            std::cout << "podvaha\n";
        else if (bmi > 25)
            std::cout << "nadvaha\n";
        else
            std::cout << "prumer\n";
    
    }

};

int main()
{
    BmiIndex i1;
    printf("Vaha je %.2f\n", i1.Getvaha());
    i1.SetVaha(70.5);
    printf("Vaha je %.2f\n", i1.Getvaha());
    i1.vypis();
}
