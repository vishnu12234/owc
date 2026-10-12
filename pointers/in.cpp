#include <iostream>
using namespace std;
int main() {
    int age = 20;
    int* ptr = &age; 
    cout << "Value of age: " << age << endl;
    cout << "Address of age: " << ptr << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl; 
    return 0;
}