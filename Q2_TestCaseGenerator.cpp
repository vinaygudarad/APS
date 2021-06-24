#include <bits/stdc++.h>    
using namespace std;

#define fr(n) for(int i=0;i<n;i++)    
#define ll long long                  
#define MOD 1000'000'007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

// initialise the size
    int n=1e4;
    int m=1e3;
    int x=12345;
    vector<ll> a(n);
    vector<ll> b(m);
    cout<<n<<" "<<m<<" "<<x<<endl;
    
// generate the array elements with any custom function
    for(int i=0;i<n;i++){
        a[i]=(i*3)-(321);           // example to generate array elements
    }
    for(int i=0;i<m;i++){
        b[i]=(i);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(auto it : a)
        cout<<it<<" ";
    cout<<endl;
    for(auto it : b)
        cout<<it<<" ";
    return 0;
}
