#include <iostream>
using namespace std;

bool checkPalindrome(int n) {
    int org = n;
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev= rev* 10 + digit;
        n = n / 10;
    }

    return (org== rev);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool status = checkPalindrome(n);
    if(status){
        cout<<n <<" is palindrome";
    }
    else{
        cout<<n <<" is not palindrome ";
    }
}