#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
int main() {
    Point z [2] = {{1, 2}, {5, 8}};
    cout << "Point 1: (" << z[0].x << ", " << z[0].y << ")\n";
    cout << "Point 2: (" << z[1].x << ", " << z[1].y << ")\n";
    return 0;
}