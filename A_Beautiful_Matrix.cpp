#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][5];
    int m {0}, n{0};
    int val_1[n][m];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if (arr[i][j]==1){
                n = i ;
                m = j ;
            }
        }
    }

    int rows = abs(n-2);
    int column = abs(m-2);
    int total_dist = rows+column;
    cout<<total_dist<<"\n"; 


}