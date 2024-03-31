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
  while(tc--){
		int n ,l ;
		cin >>n>>l;
		
		if(l >=10e4){
			for(int i=1 ;i<=n;i++){
				cout << i << " " ;
				continue;
			}
		}else{
			// 1 l+1 2l+1 
			for(int i=0; i <n;i++){
				cout << i*l+1 << " ";
			}
			cout << endl;
		}
  }

 return 0;
}
