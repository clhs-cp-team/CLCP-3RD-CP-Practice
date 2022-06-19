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
#define endl "\n"
using namespace std;

int main(){
    AC
    long long x,count;
    while(cin>>x){
        count=0;
        while(x!=1){
            if(x&1)x=3*x+1;
            else x/=2;
            count++;
        }
        cout<<count<<endl;
    }
}