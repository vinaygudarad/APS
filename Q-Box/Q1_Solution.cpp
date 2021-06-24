#include <bits/stdc++.h>    
using namespace std;

int main()
{
    float x,p,q;
    cin>>x>>p>>q;
    float result=p+q+((p*q)/100);
    result = x + ((result*x)/100);
    long long answer = (long long)result;
    cout<<answer<<endl;

    return 0;
}
