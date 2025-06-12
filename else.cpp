#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    if (temp > 30) {
        cout << "It's hot.\n";
    } else {
        cout << "It's not hot.\n";
    }
    return 0;
}
