#include<iostream>
using namespace std;
 int addition(int x,int y){
    int sum = 0; 
    sum = x+y;
    return sum;
 }

 int main(){
    int num1,num2;
    cout<<"Enter First Number for Addition:";
    cin>>num1;
    cout<<"Enter Second Number for Addition:";
    cin>>num2;
    int sum = addition(num1,num2);
    cout<<"Addition of"<<num1<<"&"<<num2<<"is"<<sum;
 }