#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ,i,j,flag ;
    cout<<"Enter the size of array :: "<<"\n";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements :: "<<"\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //2 for loops are used for 2 different iterations
    //first loop is for the external passes
    //second internal loop is for the iteration among the array elements 

    //flag is used to optimize the bubble sort code 
    //to avoid extra space 
    //flag is set to 0 initially 
    //then its set=1 if even a single swapping is found---
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        //---at this point if no swapping is accounted 
        //that is if flag==0 then flow exits the loop 
        //flow break and control exits the loop
        if(flag==0)
        break;
    }

    cout<<"The sorted array is :: "<<endl;

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}