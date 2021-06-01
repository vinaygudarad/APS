
#include <bits/stdc++.h> 
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000'000'007

bool isPerfectSquare(int n){
    long long int temp=sqrt(n);
    temp = temp*temp;
    if(temp == n)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=3;
    //cin>>n;
    cout<<(isPerfectSquare(n));
}


