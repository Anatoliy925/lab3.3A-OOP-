#ifndef Complex_hpp
#define Complex_hpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Complex{
protected:
    double re, im;
public:
    Complex();
    Complex(double, double);
    Complex(const Complex&);
    ~Complex();
    
    void set_re(double x){re=x;}
    void set_im(double y){im=y;}
    double get_re() const{return re;}
    double get_im() const{return im;}
    
    friend Complex sub(Complex, Complex);
    friend Complex div(Complex, Complex);
    Complex conj();
    
    friend ostream& operator << (ostream&, const Complex&);
    friend istream& operator >> (istream&, Complex&);
};

#endif
