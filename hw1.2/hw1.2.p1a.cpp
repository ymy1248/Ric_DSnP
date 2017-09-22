#include <iostream>
#include "hw1.2.p1a.h"

void P1a::assign(const string& s) {
    _str = s;
}

void P1a::print() const{
    cout << _str << endl;
}

P1a& P1a::append(const P1a& p) {
    this->_str += p._str;
    return *this;
}
