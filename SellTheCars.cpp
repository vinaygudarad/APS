#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,i;
const unsigned int modd= 1000000007;
long n;
long long sum;
cin>>t;
while(t--)
        {
         cin>>n;
         int a[n];

         for(i=0;i<n;i++)
            cin>>a[i];
         sort(a,a+n,greater<int>());
         sum=a[0];
         for(i=1;i<n;i++)
         {
             a[i]=a[i]-i;
             if(a[i]<0)
                a[i]=0;
             sum=sum+a[i];

         }

        sum=sum%modd;
        cout<<sum<<endl;
        }
}