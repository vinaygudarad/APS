#include <iostream>
using namespace std;
int BIT[1000],a[1000];
int n=10;
void update(int i,int value)
{

  for(;i<=n;i+=(i&-i))
        BIT[i]+=value;

}
int query(int i)
{
    int sum=0;
    for(;i>0;i=i-(i&-i))
    {

        sum=sum+BIT[i];
    }
    return sum;

}


int main()
{
  int i,k;
  for(i=0;i<10;i++)
  {

    cin>>k;
    update(i,k);
  }
  cout<<query(10);
}