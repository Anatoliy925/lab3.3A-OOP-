#include "ComplexPublic.hpp"
#include "Complex.hpp"

ComplexPublic& ComplexPublic::operator ++()
{
      re++;
      return *this;
}

ComplexPublic& ComplexPublic::operator --()
{
      re--;
      return *this;
}

ComplexPublic ComplexPublic::operator ++(int)
{
      ComplexPublic t(*this);
      im++;
      return t;
}

ComplexPublic ComplexPublic::operator --(int)
{
      ComplexPublic t(*this);
      im--;
      return t;
}

ComplexPublic::operator string () const
{
    stringstream ss;
    ss << " Re = " << re << endl;
    ss << " Im = " << im << endl;
    
    return ss.str();
}

ComplexPublic& ComplexPublic::operator = (const ComplexPublic& r)
{
    set_re(r.re);
    set_im(r.im);
    return *this;
}

ComplexPublic operator - (const ComplexPublic& x, const ComplexPublic& y)
{
    ComplexPublic b;
    b.set_im(x.get_im()-y.get_im());
    b.set_re(x.get_re()-y.get_re());
    return  b;
}

ComplexPublic operator / (const ComplexPublic& x, const ComplexPublic& y)
{
    Complex a(x.get_re(), x.get_im()), b(y.get_re(), y.get_im()), res;
    res = div(a,b);
    ComplexPublic c;
    c.set_im(res.get_im());
    c.set_re(res.get_re());
    return c;
    
}
