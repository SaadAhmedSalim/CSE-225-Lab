#include "Complex.h"
#include <iostream>

using namespace std;

 int main()
{
    Complex c(2,-3);
    Complex c2(5,-7);
    Complex c3;

    c3 = c+c2;


    c3.Print();

    return 0;
}
