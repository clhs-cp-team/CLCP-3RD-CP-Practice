#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define MOD 1000000009
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    io
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<i+1;
        }
        cout<<" ";
        for(int l=0;l<=i;l++){
            cout<<i+1;
        }
        cout<<endl;
    }
}
