#include <iostream>
using namespace std;
enum Day { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
int main() {
    Day today = Wed;
    cout << "The numerical value of Wednesday in enum is: " << today << endl;
    return 0;
}