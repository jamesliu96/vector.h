#include <iostream>
#include "Vector.h"
using namespace std;
int main(int argc, char *argv[])
{
    Vector v(1, 2, 3);
    Vector z(5.2, 12, 3.1429);
    Vector s = v + v;
    Vector m = v & z;
    double n = v ^ z;
    Vector u = v * 2;
    double q = v < z;
    cout<<"v=("<<v.A()<<","<<v.B()<<","<<v.C()<<")"<<endl;
    cout<<"s=("<<s.A()<<","<<s.B()<<","<<s.C()<<")"<<endl;
    cout<<"m=("<<m.A()<<","<<m.B()<<","<<m.C()<<")"<<endl;
    cout<<"z=("<<z.A()<<","<<z.B()<<","<<z.C()<<")"<<endl;
    cout<<"n="<<n<<endl;
    cout<<"u=("<<u.A()<<","<<u.B()<<","<<u.C()<<")"<<endl;
    cout<<"q="<<q<<endl;
    if(s == u)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
