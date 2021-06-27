#include <iostream>
using namespace std;

int main()
{
  int n,k,i,j,min;
  cin>>n;
  cin>>k;
  for(i=0;i<n;i++)
      {
        if(i>k)
          min=k;
        else
          min=i;
        for(j=0;j<min;j++)
          if(j==0 || i==j)
              c[i][j]=1;
          c[j]=c[j]+c[j-1];

      }
  return 0;
}