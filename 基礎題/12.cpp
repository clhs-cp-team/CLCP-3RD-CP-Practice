#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define MOD 1000000009
#define AC ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int main(){
    AC
    int a,b,t;cin>>a>>b;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    cout<<a;
}