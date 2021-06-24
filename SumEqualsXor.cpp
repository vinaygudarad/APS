#include <bits/stdc++.h> 
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000'000'007

int SumEqualsXor(int n){
    ll count=0;
    while(n){
        if((n&1) == 0)
            count++;    //count no of zeroes
        n=n>>1;
    }
    return (1<<count);   // 2 power no of zeroes
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=4;
    int ans=SumEqualsXor(n);
    cout<<ans<<endl;

}


