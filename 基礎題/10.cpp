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
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<(char)((((int)s[i]+3-97)%26)+97);
    }
    cout<<endl;
}