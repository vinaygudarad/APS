
#include <bits/stdc++.h>    //C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\mingw32\bits
using namespace std;

//https://www.hackerearth.com/practice/notes/getting-started-with-the-sport-of-programming/

#define fr(n) for(int i=0;i<n;i++)  // or use snippets ==> for,tab  
#define ll long long                  // can use it for all loops
#define MOD 1000'000'007


struct  node{
    int key;
    node *left;
    node *right;
    node(int n){
        key=n;
        left=right=NULL;
    }
};


int maximum(node *root){
    if(root == NULL)
        return INT_MIN;
    int m=(root->key);
    return max(m,max(maximum(root->left),maximum(root->right)));
}

int minimum(node *root){
    if(root == NULL)
        return INT_MAX;
    int m=(root->key);
    return min(m,min(minimum(root->left),minimum(root->right)));
}

int height(node *root){
    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->left));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    node *root=new node(-10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    cout<<maximum(root)<<" "<<minimum(root)<<" "<<height(root);
    return 0;
}