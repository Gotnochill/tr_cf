#include<bits/stdc++.h>
using namespace std;

int main(){

    int a {0}, b{0}; cin>>a>>b;
    int year {0};
    while (a<=b){
        year++;
        a *= 3;
        b *= 2;
    }

    cout<<year<<"\n";
}