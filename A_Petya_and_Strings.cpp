#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2; cin>>s1>>s2;
    std::transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), :: tolower);

    int temp = 0 ;

    for(int i=0; i<s1.size(); i++){
        if (s1[i]>s2[i]){
            temp=1;
            break;
        } else if (s1[i]<s2[i]){
            temp = -1 ;
            break;
        }
    }

    cout<<temp;

}