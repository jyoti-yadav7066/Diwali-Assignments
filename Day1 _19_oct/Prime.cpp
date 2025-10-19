#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //Accept a number 
    int n;
    cout << "Enter a number: ";
    cin >> n;

    //here we are considering in initially that the number is prime
    bool isPrime = true;


    //apply the condition to check the prime number 
    if (n <= 1)
        isPrime = false;
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    //if isPrime return false means it is not prime number and if isPrime return true it means it is prime number
    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
