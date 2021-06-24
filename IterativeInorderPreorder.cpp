
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


void iterativeInorder(node *root){
    stack<node *> s;
    node *curr=root;
    while(curr != NULL || s.empty()==false){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr=s.top();s.pop();
        cout<<(curr->key)<<" ";
        curr = curr->right;
    }
}

void iterativePreorder(node *root){
    stack<node *> s;
    node *curr=root;
    s.push(root);
    while(s.empty()==false){
        curr = s.top();
        s.pop();
        cout<<(curr->key)<<" ";
        if(curr->right != NULL)
            s.push(curr->right);
        if(curr->left != NULL)
            s.push(curr->left);
    }
}

// void iterativePostorder(node *root){
//     stack<node *> s;
//     node *curr=root;
//     //s.push(root);
//     while(curr != NULL || s.empty()==false){
//         while(curr != NULL){
//             s.push(curr);
//             if(curr->right != NULL)
//                 s.push(curr->right);
//             curr = curr->left;
//         }
//         // if(curr != NULL){
//         //     curr = s.top();
            
//         //     curr = curr->left;
//         //     if(curr->left != NULL)
//         //         s.push(curr->left);
//         // }
//         // if(curr->right != NULL)
//         //     s.push(curr->right);
//         curr = s.top();
//         s.pop();
//         cout<<(curr->key)<<" ";
//         curr = curr->right;
        
//     }
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    node *root=new node(-10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->right= new node(50);
    root->left->left = new node(40);
    iterativeInorder(root);cout<<endl;
    iterativePreorder(root);cout<<endl;
    iterativePostorder(root);cout<<endl;
    return 0;
}