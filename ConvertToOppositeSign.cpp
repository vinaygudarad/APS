
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops

string convertToBinary(int n){
    string s;
    for(int i=30;i>=0;i--){
            if(n & (1<<i))
                s += "1";
            else
                s += "0";
        }
    return s;
}

int convertToOppositeSign(int n){
    int x=(~n | 1);
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        int n;
        cin>>n;
        string s=convertToBinary(n);
        cout<<s<<endl;
        int x=convertToOppositeSign(n);
        cout<<x<<endl;
        cout<<convertToBinary(x)<<endl;
        
    return 0;
}


