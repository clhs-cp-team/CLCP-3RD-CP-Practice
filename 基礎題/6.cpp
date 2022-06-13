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
    n--;
    if(n/3==0){
        cout<<"spring"<<endl;
    }else if(n/3==1){
        cout<<"summer"<<endl;
    }else if(n/3==2){
        cout<<"fall"<<endl;
    }else{
        cout<<"winter"<<endl;
    }
}