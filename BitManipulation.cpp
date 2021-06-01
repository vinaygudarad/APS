
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;


// The formula x & (x−1) sets the last one bit of x to zero, 
// the formula x & −x sets all the one bits to zero, except for the last one bit. 
// The formula x | (x−1) inverts all the bits after the last one bit. 
// Also note that a positive number x is a power of two exactly when x & (x−1)=0.

int setKthBitToOne(int n,int k){
    return n|(1<<k);
}

int setKthBitToZero(int n,int k){
    return n & ~(1<<k);
}

int invertKthBit(int n,int k){
    return n ^ (1<<k);
}

string convertToBinary(int n){
    string s;
    for(int i=31;i>=0;i--){
            if(n & (1<<i))
                s += "1";
            else
                s += "0";
        }
    return s;
}

int convertToOppositeSign(int n){
    int x=(~n | 1);
    return x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        int n;
        cin>>n;
        string s=convertToBinary(n);
        cout<<s<<endl;
        int x=convertToOppositeSign(n);
        cout<<x<<endl;
        cout<<convertToBinary(x)<<endl;
        int y=setKthBitToZero(n,1);
        int z=setKthBitToOne(n,2);
        int xx=invertKthBit(n,1);
        cout<<"setKthBitToOne:"<<z<<endl;
        cout<<"setKthBitToZero:"<<y<<endl;
        cout<<"invertKthBit:"<<xx<<endl;
    return 0;
}


