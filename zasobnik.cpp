#include <iostream>

namespace zasobnik {
    class Zasobnik
    {
    private:
        const int kapacita;
        //int kapacita;
        int* data;
        int pocet;

    public:

        /* Zasobnik(int kapacita) {
             data = new int[kapacita];
             pocet = 0;
             this -> kapacita = kapacita;
         }*/

        Zasobnik(int kapacita) : kapacita(kapacita), pocet(0), data(NULL)
        {
            data = new int[kapacita];
        }

        ~Zasobnik() {
            do
            {
                pocet--;
                data--;
            } while (pocet > 0);
            delete[] data;
        }

        int getPocet()
        {
            return pocet;
        }

        //void push(int cislo)
        //{
        //    if (pocet < kapacita - 1)
        //    {
        //        data[pocet] = cislo;
        //        pocet++;
        //        std::cout << "prvek: " << cislo << " byl pridan\n";
        //    }
        //    else
        //        std::cout << "neni kapacita v zasobniku\n";
        //}

        void push(int cislo)
        {

            if (pocet < kapacita)
            {
                data++;
                *data = cislo;
                pocet++;

                std::cout << "prvek: " << cislo << " byl pridan\n";
            }
            else
                std::cout << "neni kapacita v zasobniku\n";


        }

        int pop()
        {
            if (pocet > 0) {
                int dat = *data;
                data--;
                pocet--;
                return dat;
            }
            else {
                std::cout << "zasobnik je prazdny\n";
            }

        }



    };
}

int main()
{
    zasobnik::Zasobnik z(4);
    z.push(1);
    z.push(2);
    z.push(3);
    printf("pop - %d \n",z.pop());
}

