#include <iostream>
using namespace std;
enum class TrafficLight { Red, Yellow, Green };
int main() {
    TrafficLight light = TrafficLight::Red;

    switch(light) {
        case TrafficLight::Red:
            cout << "Signal is Red. Stop!\n";
            break;
        case TrafficLight::Yellow:
            cout << "Signal is Yellow. Get ready!\n";
            break;
        case TrafficLight::Green:
            cout << "Signal is Green. You can go!\n";
            break;
    }
    return 0;
}