#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int x;

    
    while (cin >> x) {
        arr.push_back(x);
        if (cin.peek() == '\n') break;
    }

    int value;
    cout << "Find frequency of: ";
    cin >> value;

    int freq = count(arr.begin(), arr.end(), value);
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    cout << "Count of " << value << ": " << freq << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
