#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int odd_count {0};
        int zero_count {0};
        int cost {0};

        for(int i: arr){
            if (i==-1){
                odd_count++;
            }
                else if (i==0){
                    zero_count++;
                }
        }

        if (odd_count%2==0){
            cost = zero_count;
        } else if (odd_count%2 != 0){
            cost = zero_count + 2;
        }

        cout<<cost<<"\n";
    }
}