#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        cout << i << " ";
    }
    cout << "\nSkipped 2.\n";
    return 0;
}
