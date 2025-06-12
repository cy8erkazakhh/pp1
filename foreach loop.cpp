#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40};
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
