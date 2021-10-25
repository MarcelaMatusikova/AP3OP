//TODO
//seøaïte studenty dle získaných bodù vzestupnì a vypište jména, pøíjmení a prùmìrné body 
//všech seøazených studentù.

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>
using namespace std;
class Student {
private:
    string jmeno;
    string prijmeni;
    double test1;
    double test2;
    double test3;

    public:
    Student(string jmeno, string prijmeni, double test1, double test2, double test3): 
        jmeno(jmeno), prijmeni(prijmeni), test1(test1), test2(test2), test3(test3) {}

    string Getjmeno() {
        return jmeno;
    }

    string Getjprijmeni() {
        return prijmeni;
    }

    double Gettest1() {
        return test1;
    }

    double Gettest2() {
        return test2;
    }

    double Gettest3() {
        return test3;
    }

    bool Zapocet() {
        if (test1 >= 15 && test2 >= 15 && test3 >= 15)
            return true;
        else
            return false;
    }

    double prumer() {
        return (test1 + test2 + test3) / 3.0;

    }

};

int main()
{
    vector<Student> pole{
        Student("Lukas","Svozil",15,15,15),
        Student("Jan", "Smekal", 5, 14, 5),
        Student("Karel", "Kratochvil", 15, 20, 28)
    };
    Student pom = pole[0];
    double celkovyprumer = 0.0;
    for (int i = 0; i < pole.size(); i++) {
        if (pom.prumer() < pole[i].prumer()) {
            pom = pole[i];
        }

        if (pole[i].Zapocet())
            cout << "Student absolvoval zapocet: " << pom.Getjmeno() << " " << pom.Getjprijmeni() << endl;

        celkovyprumer = celkovyprumer + pole[i].prumer();
    }
    cout << "Nejlepsi student je " << pom.Getjmeno() << " " << pom.Getjprijmeni() << endl;
    celkovyprumer = celkovyprumer / pole.size();
    cout << "Celkovy prumer studentu je " << celkovyprumer << endl;

    Student Topprumer = pole[0];
    for (int k = 0; k < pole.size(); k++) {
        cout << pole[k].Getjmeno() << " " << pole[k].Getjprijmeni()<< " " << pole[k].prumer() << endl;
        if (abs(Topprumer.prumer() - celkovyprumer) > abs(pole[k].prumer() - celkovyprumer)) {
            Topprumer = pole[k];
        }
    }
    cout << "Nejlepsi student s prumerem " << Topprumer.Getjmeno() << " " << Topprumer.Getjprijmeni() << endl;
}

