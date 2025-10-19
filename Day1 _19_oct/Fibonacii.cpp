#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Fibonacci series: ";

    if (n >= 1)
        cout << a << " ";
    if (n >= 2)
        cout << b << " ";

    for (int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
