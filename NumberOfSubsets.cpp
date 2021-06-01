
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000000007

int power(long long int x,int n){
    ll res=1;
    x=x % MOD;
    while(n>0){
        if(n & 1)
            res = (res*x)% MOD;
        n = n >> 1;
        x = (x*x) % MOD;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ans=power(2,n);
        cout<<ans<<endl;
    }
    return 0;
}


