#include <iostream>
#include <string>
using namespace std;
struct Student {
    int id;
    string name;
    float cgpa;
};
int main() {
    Student s1;
    s1.id = 101;
    s1.name = "Rahul";
    s1.cgpa = 8.5;
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", CGPA: " << s1.cgpa << endl;
    return 0;
}