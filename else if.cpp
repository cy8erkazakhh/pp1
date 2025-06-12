#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    if (grade >= 90) {
        cout << "Excellent\n";
    } else if (grade >= 75) {
        cout << "Good\n";
    } else if (grade >= 60) {
        cout << "Satisfactory\n";
    } else {
        cout << "Fail\n";
    }
    return 0;
}