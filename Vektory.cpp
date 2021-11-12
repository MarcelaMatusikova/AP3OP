using System;


namespace Vektory
{
    struct Vektor
    {
        public Bod b1;
        public Bod b2;

        public Vektor(Bod b1,Bod b2)
        {
            this.b1 = b1;
            this.b2 = b2;
        }
    }
    struct Bod
    {
        public double x;
        public double y;

        public Bod(double x, double y)
        {
            this.x = x;
            this.y = y;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Bod A = new Bod(2,2);
            Bod B = new Bod(9,7);
            Bod C = new Bod(1,1);
            Bod D = new Bod(3,4);

            Vektor v = new Vektor(A, B);
            Vektor u = new Vektor(C, D);

            double v1 = v.b2.x - v.b1.x;
            double v2 = v.b2.y - v.b1.y;
            double u1 = u.b2.x - u.b1.x;
            double u2 = u.b2.y - u.b1.y;

            double SoucetVektoru1 = v1 + u1;
            double SoucetVektoru2 = v2 + u2;

            Console.WriteLine($"Součet vektorů je ({SoucetVektoru1},{SoucetVektoru2})");

            double SkalarnySucin = v1*u1 + v2*u2;
            Console.WriteLine($"Součin vektorů je {SkalarnySucin}");


        }
    }
}
