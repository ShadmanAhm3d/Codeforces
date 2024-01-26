#include <cmath>
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;



int main(){

	// n integers : 3
	//  3 
	// p = 24

	long long a , b , x ,n ,m;
	cin >> a>>b>>x;
	if(a % x == 0) n = a/x;
	else n = a/x + 1;

	m = b/x;

	cout << m-n+1 << endl;

 return 0;
}
