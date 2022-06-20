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
    int x;
    while(cin>>x){
        vector<bool>arr;
        while(x>0){
            arr.pb(x%2);
            x/=2;
        }
        for(int i=arr.size()-1;i>=0;i--)cout<<arr[i];
        cout<<endl;
    }
}