#ifndef ComplexPrivate_hpp
#define ComplexPrivate_hpp
#include "Complex.hpp"

class ComplexPrivate: private Complex{
    
public:
    
    ComplexPrivate& operator ++();
    ComplexPrivate& operator --();
    ComplexPrivate operator ++(int);
    ComplexPrivate operator --(int);
    
    ComplexPrivate& operator = (const ComplexPrivate&);
    operator string() const;
    
    friend ComplexPrivate operator - (const ComplexPrivate&, const ComplexPrivate&);
    friend ComplexPrivate operator / (const ComplexPrivate&, const ComplexPrivate&);
    
    friend ostream& operator << (ostream&, const ComplexPrivate&);
    friend istream& operator >> (istream&, ComplexPrivate&);
    
};


#endif
