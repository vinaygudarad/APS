#include <bits/stdc++.h>    
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000'000'007

ll binExponentiation(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b%2)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=432432,k=23443;
    int ans=binExponentiation(n,k);
    cout<<ans<<endl;
    return 0;
}

