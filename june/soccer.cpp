#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll  long long
#define pb push_back
using namespace std;

void solve(){
  int x1,y1;cin >> x1 >> y1;
  int x2,y2;cin >> x2 >> y2;


  //x1 : y1 
  //agar score change nahi hua 
  if (x1 ==x2 && y1 == y2) {
    cout << "YES" <<endl;
    return;
  }
   
  if(x1 > y1 ){
    if(x2>= y2){
      cout << "YES" << endl;
      return ;
    }
  }

  if(y1 > x1 ){
    if(y2>= x2){
      cout << "YES" << endl;
      return ;
    }
  }

  cout << "NO\n";
}


int main(){

  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int tc ; cin >> tc;
  while(tc--){
    solve();
  }

 return 0;
}
