/**
 * @author ymy1248
 */

#include <iostream>
#include "hw1.2.p1b.h"

void P1b::printSize() {
    cout << "The size of class P1a is " << sizeof(P1a) << endl;
}

void P1b::printStaticArraySize() {
    P1a arr1b_1[5];

    for (size_t i = 0; i < 5; ++i) {
        cout << "&arr1b_1[" << i << "]: " << &arr1b_1[i] << endl;
    }
}

void P1b::printDynamicArraySize() {
    P1a *arr1b_2 = new P1a[5];

    for (size_t i = 0; i < 5; ++i) {
        cout << "&arr1b_2[" << i << "]: " << &arr1b_2[i] << endl;
    }
    cout << "&arr1b_2: " << arr1b_2 << endl;
}

void P1b::printPointerArraySize() {
    P1a **arr1b_3 = new P1a*[5];
    
    for (size_t i = 0; i < 5; ++i) {
        arr1b_3[i] = new P1a;
    }
    
    for (size_t i = 0; i < 5; ++i) {
        cout << "&arr1b_3[" << i << "]: " << arr1b_3[i] << endl;
    }

    cout << "Contents of arr1b_3[5] are:" << endl;

    for (size_t i = 0; i < 5; ++i) {
        cout << "arr1b_3[" << i << "]: " << &arr1b_3[i] << endl;
    }

    cout << "&arr1b_3: " << arr1b_3 << endl;
}
