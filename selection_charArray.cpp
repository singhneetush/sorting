#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ,i,j , temp;

    cin>>n;
    char str[n];

    for(i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"entered array is :: ";
    for(i=0;i<n;i++){
        cout<<str[i];
    }cout<<endl;

    return 0;

}