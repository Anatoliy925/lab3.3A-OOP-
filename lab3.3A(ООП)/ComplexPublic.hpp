#ifndef ComplexPublic_hpp
#define ComplexPublic_hpp
#include "Complex.hpp"

class ComplexPublic: public Complex{
    
public:
    
    ComplexPublic& operator ++();
    ComplexPublic& operator --();
    ComplexPublic operator ++(int);
    ComplexPublic operator --(int);
    
    ComplexPublic& operator = (const ComplexPublic&);
    operator string() const;
    
    friend ComplexPublic operator - (const ComplexPublic&, const ComplexPublic&);
    friend ComplexPublic operator / (const ComplexPublic&, const ComplexPublic&);
    
};


#endif
