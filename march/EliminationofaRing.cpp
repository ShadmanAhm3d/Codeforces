#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> cycle(n);
    for (int &element : cycle) {
      cin >> element;
    }

    bool flag= true;
    for(int i=1 ; i<cycle.size()-1;i++){
      if(cycle[i-1]!=cycle[i+1]){
	//flag on 
	flag = false;
      }
    }


    if(flag == true && (n%2)==0){
      cout << n/2+1 << endl;
    }else{
      cout <<n<<endl;
    }
  }

  return 0;
}
