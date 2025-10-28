#include <iostream>
using namespace std;

void multiplyTable(int x) {
    for (int i = 1; i <= 10; i++) {
        int mul = i * x;
        cout << x << " * " << 1 << " = " << mul << endl;  
    }

}

int main() {
    int num1;
    cout << "Enter Number for Multiplication Table: ";
    cin >> num1;
    multiplyTable(num1);
    return 0;
}