//SELECTION SORT 

#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n,i,j,temp;              
    //n is the number of elements of array 
    //i and j are used to iterate over the array 
    //temp is the temporary var used to swap value at arr[i] and arr[j]

    //taking input of the array
    cout<<"Enter the number of elements of array :: ";
    cin>>n;
    //char arr[n]; can be done to take the character as a input in the array ;
    int arr[n];
    cout<<"Enter the elements of array :: "<<"\n"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection sort basic source code---
    //2 loops will be used 
    //first loop will iterate over from 0 to n-1 
    //second loop will iterate over from 

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                //simply used swap(arr[i],arr[j])
                //it will swap arr[i] with arr[j] if the condition stands true
                swap(arr[i],arr[j]);
                //temp=arr[j];
                //arr[j]=arr[i];
                //arr[i]=temp;
            }

        }
    }
    cout<<"The sorted array is :: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}