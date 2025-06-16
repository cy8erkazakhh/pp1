#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, a[100], x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Found at index " << i << endl;
            return 0; // моментально выходим из программы
        }
    }

    cout << "Not Found" << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> b[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a[4][4], maxSum = 0, row = 0;
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            row = i;
        }
    }
    cout << "Row " << row + 1 << " has the maximum sum: " << maxSum << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) cin >> a[i][j];
    cout << "Main: ";
    for (int i = 0; i < 4; i++) cout << a[i][i] << " ";
    cout << "\nSecondary: ";
    for (int i = 0; i < 4; i++) cout << a[i][3 - i] << " ";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
