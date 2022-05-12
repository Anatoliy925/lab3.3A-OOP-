#include "Complex.hpp"

Complex::Complex()
{
    set_re(0);
    set_im(0);
}

Complex::Complex(double r, double i)
{
    set_re(r);
    set_im(i);
}

Complex::Complex(const Complex& r)
{
    set_re(r.re);
    set_im(r.im);
}

Complex::~Complex()
{ }

ostream& operator << (ostream& out, const Complex& r)
{
      out << " Re = " << r.get_re() << endl
      << " Im = " << r.get_im() << endl;
      return out;
}

istream& operator >> (istream& in, Complex& r)
{
      cout << " Re = "; in >> r.re;
      cout << " Im = "; in >> r.im;
      cout << endl;
      return in;
}

Complex sub(Complex x, Complex y)
{
    return Complex(x.re - y.re, x.im - y.im);
}

Complex div(Complex x, Complex y)
{
    double r1 = x.re;
    double i1 = x.im;
    double r2 = y.re;
    double i2 = y.im;
    
    return Complex((r1 * r2 - i1 * i2) / (r2 * r2 + i2 * i2), (-r1 * i2 + i1 * r2) / (r2 * r2 + i2 * i2));
}

Complex Complex::conj()
{
    return Complex(re, -im);
}
