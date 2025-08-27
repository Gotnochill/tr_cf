#include<bits/stdc++.h>
using namespace std;

int main(){

    int n {0}; cin>>n;
    string s; cin>>s;

    int count_A {0}, count_D {0};

    for(int i=0; i<s.size(); i++){
        if (s[i] == 'A'){
            count_A++;
        } else {
            count_D++;
        }
    }

    if (count_A>count_D){
        cout<<"Anton\n";
    } else if (count_A<count_D){
        cout<<"Danik\n";
    } else {
        cout<<"Friendship\n";
    }
}