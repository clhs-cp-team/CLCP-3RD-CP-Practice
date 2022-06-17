#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define MOD 1000000009
#define endl "\n"
#define AC ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    AC
    
    int n,k;cin>>n>>k;

    // vi arr;

    // for(int i=0,t;i<n;i++){
    //     cin>>t;arr.pb(t);
    // }

    // while(k--){
    //     int t;cin>>t;
    //     auto lr=lower_bound(arr.begin(),arr.end(),t);
    //     auto ur=upper_bound(arr.begin(),arr.end(),t);
    //     if(lr!=ur)cout<<lr-arr.begin()+1<<endl;
    //     else cout<<0<<endl;
    // }

    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[i]=0;
    }
    for(int i=0,t;i<n;i++){
        cin>>t;mp[t]=i+1;
    }
    for(int i=0,t;i<k;i++){
        cin>>t;
        auto it=mp.find(t);
        cout<<(it!=mp.end()?it->second:0)<<endl;
    }
}