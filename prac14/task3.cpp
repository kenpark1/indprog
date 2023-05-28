#include<stdexcept>
#include<vector>
#include <iostream>

using namespace std;

int main() {
    int value;
    vector<int> vec{ 14,543,758,234,56 };
    try {
        cout << "vvedite znachenie kotoroe nado nayti: ";
        cin >> value;
        if (find(vec.begin(), vec.end(), value) == vec.end()) {
            throw runtime_error("znacheniya net");
        }
        cout << "znachenie " << value << " naydeno" << "\n";
    }
    catch (runtime_error& a) {
        cout << "exception accured\n" << a.what();
    }
    return 0;
}