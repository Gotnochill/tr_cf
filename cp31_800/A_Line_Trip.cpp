#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){

        int n,x; cin>>n>>x;

        vector<int> gasStations(n);
        for(int i=0 ; i<n ; i++){
            cin>>gasStations[i];
        }
        
        int maxFuel = gasStations[0];
        for(int i = 1 ; i<n ; i++){
            maxFuel = max(maxFuel , gasStations[i] - gasStations[i-1]);
        }

        maxFuel = max( maxFuel , 2*(x-gasStations[n-1]));

        cout<<maxFuel<<endl;
    }
}