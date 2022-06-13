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
    int a,b,c;
    cin>>a>>b>>c;
    if(b*b-4*a*c>0){
        int ans1=(-b+sqrt(b*b-4*a*c))/(2*a),ans2=(-b-sqrt(b*b-4*a*c))/(2*a);
        if(ans1<ans2)swap(ans1,ans2);
        cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2;
    }else if(!(b*b-4*a*c)){
        int ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
        cout << "Two same roots x=" <<ans1?ans1:0;
    }else{
        cout << "No real root";
    }
}