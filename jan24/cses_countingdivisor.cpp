#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;


const int MAX_X = 1000006;

int main(){

  int tc ; cin >> tc;

    vector<int>divisors(MAX_X,0);

    for(int i=1 ; i<MAX_X; i++){
        for(int k=i ; k < MAX_X ; k+=i){
            divisors[k]++;
        }
    }

    while(tc--){
        int n ; cin >> n;
        cout << divisors[n] << endl;
    }


 return 0;
}
