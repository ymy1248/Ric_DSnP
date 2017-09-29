#include <iostream>

using namespace std;

class Animal {

};

class Dog: public Animal {
public:
    virtual void bark() {
        cout << "Dog bark" << endl;
    }
};

class KDog: public Dog {
public:
    void bark() {
        cout << "KDog bark" << endl;
    }
};

class GDog: public KDog {
public:
    void bark() {
        cout << "GDog bark" << endl;
    }
};

int main() {
    // Animal *a = new KDog;
    // a->bark();
    // compiler error: no member named 'bark' in 'Animal'
    
    Dog *b = new KDog;
    b->bark();

    Dog *c = new GDog;
    c->bark();

    KDog *d = new GDog;
    d->bark();

    // although the KDog doesn't have virtual key word, GDog bark still a
    // virtual function
}
