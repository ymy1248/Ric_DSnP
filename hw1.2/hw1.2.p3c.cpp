#include <vector>
#include <iostream>

using namespace std;

template <class T>
class Compare {
public:
    virtual bool operator()(const T a, const T b) const = 0;
};

template <class T>
class Less: public Compare<T> {
    virtual bool operator()(const T a, const T b) const {
        return a < b;
    }
};

template <class T>
class Greater: public Compare<T> {
    virtual bool operator()(const T a, const T b) const {
        return a > b;
    }
};

template <class T>
void selectionSort(vector<T> &arr, const Compare<T> &comp) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t pivot = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (comp(arr[j], arr[pivot])) {
                pivot = j;
            }
        }
        if (pivot !=i) {
            T reg = arr[pivot];
            arr[pivot] = arr[i];
            arr[i] = reg;
        }
    }
}

int main() {
    int size;

    cout << "How many strings? ";
    cin >> size;
    vector<string> strArr(size);
    for (int i = 0; i < size; ++i) {
        cin >> strArr[i];
    }
    cout << "Before sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << strArr[i] << " ";
    }
    selectionSort(strArr, Less<string>());
    cout << endl << "Ascending sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << strArr[i] << " ";
    }
    cout << endl << endl;

    cout << "How many doubles? ";
    cin >> size;
    vector<double> intArr(size);
    for (int i = 0; i < size; ++i) {
        cin >> intArr[i];
    }
    cout << "Before sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
    selectionSort(intArr, Greater<double>());
    cout << endl << "Descending sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << intArr[i] << " ";
    }
    cout << endl;
}
