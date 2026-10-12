#include <iostream>
using namespace std;
struct Rectangle {
    int length, width;
};
void calculateArea(Rectangle r) {
    int area = r.length * r.width;
    cout << "Area of the rectangle is: " << area << endl;
}
int main() {
    Rectangle rect = {10, 5};
    calculateArea(rect);
    return 0;
}