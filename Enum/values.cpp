#include <iostream>
using namespace std;
enum Level { Low = 10, Medium = 20, High = 30 };
int main() {
    Level currentLevel = Medium;
    cout << "Current level score is: " << currentLevel << endl;
    return 0;
}