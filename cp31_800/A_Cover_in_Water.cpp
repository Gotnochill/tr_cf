#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        string s; cin>>s;

        int currCount = 0 ;
        int action = 0 ;
        bool found = false;

        for(int i = 0 ; i < n ; i++){

            if (s[i] == '.'){
                currCount++;
            }
            else if (s[i] == '#'){
                if (currCount >= 3){
                    action = 2;
                    found = true;
                    break;
                } else {
                    action += currCount;
                }
                currCount = 0 ;
            }
        }
        if (!found){
            if(currCount >= 3){
                action = 2;
            } else {
                action += currCount;
            }
        }
        cout<<action<<endl;
    }
}