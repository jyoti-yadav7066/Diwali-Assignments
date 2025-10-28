//reverse the  number

#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = reverse(n);
    cout << "Reverse number of " << n << " is " << num << endl;
    return 0;
}