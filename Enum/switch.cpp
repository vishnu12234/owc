#include <iostream>
using namespace std;
enum Direction { North, South, East, West };
int main() {
    Direction move = East; 
    switch(move) {
        case North: cout << "Heading North!\n"; break;
        case South: cout << "Heading South!\n"; break;
        case East:  cout << "Heading East!\n"; break;
        case West:  cout << "Heading West!\n"; break;
    }
    return 0;
}