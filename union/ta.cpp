#include <iostream>
using namespace std;
struct Result {
    int type; 
    union {
        int intVal;
        float floatVal;
    };
};
int main() {
    Result res;
    res.type = 1;
    res.intVal = 100;
        if(res.type == 1) {
        cout << "Stored integer: " << res.intVal << endl;
    }
    return 0;
}