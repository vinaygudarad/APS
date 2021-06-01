
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int won=0;
        int wonx=0,wono=0;
        bool full=true;
        int cntx=0,cnto=0;
        //check rows and if grid is full
        for(int i=0;i<3;i++){
            if(s1[i] == '_')
                full=false;
            if(i == 0){
                if((s1[i] == s1[i+1])&&(s1[i+1] == s1[i+2]) && (s1[i] != '_')){
                    won++;
                    if(s1[i]=='X')
                        wonx++;
                    else
                        wono++;
                }
            }
            if(s1[i]=='X')
                cntx++;
            else if(s1[i]=='O')
                cnto++;
        }
        for(int i=0;i<3;i++){
            if(s2[i] == '_')
                full=false;
            if(i == 0){
                if((s2[i] == s2[i+1])&&(s2[i+1] == s2[i+2]) && (s2[i] != '_')){
                    won++;
                    if(s2[i]=='X')
                        wonx++;
                    else
                        wono++;
                }
            }
            if(s2[i]=='X')
                cntx++;
            else if(s2[i]=='O')
                cnto++;
        }
        for(int i=0;i<3;i++){
            if(s3[i] == '_')
                full=false;
            if(i == 0){
                if((s3[i] == s3[i+1])&&(s3[i+1] == s3[i+2]) && (s3[i] != '_')){
                    won++;
                    if(s3[i]=='X')
                        wonx++;
                    else
                        wono++;
                }
            }
            if(s3[i]=='X')
                cntx++;
            else if(s3[i]=='O')
                cnto++;
        }
        //check columns
        for(int i=0;i<3;i++){
            if((s1[i]==s2[i]) && (s2[i]==s3[i]) && (s1[i] != '_')){
                won++;
                    if(s3[i]=='X')
                        wonx++;
                    else
                        wono++;
            }
        }
        //check diagonals
        if((s1[0]==s2[1]) && (s2[1]==s3[2]) && (s1[0] != '_')){
            won++;
            if(s3[2]=='X')
                wonx++;
            else
                wono++;
        }
        if((s1[2]==s2[1]) && (s2[1]==s3[0]) && (s1[2] != '_')){
            won++;
            if(s3[0]=='X')
                wonx++;
            else
                wono++;
        }

        //1:grid is/can be filled completely and someone won or game drawn
        //2:grid can be filled completely(not full yet) and no one won yet
        //3:grid is invalid/cannot be filled completely
        if((abs(cntx-cnto)>1) || (cnto>cntx))   //unreachable states
            cout<<"3"<<endl;
        else if((wonx==1) && (wono==0) && (cntx>cnto))  //last value entered by x and wins
            cout<<"1"<<endl;
        else if((wonx==0) && (wono==1) && (cntx==cnto)) //last value entered by o and wins
            cout<<"1"<<endl;
        else if((won == 0) && (full))   //grid is full and game is drawn
            cout<<"1"<<endl;
        else if((wonx==2) && (full))    //special case: 
            cout<<"1"<<endl;
        else if((won==0) && (!full))    //grid is not completed and no one won yet
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;   
    }
    return 0;
}


