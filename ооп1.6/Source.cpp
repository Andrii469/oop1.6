#include <iostream>
#include "equaliteral.h"

using namespace std;

int main() {
    Equilateral::Triangle triangle;
    triangle.Read();
    triangle.Display();
    cout << "Alpha = " << triangle.getAlpha() << endl;
    cout << "Beta = " << triangle.getBeta() << endl;
    cout << "Gamma = " << triangle.getGamma() << endl;
    cout << "perimeter = " << triangle.perimeter() << endl;
    Equilateral equilateral;
    equilateral.Read();
    equilateral.Display();

    return 0;
}