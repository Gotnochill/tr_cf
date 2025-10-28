#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){

        int n,k; cin>>n>>k;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if (k == 1){
            bool isSort = true;

            for(int i=1; i<arr.size(); i++){
                if (arr[i-1] < arr[i]){
                    continue;
                } else if (arr[i-1] > arr[i]){
                    isSort = false;
                    break;
                }
            }
            cout<< (isSort ? "YES\n" : "NO\n");

        } else {
            cout<< "YES\n";
        }
    }
    return 0;
}