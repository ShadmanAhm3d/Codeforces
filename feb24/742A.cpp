#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MOD 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;


long long binaryExponentiation(long long base, long long exponent) {
long long res = 1;
    while (exponent > 0) {
    if ( exponent & 1){
      res = (res * base)%10;
    }

    base=(base*base)%10;
        exponent >>= 1;
    }
    return res;
}


int main(){

       int n ;cin >> n;
	int res = binaryExponentiation(8,n);
	
	cout << res;

 return 0;
}
