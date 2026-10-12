#include <iostream>
using namespace std;
int main() {
    int scores[] = {45, 89, 23, 99, 67};
    int maxScore = scores[0]; // Assume the first element is the highest initially
    for(int i = 1; i < 5; i++) {
        if(scores[i] > maxScore) {
            maxScore = scores[i]; // Update if we find something bigger
        }
    }
    cout << "The highest score is: " << maxScore << endl;
    return 0;
}