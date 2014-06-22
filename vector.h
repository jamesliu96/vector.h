#ifndef __VECTOR_H__
#define __VECTOR_H__
class Vector
{
    private:
        double a;
        double b;
        double c;
        double s;
    public:
        Vector();
        Vector(double, double, double);
        ~Vector();
        double A();
        double B();
        double C();
        double S();
        bool empty();
        Vector operator + (const Vector&);
        Vector operator - (const Vector&);
        Vector operator & (const Vector&);
        Vector operator * (double);
        Vector operator / (double);
        double operator ^ (const Vector&);
        double operator < (const Vector&);
        bool operator == (const Vector&);
};
#include "vector.cpp"
#endif /* __VECTOR_H__ */
