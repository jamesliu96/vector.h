Vector::Vector()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->s = 0;
}

Vector::Vector(double x, double y, double z)
{
    this->a = x;
    this->b = y;
    this->c = z;
    this->s = sqrt(this->a * this->a + this->b * this->b + this->c * this->c);
}

Vector::~Vector()
{}

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

double Vector::S()
{
    return this->s;
}

bool Vector::empty()
{
    return this->s == 0;
}

Vector Vector::operator + (const Vector &v)
{
    return Vector(this->a + v.a, this->b + v.b, this->c + v.c);
}

Vector Vector::operator - (const Vector &v)
{
    return Vector(this->a - v.a, this->b - v.b, this->c - v.c);
}

Vector Vector::operator & (const Vector &v)
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

double Vector::operator ^ (const Vector &v)
{
    return this->a * v.a + this->b * v.b + this->c * v.c;
}

double Vector::operator < (const Vector &v)
{
    return acos((this->a * v.a + this->b * v.b + this->c * v.c) / (this->s * v.s)) * 180 / M_PI;
}

bool Vector::operator == (const Vector &v)
{
    return this->a == v.a && this->b == v.b && this->c == v.c;
}
