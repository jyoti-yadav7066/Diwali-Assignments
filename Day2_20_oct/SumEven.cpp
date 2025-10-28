//sum of N even number

#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"Enter a number till you want to addition of even numbers :";
    cin>>n;

    for (int i = 2; i <= n; i=i+2) {
      
        sum = sum + i;
    }

    cout<<"Addition of N even numbers is : "<< sum;
}


