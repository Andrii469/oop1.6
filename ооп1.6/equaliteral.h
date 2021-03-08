#pragma once
#include <iostream>

class Equilateral
{
public:

    class Triangle
    {
        double a, b, c;
    public:
        void Init(double a, double b, double c);

        double perimeter();

        double getAlpha() const;
        double getBeta() const;
        double getGamma();

        double getA() const;

        void setA(double a);

        double getB() const;

        void setB(double b);

        double getC() const;

        void setC(double c);

        void Read();

        void Display();

        std::string toString() const;


    };


    double getSquare() const;

    const Triangle& getTriangle() const;

    void setTriangle(const Triangle& triangle);

    void Init(Triangle triangle);

    void Read();

    void Display();

    std::string toString();

private:
    Triangle triangle;
    double square_;

    void square();
};