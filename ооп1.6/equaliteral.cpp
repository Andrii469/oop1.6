
#include <string>
#include "equaliteral.h"

using namespace std;

double Equilateral::getSquare() const {
    return square_;
}

const Equilateral::Triangle& Equilateral::getTriangle() const {
    return triangle;
}

void Equilateral::setTriangle(const Triangle& triangle) {
    Equilateral::triangle = triangle;
}

void Equilateral::Init(Triangle triangle) {
    this->triangle = triangle;
}

void Equilateral::Read() {
    double side = 0;
    std::cout << "Enter side: "; std::cin >> side;
    triangle.Init(side, side, side);
    square();
}

void Equilateral::Display() {
    std::cout << toString();
}

std::string Equilateral::toString() {
    return "Equilateral " + triangle.toString() + " with square: " + std::to_string(square_);
}

void Equilateral::square() {
    square_ = sqrt(3) * pow(triangle.getA(), 2) / 4;
}

void Equilateral::Triangle::Init(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}



double Equilateral::Triangle::getA() const {
    return a;
}

void Equilateral::Triangle::setA(double a) {
    Equilateral::Triangle::a = a;
}

double Equilateral::Triangle::getB() const {
    return b;
}

void Equilateral::Triangle::setB(double b) {
    Equilateral::Triangle::b = b;
}

double Equilateral::Triangle::getC() const {
    return c;
}

void Equilateral::Triangle::setC(double c) {
    Equilateral::Triangle::c = c;
}

void Equilateral::Triangle::Read() {
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    if (((a + b) < c) || ((a + c) < b) || ((c + b) < a))
    {
        cout << "Error, side of triangle entered incorrectly" << endl;
        return  Read();
    }
}

void Equilateral::Triangle::Display() {
    std::cout << toString() << std::endl;
}

std::string Equilateral::Triangle::toString() const {
    return "Triangle: (" + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ")";
}
double Equilateral::Triangle::perimeter() {
    return a + b + c;
}

double Equilateral::Triangle::getAlpha() const {
    return acos((b * b + c * c - a * a) / (2 * b * c));
}

double Equilateral::Triangle::getBeta() const {
    return acos((a * a + c * c - b * b) / (2 * a * c));
}

double Equilateral::Triangle::getGamma() {
    return acos((b * b + a * a - c * c) / (2 * b * a));
}