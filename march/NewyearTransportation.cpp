#include <vector>
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

  int n,t ; cin >> n>>t;

	vector<int>holders(n-1);
	for(int i=1 ; i < n ; i++){
		cin>>holders[i];
	}

	// possible jump = ai+i;

	int jumper = 1;

	bool flag = true;
int i = 1;

	while(i < n){
		jumper = holders[i]+i;

		//check if we have reached or crossed destination

		if(jumper == t){
			cout << "YES" ;
			break;
		}else if(jumper > t){
			cout << "NO" ;
			break;
		}
		i = jumper;
	}




 return 0;
}
