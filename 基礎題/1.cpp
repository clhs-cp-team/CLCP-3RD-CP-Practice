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

    double arr[10];
    double avg,var;

    for(int i=0,t;i<10;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg/=10;
    for(int i=0;i<10;i++){
        var+=(arr[i]-avg)*(arr[i]-avg);
    }
    cout<<avg<<" "<<var/10<<endl;
}