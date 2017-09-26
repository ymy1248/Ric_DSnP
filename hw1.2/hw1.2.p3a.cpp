#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>&);
bool compare(const int, const int);
void mySwap(int &a, int &b);

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
    selectionSort(array);
    cout << endl << "After sort:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &array){
    for (size_t i = 0, n = array.size(); i < n - 1; ++i) {
        size_t pivot = i;
        for (size_t j = i + 1; j < n; ++j) {
            if (!compare(array[pivot], array[j]))
                pivot = j;
        }
        if (pivot != i)
            mySwap(array[pivot], array[i]);
    }
}

bool compare(const int a, const int b) {
    return a < b;
}

void mySwap(int &a, int &b) {
    int reg = a;
    a = b;
    b = reg;
}
