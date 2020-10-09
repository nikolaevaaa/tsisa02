#include <iostream>
#include<iomanip>
#include <cmath>

double func (int x)
{
    double f=cos(x)*tanh(x);
    return f;
}

double funcm (int x)
{
    double fm=cos(x)*tanh(x)*sin(5*x);
    return fm;
}
int main()
{
    std::cout<<"Random search"<<std::endl;
    std::cout<<"Functoin N(q,p)"<<std::endl;
    float p=0.9,q;
    std::cout<< '+' << std::string(7, '-') << '+' << std::string(7, '-')
                   << '+' << std::string(7, '-') << '+' << std::string(7, '-')
                   << '+' << std::string(7, '-') << '+' << std::string(7, '-')
                   << '+' << std::string(7, '-') << '+' << std::string(7, '-')
                   << '+' << std::string(7, '-') << '+' << std::string(7, '-')
                   << '+' << std::string(7, '-') << '+' << std::endl;
    std::cout << '|' << std::setw(5) << "q/P" << std::setw(3) << '|';
    while (p<=0.99) {
        std::cout << std::setw(6) << p << " |";
        p +=0.01;

    }
    std::cout<<"\n"<< '+' << std::string(7, '-') << '+' << std::string(7, '-')
             << '+' << std::string(7, '-') << '+' << std::string(7, '-')
             << '+' << std::string(7, '-') << '+' << std::string(7, '-')
             << '+' << std::string(7, '-') << '+' << std::string(7, '-')
             << '+' << std::string(7, '-') << '+' << std::string(7, '-')
             << '+' << std::string(7, '-') << '+';
    int n=1;
    for (q=0.005;q<=0.105;q+=0.005)
    {   std::cout<<"\n"<<"| "<< std::setw(5) << q << " |";

        for (p=0.9;p<=0.999;p+=0.01)
        {
            while (n<log(1-p)/log(1-q))
                n++;

            std:: cout<< std::setw(6) << n << " |";
            n=1;


        }
    }

    std::cout<<"\nMin of function f(x) "<<std::endl;
    std::cout<<"\n"<< '+' << std::string(7, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+'<<std::endl;
    std::cout << '|' << std::setw(5) << "q/P" << std::setw(3) << '|';
    p=0.90;
    while (p<=0.99) {
        std::cout << std::setw(9) << p << " |";
        p += 0.01;

    }
    std::cout<<"\n"<< '+' << std::string(7, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+';

    n=1;
    float min=1000000.0,res;
    for (q=0.005;q<=0.105;q+=0.005) {
        std::cout << "\n" << "| " << std::setw(5) << q << " |";

        for (p = 0.9; p <= 0.999; p += 0.01) {
            while (n < log(1 - p) / log(1 - q))
                n++;
            for (int i = 0; i < n; i++) {
                res = func((float) (rand() % 25001) / 10000 + 1.5);
                if (res < min) min = res;
            }
            std::cout << std::setw(7) << min << " |";

            n = 1;
            min = 100000.0;

        }
    }





    std::cout<<"\nMin of function f(x)*sin(5x)"<<std::endl;
    std::cout<<"\n"<< '+' << std::string(7, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+'<<std::endl;
    std::cout << '|' << std::setw(5) << "q/P" << std::setw(3) << '|';
    p=0.90;
    while (p<=0.99) {
        std::cout << std::setw(9) << p << " |";
        p += 0.01;

    }
    std::cout<<"\n"<< '+' << std::string(7, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+' << std::string(10, '-')
             << '+' << std::string(10, '-') << '+';

    n=1;
    min=1000000.0,res;
    for (q=0.005;q<=0.105;q+=0.005) {
        std::cout << "\n" << "| " << std::setw(5) << q << " |";

        for (p = 0.9; p <= 0.999; p += 0.01) {
            while (n < log(1 - p) / log(1 - q))
                n++;
            for (int i = 0; i < n; i++) {
                res = funcm((float) (rand() % 25001) / 10000 + 1.5);
                if (res < min) min = res;
            }
            std::cout << std::setw(7) << min << " |";

            n = 1;
            min = 100000.0;

        }
    }
        return 0;
}
