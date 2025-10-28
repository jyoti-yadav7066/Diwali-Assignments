#include <iostream>
using namespace std;

bool amstrong(int n) {
    int sum = 0, digit, temp, count = 0;
    temp = n;
    int t = n;
    while (t > 0) {
        count++;
        t = t / 10;
    }
    t = n;
    while (t > 0) {
        digit = t % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power = power * digit;
        }
        sum = sum + power;
        t = t / 10;
    }
    return (sum == n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool status = amstrong(n);
    if (status)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";
    return 0;
}