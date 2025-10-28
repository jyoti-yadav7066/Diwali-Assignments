#include <iostream>
using namespace std;

int findNumber(int arr[], int n) {
    int sum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    return sum - arrSum;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n; 
    int arr[n];
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int num = findNumber(arr, n);
    cout << "The missing number is: " << num<< endl;
    return 0;
}