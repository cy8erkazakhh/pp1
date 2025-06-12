#include <iostream>
using namespace std;

int main() {
    int vals[] = {2, 4, 6, 8};
    cout << "Size is: " << sizeof(vals)/sizeof(vals[0]) << endl;
    return 0;
}
