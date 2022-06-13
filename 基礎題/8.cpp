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
    while(n--){
        int t;cin>>t;
        bool jud=true;
        for(int i=2;i<t/2;i++){
            if(!(t%i)){
                jud=false;
                break;
            }
        }
        cout<<(jud?"Y":"N")<<endl;
    }
}