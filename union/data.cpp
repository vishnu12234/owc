#include <iostream>
using namespace std;
union Converter {
    int num;
    char ch;
};
int main() {
    Converter c;
    c.num = 67; 
    cout << "Character representation of 67: " << c.ch << endl;
    return 0;
}