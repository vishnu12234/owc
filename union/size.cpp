#include <iostream>
using namespace std;
union Sample {
    int a;       
    char b;      
    double c;    
};
int main() {
    cout << "Size of Union: " << sizeof(Sample) << " bytes\n";
    return 0;
}