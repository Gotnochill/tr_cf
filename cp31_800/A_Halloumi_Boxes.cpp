#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> array , int n){

    for(int i=0 ; i<n-1 ; i++){
        if (array[i+1] < array[i]){
            return false;
        }
    }
    return true;
}

int main(){
    

    int t; cin>>t;
    while(t--){

        int n , k ; cin>>n>>k;

        vector<int> array(n);

        for(int i=0 ; i<n ; i++){
            cin>>array[i];
        }
        bool check = isSorted(array , n);

        if (k<2){
            if (check == true){
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } else {
            cout<<"YES"<<endl;
        } 
    }
}