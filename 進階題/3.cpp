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

int n;
double arr[11][3];

inline double solve(double k){
    double ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,((arr[i][0]*(k-arr[i][1])*(k-arr[i][1]))+arr[i][2]));
    }
    return ans;
}

int main(){
    io
    int t;cin>>t;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        }
        double l=0.0,r=300.0,mr,ml;
        int count=0;
        while(count<=100){
            mr=r-((r-l)/3.0);
            ml=l+((r-l)/3.0);
            if(solve(mr)>solve(ml))r=mr;
            else l=ml;
            count++;
        }
        cout<<fixed<<setprecision(6)<<solve(mr)<<endl;
    }
}