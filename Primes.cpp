
#include <bits/stdc++.h> 
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000'000'007
int n=3;
vector<bool> p(n); 

bool isPrime(){
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    if(n%2 == 0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i == 0)
            return false;
    return true;
}

void primes(){
    p[0]=p[1]=0;
    for(int i=2;i<=n;i++)   //consider all are prime
        p[i]=1;
    for(int j=4;j<=n;j+=2)  //cancel all even numbers
                p[j]=0;
    for(int i=3;i<=n;i+=2)  //check for only odd numbers
        if(p[i])
            for(int j=i*i;j<=n;j+=i)    //from i^2 to n, cancel all multiples of i
                p[j]=0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

      
    //cin>>n;
    cout<<(isPrime())<<endl;
    primes();    //to see how many prime numbers are there from 1 to n, use sieve
    cout<<p[n]<<endl;    //we can see if a number is prime or not from this method also
    int count=0;
    for(int i=0;i<=n;i++)
        if(p[i])
            count++;
    cout<<count<<endl;

}


