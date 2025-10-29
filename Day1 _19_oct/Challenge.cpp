#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of strings";
    cin>>n;

    string arr[n];
    cout<<"Enter "<<n <<" strings: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxLength=0;

    for(int i=0;i<n;i++){
        int len=arr[i].length();

        if(len>maxLength)
            maxLength=len;

    }

    cout<<"Length of longest string is: "<<maxLength<<endl;
}