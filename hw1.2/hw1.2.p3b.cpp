#include <vector>
#include <iostream>

using namespace std;

class Compare {
public:
    virtual bool operator()(const int, const int) const = 0;
};

class Less: public Compare{
public:
    virtual bool operator()(const int a, const int b) const{
        return a < b;
    }
};

class Greater: public Compare {
public:
    virtual bool operator()(const int a, const int b) const{
        return a > b;
    }
};

void selectionSort(vector<int> &arr, const Compare &comp) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t pivot = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (comp(arr[j], arr[pivot])) {
                pivot = j;
            }
        }
        if (pivot != i) {
            int reg = arr[pivot];
            arr[pivot] = arr[i];
            arr[i] = reg;
        }
    }
}

int main() {
    int size;

    cout << "How many numbers? ";
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    cout << "Before sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    selectionSort(array, Less());
    cout << endl << "Ascending sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    selectionSort(array, Greater());
    cout << endl << "Descending sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}
