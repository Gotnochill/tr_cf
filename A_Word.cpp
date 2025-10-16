#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s; cin>>s;

    int totSize = s.size();
    int uCase = 0, lCase = 0 ;

    //iterate through the string
    //find how many upper and lower case
    for(int i=0; i<totSize; i++){

        if (s[i]>= 65 && s[i]<= 90){
            uCase++;
        } else if (s[i]>=97 && s[i]<= 122){
            lCase++;
        }
    }

    if (uCase > lCase){
        transform(s.begin(), s.end(), s.begin(), :: toupper);
    } else if (uCase < lCase){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
    } else if (uCase == lCase){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
    }

    cout<<s<<endl;

}