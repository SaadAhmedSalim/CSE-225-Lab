#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
class Complex
{
private :
    double Real, Imaginary;
public :
    Complex();
    Complex(double, double);
    Complex operator+ (Complex);
    void Print();
    };
#endif // COMPLEX_H_INCLUDED
