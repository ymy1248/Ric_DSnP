#include <iostream>

using namespace std;

void f(const int *a) {
    cout << *a << endl;
}

int main(){
    int * const a = new int(10);
    f(a);
}
