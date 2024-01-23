#include <algorithm>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;
const int N=1e7;
vector<ll> prime;
bool vis[100000000];
 
void sieve(){
    for(ll i=3;i*i<=N;i+=2){
        if(vis[i]==0){
            for(ll j=i*i;j<=N;j+=2*i){
                vis[j]=1;
            }
        }
    }
    prime.push_back(2*2);
    for(ll i=3;i<=N;i+=2){
        if(vis[i]==0) prime.push_back(i*i);
    }
}
int main(){
    sieve(); //O(Nlog(logN))
     
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll x,flag=0;
        cin>>x;
        auto it=binary_search(prime.begin(),prime.end(),x); //O(logN)
          //binary_search (return type 'bool')
        if(it) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}
