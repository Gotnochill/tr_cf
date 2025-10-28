#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        vector<int> arr(n);
        int isEven = 0, isOdd = 0 ;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if (arr[i]%2 == 0){
                isEven = 1;
            } else {
                isOdd = 1;
            }
        }

        if (isEven == 1 && isOdd == 1){
            sort(arr.begin(), arr.end());
        }

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        } cout<<endl;


    }
}