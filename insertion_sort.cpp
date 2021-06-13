#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//driver code
int main(){

    //taking input 
    int n,i,j,key;
    cout<<"Enter the size of array :: ";
    cin>>n;

    //declaring the array
    cout<<"Enter the elements of the array :: "<<endl;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //now looping will start
    //it contains only a single loop
    //the loop starts from i=1 i.e, from the second element of the array ,till the last element 
    for(i=1;i<n;i++){
        //key is stated to be the element at the ith index value of the array while in loop
        key=arr[i];  
        j=i-1;

        while(key<arr[j] && j>=0){
            //arr[j] <- arr[j+1]
            //element will be shifted one place to the right
            arr[j+1]=arr[j];
            //j value decremented coz its been shifted everytime
            --j;
        }
        //key <- arr[j+1]
        arr[j+1]=key;
    }
    
    //printing the array
    cout<<"The sorted array is :: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}