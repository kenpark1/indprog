﻿using namespace std;
#include <iostream>
#include <stdexcept>
int main()
{
    int i;
    int arr[5] = { 9,534,123,64,67 };
    try {
        cout << "vvedite index: ";
        cin >> i;
        if (i < 0 || i >= size(arr)) {
            throw runtime_error("necorrectniy index\n");
        }
    }
    catch (runtime_error& a) {
        cout << "exception occured\n" << a.what() << "\n";
    }
    return 0;
}