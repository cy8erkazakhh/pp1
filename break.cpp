#include <iostream>
using namespace std;    

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;
        cout << i << " ";
    }
    cout << "\nLoop ended at 5.\n";
    return 0;
}
