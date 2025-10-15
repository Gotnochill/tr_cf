#include<bits/stdc++.h>
using namespace std;

int main(){

    int n {0}, h {0}; cin>>n>>h;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int width {0};
    for(int i=0; i<n; i++){
        if (arr[i]>h){
            width += 2; 
        }
        else {
            width += 1;
        }
    }
cout<<width<<"\n";

}