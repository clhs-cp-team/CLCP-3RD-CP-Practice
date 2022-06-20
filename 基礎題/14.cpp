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
    string a,b;
    cin>>a>>b;

    int arr[26]={0};

    for(int i=0;i<a.size();i++){
        arr[((int)a[i]+(int)b[i]-97*2)%26]++;  
    }
    for(int i=0;i<25;i++){
        cout<<arr[i]<<" ";
    }cout<<arr[25];
}