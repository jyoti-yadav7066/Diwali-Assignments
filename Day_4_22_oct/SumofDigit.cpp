#include <iostream>
using namespace std;
int sumOfDigit(int x){
    int sum = 0;
    int num = x;  

    while (num > 0) {
        int digit = num % 10;  
        sum += digit;          
        num /= 10;           
    }
  return sum;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = sumOfDigit(n);
    cout << "Sum of digits of " << n << " is " << sum << endl;

    return 0;
}