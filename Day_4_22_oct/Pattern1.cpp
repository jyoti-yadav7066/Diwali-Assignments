#include <iostream>
using namespace std;
void pattern(int r){

 for (int i = 1; i <= r; i++) {
        for (int j = 1; j <=r - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

}
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    pattern(rows);
   
    return 0;
}