#ifndef __VECTOR__
#define __VECTOR__
#include <math.h>
class Vector
{
    private:
        double a;
        double b;
        double c;
        double l;
    public:
        Vector();
        Vector(double x, double y, double z);
        ~Vector();
        double A();
        double B();
        double C();
        double L();
        Vector operator + (Vector &v);
        Vector operator - (Vector &v);
        Vector operator & (Vector &v);
        Vector operator * (double n);
        Vector operator / (double n);
        double operator ^ (Vector &v);
        double operator < (Vector &v);
        bool operator == (Vector &v);
};

Vector::Vector()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->l = 0;
}

Vector::Vector(double x, double y, double z)
{
    this->a = x;
    this->b = y;
    this->c = z;
    this->l = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
}

Vector::~Vector()
{

}

double Vector::A()
{
    return this->a;
}

double Vector::B()
{
    return this->b;
}

double Vector::C()
{
    return this->c;
}

double Vector::L()
{
    return this->l;
}

Vector Vector::operator + (Vector &v)
{
    return Vector(this->a + v.a, this->b + v.b, this->c + v.c);
}

Vector Vector::operator - (Vector &v)
{
    return Vector(this->a - v.a, this->b - v.b, this->c - v.c);
}

Vector Vector::operator & (Vector &v)
{
    return Vector(this->b * v.c - this->c * v.b, this->c * v.a - this->a * v.c, this->a * v.b - this->b * v.a);
}

Vector Vector::operator * (double n)
{
    return Vector(this->a * n, this->b * n, this->c * n);
}

Vector Vector::operator / (double n)
{
    return Vector(this->a / n, this->b / n, this->c / n);
}

double Vector::operator ^ (Vector &v)
{
    return this->a * v.a + this->b * v.b + this->c * v.c;
}

double Vector::operator < (Vector &v)
{
    return acos((this->a * v.a + this->b * v.b + this->c * v.c) / (this->l * v.l)) * 180 / M_PI;
}

bool Vector::operator == (Vector &v)
{
    return this->a == v.a && this->b == v.b && this->c == v.c;
}
#endif
