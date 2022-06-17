#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define MOD 1000000009
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define int long long
using namespace std;

int n,win;
vector<pii>our;
vector<int>enemy;

bool check(int k){
    // m day our team horses
    vi list;
    for(int i=0;i<n;i++)list.pb(our[i].ff+our[i].ss*k);
    sort(list.begin(),list.end());

    auto up=upper_bound(list.begin(),list.end(),enemy[win-1]);

    // if(up!=list.end()){
    //     cout<<k<<" "<<up-list.begin()<<endl;
    //     return ((up-list.begin())<(win+1));
    // }else{
    //     return false;
    // }
    // return (up!=list.end());
    int s=0,l=0;
    for(int i=0;i<n;i++){
        if(list[i]>enemy[l]){
            s++;
            l++;
        }
    }
    return (s>=win);  
}

int solve(int l,int r){
    while(r-l!=1){
        int mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid;
    }
    return r;
}

void init(){
    our.clear();
    enemy.clear();
}

signed main(){
    io
    int T;cin>>T;
    while(T--){

        //cin
        cin>>n>>win;
        for(int i=0,a,b;i<n;i++){
            cin>>a>>b;
            our.pb({a,b});
        }
        for(int i=0,t;i<n;i++){
            cin>>t;enemy.pb(t);
        }
        sort(enemy.begin(),enemy.end());
        //find ans
        if(!check(100000000))cout<<"-1"<<endl;
        else cout<<solve(-1,100000000)<<endl;
        init();
    }
}