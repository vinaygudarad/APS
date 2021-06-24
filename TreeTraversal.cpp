
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

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

void preorder(node *root){
    if(root != NULL){
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<(root->key)<<" ";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    node *root=new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    inorder(root);cout<<"\n";
    preorder(root);cout<<"\n";
    postorder(root);
    return 0;
}