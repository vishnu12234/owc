#include <iostream>
using namespace std;
union Data {
    int i;
    float f;
};
int main() {
    Data item;
    item.i = 42;
    cout << "Integer value: " << item.i << endl;
    item.f = 5.5; 
    cout << "Float value: " << item.f << endl;
    return 0;
}