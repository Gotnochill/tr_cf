#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int highest = arr[0];
        for(int i=0; i<n; i++){
            
            //case of being at the last stop => U-Turn from point x;
            if (i == n-1)
            {
                int distance = 2 * (x-arr[i]) ;
                if (distance>highest){
                    highest = distance;
                }
            }
            //other normal cases
            else 
            {
                int distance = (arr[i+1]-arr[i]);
                if (  distance > highest){
                highest = distance;
            }
            }
            

            
        }
        cout<<highest<<endl;
    }
}