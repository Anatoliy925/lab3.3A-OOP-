#include <iostream>
#include "Complex.hpp"
#include "ComplexPublic.hpp"
#include "ComplexPrivate.hpp"
using namespace std;
int main() {
    
    Complex a(5, 9), b(-7, 8), c(a), d;
    cout << "Комплексно спряжене число від a(5, 9): " << endl;
    cout << a.conj(); //cin >> d;
    
    
    ComplexPublic x, y, res;
    x.set_re(9); x.set_im(4);
    cout << "Значення числа x: " << endl << x << endl;
    cout << "Введіть значення числа у: ";
    cin >> y;
    res = x/y;
    cout << "Результат ділення: " << endl << string(res);
    res = x-y;
    cout << "Результат віднімання: " << endl << string(res);
    
    
    ComplexPrivate *px = new ComplexPrivate();
    cout << "Введіть значення першого числа: ";
    cin >> *px;
    ComplexPrivate *py = new ComplexPrivate();
    cout << "Введіть значення другого числа: ";
    cin >> *py;
    cout << "Результат ділення: " << endl << *px/ *py;
    cout << "Результат віднімання: " << endl << *px - *py;
    
    
    
    
    
    return 0;
    
}
