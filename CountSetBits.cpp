
#include <bits/stdc++.h>    
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops

int countSetBits(int x){
    int count=0;
    while(x){
        x = x & (x-1);
        count++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    cout<<countSetBits(t);
    return 0;
}


