#include <bits/stdc++.h>    
using namespace std;

#define fr(n) for(int i=0;i<n;i++)    
#define ll long long                  
#define MOD 1000'000'007
#define INFNTY 1e18

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    int result[n+m];
    fr(n)
        cin>>a[i];
    fr(m)
        cin>>b[i];
    a[n]=INFNTY;
    b[m]=INFNTY;
    int i=0,j=0;
    for(int k=0;k<(m+n);k++){
        if(a[i] <= b[j]){
            result[k]=a[i];
            i++;
        }
        else{
            result[k]=b[j];
            j++;
        }
    }
    
    fr((n+m))
        cout<<result[i]<<" ";
    return 0;
}


