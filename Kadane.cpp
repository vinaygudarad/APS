
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops

int kadane(int a[],int n){
    int max = INT_MIN, tmax = 0;
     for (int i = 0; i < n; i++) {
         tmax = tmax + a[i];
         if (max < tmax)
            max = tmax;
         if (tmax < 0)
            tmax = 0;
     }
     return max; 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ans = kadane(a,n);
    cout<<ans<<endl;
    
    return 0;
}


