#include "ComplexPrivate.hpp"
#include "Complex.hpp"

ComplexPrivate& ComplexPrivate::operator ++()
{
      re++;
      return *this;
}

ComplexPrivate& ComplexPrivate::operator --()
{
      re--;
      return *this;
}

ComplexPrivate ComplexPrivate::operator ++(int)
{
      ComplexPrivate t(*this);
      im++;
      return t;
}

ComplexPrivate ComplexPrivate::operator --(int)
{
      ComplexPrivate t(*this);
      im--;
      return t;
}

ComplexPrivate::operator string () const
{
    stringstream ss;
    ss << " Re = " << re << endl;
    ss << " Im = " << im << endl;
    
    return ss.str();
}

ComplexPrivate& ComplexPrivate::operator = (const ComplexPrivate& r)
{
    set_re(r.re);
    set_im(r.im);
    return *this;
}

ComplexPrivate operator - (const ComplexPrivate& x, const ComplexPrivate& y)
{
    ComplexPrivate b;
    b.set_im(x.get_im()-y.get_im());
    b.set_re(x.get_re()-y.get_re());
    return  b;
}

ComplexPrivate operator / (const ComplexPrivate& x, const ComplexPrivate& y)
{
    Complex a(x.get_re(), x.get_im()), b(y.get_re(), y.get_im()), res;
    res = div(a,b);
    ComplexPrivate c;
    c.set_im(res.get_im());
    c.set_re(res.get_re());
    return c;
}

ostream& operator << (ostream& out, const ComplexPrivate& r)
{
      out << string(r);
      return out;
}

istream& operator >> (istream& in, ComplexPrivate& r)
{
      cout << " Re = "; in >> r.re;
      cout << " Im = "; in >> r.im;
      cout << endl;
      return in;
}
