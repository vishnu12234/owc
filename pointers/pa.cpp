#include <iostream>
using namespace std;
void addMarks(int* num) {
    *num = *num + 10;
}
int main() {
    int marks = 100;
    cout << "Before function: " << marks << endl;   
    addMarks(&marks);
    cout << "After function: " << marks << endl;
    return 0;
}