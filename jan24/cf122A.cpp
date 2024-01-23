#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;




int main(){

    int n ; cin >> n;
    
/*
    bool ok = true;
    int temp = n;
    while(temp>0){
        int res = temp % 10;
        temp=temp/10;
        if(res == 4 || res==7){
            ok= true;
        }else{
            ok= false;
            break;
        }
    }

    if(n%4==0 || n%7==0) ok= true;

    if(ok)cout<<"YES";
    else cout <<"NO";
*/

    int lk1 = 4,lk2=7,lk3=47,lk4=447,lk5=474,lk6=744,lk9=747,lk7=777,lk8=444,lk10=477;

    if(n%lk1==0 || n%lk2 ==0 ||n%lk3==0 || n%lk4 ==0  ||n%lk5==0 || n%lk6 ==0 ||n%lk7==0 || n%lk8 ==0 ||n%lk9==0 || n%lk10==0) cout <<"YES";
    else cout<<"NO";


 return 0;
}
