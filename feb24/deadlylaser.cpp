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

  int tc ; cin >> tc;
  /* while(tc--){
		int n,m,sx,sy,d;
		cin >>n>>m>>sx>>sy>>d;

		if(sx-d > 1 && sy+d < m){
			cout << n+m-2<<endl;
		}else if(sy-d > 1 && sx+d < n){
			cout << n+m-2<<endl;
		}else{
			cout << -1 << endl;
		}
  } */
	while(tc--){
		int n,m,sx,sy,d;
		cin >>n>>m>>sx>>sy>>d;

		int top = sx-d;
		int bottom = sx+d;
		int left = sy-d;
		int right = sy+d;

		if( (top<=1 && bottom >=n-1) || (top <=1 && left <=1) || (left <=1 && right >= m-1) || (right>=m-1 && bottom >=n-1)){
			cout << -1<<endl;
		}else{
			cout <<n+m-1 << endl;
		}



	}

 return 0;
}
