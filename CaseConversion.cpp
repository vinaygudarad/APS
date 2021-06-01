#include <bits/stdc++.h>    
using namespace std;

string toUpper(string s){
    int t=32;
    for(int i=0;i<s.size();i++){
        if(s[i]>96 && s[i]<123){
            s[i] = s[i] & ~t;
        }
    }
    return s;
}

string toLower(string s){
    int t=32;
    for(int i=0;i<s.size();i++){
        if(s[i]>64 && s[i]<91){
            s[i] = s[i] | t;
        }
    }
    return s;
}


int main(){

    string s="Lewis Hamilton";
    string su=toUpper(s);
    string sl=toLower(s);
    cout<<su<<" "<<sl;

    return 0;
}