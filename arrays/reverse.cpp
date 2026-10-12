#include <iostream>
using namespace std;
int main() {
    int arr[4] = {10, 20, 30, 40};
    
    cout << "Array in reverse order:\n";
    for(int i = 3; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}