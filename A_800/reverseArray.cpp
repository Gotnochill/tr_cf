#include<bits/stdc++.h>
using namespace std;

void newArrayContainer(int* arr, int n){
    int newArray[n];

    int size = n+1 ;
    //pick one element from the end of the original array and put it from i=0 in the new array
    while(size--){
        int i=0, j=n;
        newArray[j]=arr[i];
        j--; i++;
    }   

    cout<<"The new reversed array is: \n";
    for(int i=0; i<n; i++){
        cout<<newArray[i]<<" ";
    }
}

int main(){

    cout<<"Enter the number of elements needed in the array: \n";
    int n; cin>>n;

    //input the array here
    int arr[n];
    cout<<"Enter the elements for the array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //now there are multiple ways to reverse this array

    newArrayContainer(arr, n);
}