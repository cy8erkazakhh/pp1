#include <iostream>
#include <string>
using namespace std;

void reverseString(string& s, int start, int end) {
    if (start >= end) return;  
    swap(s[start], s[end]);   
    reverseString(s, start + 1, end - 1); 
}

int main() {
    string s;
    cin >> s;
    reverseString(s, 0, s.size() - 1);
    cout << s << endl;
    return 0;
}
