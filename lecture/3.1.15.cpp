#include <iostream>

using namespace std;

int main() {
    int n = 0;

    // int *p1 = 10;
    // int *p2 = n;
    // cannot initialize a variable of type 'int *' with an rvalue of type 'int'
    int *p3 = &n;
    cout << *p3 << endl;
    return 0;
}
