#include <iostream>
using namespace std;
int main() {
    int numbers[] = {10, 20, 30};
    int* p = numbers; 
    cout << "First element: " << *p << endl;
    cout << "Second element (using p + 1): " << *(p + 1) << endl;
    return 0;
}