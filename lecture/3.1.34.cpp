#include <iostream>

using namespace std;

template <class T>
class Array {
public:
    Array(size_t i = 0) {
        cout << "Array constructor." << endl;
        _arr = new T[i];
    }

    T& operator[](size_t i) {
        cout << "Array operator[]." << endl;
        return _arr[i];
    }

    const T& operator[] (size_t i) const {
        cout << "Array const operator[]." << endl;
        return _arr[i];
    }

    Array<T>& operator=(const Array& arr) {
        cout << "Array operator=." << endl;
        return (*this);
    }

private:
    T *_arr;
};

int main(){
    Array<int> arr(10);
    int t = arr[5];
    arr[0] = 20;
    Array<int> arr2;
    arr2 = arr;
}
