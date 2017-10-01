#include <iostream>

using namespace std;

int main(){
    int a;
    const int b = a;
    const int &c = a;

    cout << "b: " << b << endl
         << "c: " << c << endl;
    // in compiler it's ok, but it means nothing.
}
