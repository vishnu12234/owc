#include <iostream>
using namespace std;
int main() {
    int* score = new int;
    *score = 95;  
    cout << "Dynamic score is: " << *score << endl;
    delete score;
    return 0;
}