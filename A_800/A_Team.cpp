#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int q_count {0};

    while (n--){
        int arr[3];
        int count {0};

        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        for(int i=0; i<3; i++){
            if (arr[i]==1){
                count++;
            }
        }

        if (count>=2){
            q_count++;
        }
    }
    cout<<q_count<<"\n";
}