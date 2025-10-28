#include<iostream>
using namespace std;

int main(){
    int n, sum=0;

    cout<<"Enter a number till you want to add the odd numbers: ";
    cin>>n;

    for(int i=1; i<=n; i=i+2){
        sum = sum +i;
    }

    cout<<"Addition of N odd numbers is : "<<sum;
}