#include <iostream>

using namespace std;

// void f(int a) const {
//     cout << a << endl;
// }
// non-member function cannot have 'const' qualifier

// int & const a = 10;
// 'const' qualifier may not be applied to a reference

class A {
public:
    const int _data = 10;
};

int main(){
   A *a = new A();
   cout << a->_data << endl;
}
